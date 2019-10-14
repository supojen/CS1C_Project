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

/*******************************************************
* createTable() -
*  This function creates a table for the database.
*  There are 5 varchar variables to help define the
*  the table (name, address, rating, product and key)
*  and a boolean variable (receive pamphlet). If the 
*  program undergoes an error, it will output a
*  statement "error creating a table
/*******************************************************
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

/*******************************************************
* loadEntries() -
*  This function helps the program read the contents.
*  from the database. This function primarily uses
*  the query function, "select * from". The database
*  in which it is selected from is called customer.
*  Throughout the process, the data returned is 
*  is stored in the table created in createTable().
*  If the database or data has trouble storing the
*  values, it will output "error loading values to
*  db".
/*******************************************************
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

/*******************************************************
* loadEntrieskeysorted() -
*  This function will help sort the data by the key
*  customers. The function will primarily use a 
*  query function, "select * from". The function will
*  select the data from the custmer database and then 
*  output only the key customers. If the customer is
*  not key, they will not show on the database. If
*  the values go through an error, a statement will 
*  output "error loading values to db".
/*******************************************************
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

/*******************************************************
* loadEntriesproductssorted() -
*  This function will help sort the data by if the
* customer has bought a product. The function will
* primarily use a query function, "select * from". The
* function will select the data from the customer
* database and then output only the customer who have
* bought a product. If the customer bought no products, 
* then the customer won't show on the database. If the
* values go through an error, a statement will output
* "error loading values to db".
/*******************************************************
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

/*******************************************************
* loadEntrieskeysorted() -
*  This function will help sort the data by the key
*  customers. The function will primarily use a 
*  query function, "select * from". The function will
*  select the data from the custmer database and then 
*  output only the key customers. If the customer is
*  not key, they will not show on the database. If
*  the values go through an error, a statement will 
*  output "error loading values to db".
/*******************************************************
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

/*******************************************************
* getEntryFromName() -
*  This function will read one customer information from
*  the database. The customer is called via name. Once
*  the customer is read, the name, address, rating, key,
*  product and receivePamphlet variables are then stored
*  in the CustomerEntry * object.
/*******************************************************
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


 /*******************************************************
 * getCustomerNameFromQModelIndex() -
 *  This function will read the customer name from the
 *  database. This will be done via to QModelIndex 
 *  object. Once the name of the customer is read,
 *  the nameOfCustomer QString variable will be
 *  returned.
 /*******************************************************
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

/*******************************************************
* createEntry() -
*  This function will help create new customer 
*  information to the database. The variables get 
*  added through a query. The qry.addBindValue()
*  function is used for the name, address, rating,
*  key, products and getPamphlet variables to add to 
*  the database. If there is an error adding the 
*  data to the database, then "error adding data" 
*  will output.
/*******************************************************
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

 /*******************************************************
 * deleteEntry() -
 *  This function will help delete a customer from
 *  the database. The function will ask the user
 *  which customer is to be deleted via name. The function
 *  primarily uses a query function prepare and 
 *  addBindValue().The function will not comply if the 
 *  customer name does not exist on the list. A statement
 *  "error deleting values to db" will be outputted if
 *  the user either types the name wrong or customer 
 *  does not exist on the list.
 /*******************************************************
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
/*******************************************************
* updateEntry() -
*  This function will help update a customer list
*  if the customer desires so. The variables get 
*  added through a query. The qry.addBindValue()
*  function is used for the name, address, rating,
*  key, products and getPamphlet variables to replace 
*  the variables in the database. If there is an error 
*  adding the data to the database, then "error adding 
*  data" will output.
/*******************************************************
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
