#include "customercontroller.h"

CustomerController::CustomerController(QObject *parent) : QObject(parent)
{
    // Connecting to database
    m_database = QSqlDatabase::addDatabase("QSQLITE");
    //QString path = QDir::currentPath() + "customer.db";
    m_database.setDatabaseName("/Users/mohamedsoliman/QT PROJECTS/project1/Project1/customer.db⁩");
    if(!m_database.open())
    {
        qDebug() << "problem opening database" << endl;
    }
}


/**
 * @brief CustomerController::createTable
 *      This function will help us create an customer table
 */
void CustomerController::createTable()
{


    // About creating the table
    QString query =
    "create table customer(                                        "
    "name            varchar(50) primary key,                      "
    "address         varchar(50),                                  "
    "rating          varchar(50),                                  "
    "product         varchar(50),                                  "
    "key             varchar(50),                                  "
    "recievePamphlet boolean                                       "
    ");                                                            ";

    QSqlQuery qry;
    if(!qry.exec(query))
    {
        qDebug() << "error creating table" << endl;
    }


}

/**
 * @brief CustomerController::loadEntries
 *        Load the customer information from database to QSqlQueryModel.
 * @return
 *        QSqlQueyModel that contain the customers' informations.
 */
QSqlQueryModel *CustomerController::loadEntries()
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery qry;
    qry.prepare("select * from customer;");
    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;

    }

    model->setQuery(qry);

    return model;
}

QSqlQueryModel *CustomerController::loadEntriessorted()
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery qry;
    qry.prepare("select * from customer order by name;");

    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;

    }
    model->setQuery(qry);

    return model;
}

QSqlQueryModel *CustomerController::loadEntrieskeysorted()
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery qry;
    qry.prepare("select * from customer where key = \'key\' order by name;");

    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;

    }
    model->setQuery(qry);

    return model;
}

QSqlQueryModel *CustomerController::loadEntriesproductssorted()
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery qry;
    qry.prepare("select * from customer where not product =\"\" order by name;");

    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;

    }
    model->setQuery(qry);

    return model;
}



/**
 * @brief CustomerController::getEntryFromName
 *          This fuction load the customer information into the
 *          CustomerEntry object.
 * @param name
 *          Representing the customer's name which you want to load.
 * @return
 *          CustomerEntry object.
 */
CustomerEntry *CustomerController::getEntryFromName(QString name)
{
    CustomerEntry* entry = new CustomerEntry();

    QSqlTableModel model;
    model.setTable("customer");
    QString condition = "name = \'" + name + "\';";
    model.setFilter(condition);
    model.select();

    entry->setName(model.record(0).value("name").toString());
    entry->setAddress(model.record(0).value("address").toString());
    entry->setRating(model.record(0).value("rating").toString());
    entry->setKey(model.record(0).value("key").toString());
    entry->setProducts(model.record(0).value("product").toString().split(","));
    entry->setGetPamphlet(model.record(0).value("recievePamphlet").toBool());


    return entry;
}


QString CustomerController::getCustomerNameFromQModelIndex(const QModelIndex &index)
{
    QSqlTableModel model;
    model.setTable("customer");
    model.select();
    QString nameOfCustomer = model.record(index.row()).value("name").toString();


    return nameOfCustomer;
}




/**
 * @brief CustomerController::createEntry
 *              This function will help to create an customer information.
 * @param name
 * @param address
 * @param rating
 * @param key
 * @param products
 * @param getPamphlet
 */
void CustomerController::createEntry(QString name,
                                     QString address,
                                     QString rating,
                                     QString key,
                                     QStringList products,
                                     bool getPamphlet)
{


    QSqlQuery qry;
    qry.prepare("insert into customer (          "
                "name,                           "
                "address,                        "
                "rating,                         "
                "key,                            "
                "product,                        "
                "recievePamphlet)                "
                "values(?,?,?,?,?,?);  "
                );
    qry.addBindValue(name);
    qry.addBindValue(address);
    qry.addBindValue(rating);
    qry.addBindValue(key);
    qry.addBindValue(convertProductsToString(products));
    if(getPamphlet)
        qry.addBindValue("true");
    else
        qry.addBindValue("false");

    if(!qry.exec())
    {
         qDebug() << "Error adding data" << endl;
    }


}



/**
 * @brief   CustomerController::deleteEntry
 *          This function will help us delete the entry
 * @param name
 *          Representing the customer's name which you want to delete.
 */
void CustomerController::deleteEntry(QString name)
{
    QSqlQuery qry;
     qry.prepare("delete from customer where name = ?;");

     qry.addBindValue(name);

     if(!qry.exec())
     {
         qDebug() <<"error deleting values to db" << endl;

     }

}

/**
 * @brief CustomerController::updateEntry
 *        This function update the customer's informations.
 * @param name
 * @param address
 * @param rating
 * @param key
 * @param products
 * @param getPamphlet
 */
void CustomerController::updateEntry(QString name,
                                     QString address,
                                     QString rating,
                                     QString key,
                                     QStringList products,
                                     bool getPamphlet)
{
    QSqlQuery qry;
    qry.prepare("update customer set  "
                "name            = ?, "
                "address         = ?, "
                "rating          = ?, "
                "key             = ?, "
                "product         = ?, "
                "recievePamphlet  = ?  "
                "where name = ?      ;"
                     );

    qry.addBindValue(name);
    qry.addBindValue(address);
    qry.addBindValue(rating);
    qry.addBindValue(key);
    qry.addBindValue(convertProductsToString(products));
    if(getPamphlet)
        qry.addBindValue("true");
    else
        qry.addBindValue("false");
    qry.addBindValue(name);


    if(!qry.exec())
    {
        //qDebug() <<"error updating values to db" << endl;
        qDebug() << qry.lastError().text() << endl;

    }else {
            qDebug() <<"Customer is added successfully" << endl;
         }


}


/**
 * @brief CustomerController::convertProductsToString
 *        This fuction convert QListString to QString.
 * @param products
 * @return
 */
QString CustomerController::convertProductsToString(QStringList products)
{
    QString result;

    result = products.join(",");

    return result;
}

/**
 * @brief CustomerController::convertProductsToString
 *        This fuction convert QString to QListString.
 * @param products
 * @return
 */
QStringList CustomerController::convertProductsFromString(QString productsStr)
{
    QStringList result;

    result = productsStr.split(",");

    return result;
}

