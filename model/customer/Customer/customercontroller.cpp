#include "customercontroller.h"

CustomerController::CustomerController(QObject *parent) : QObject(parent)
{
    // Connecting to database
    m_database = QSqlDatabase::addDatabase("QSQLITE");
    m_database.setDatabaseName("./customer.db");
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
    "create table customer("
    "id              integer prinary key  autoincrement not null,  "
    "name            varchar(50),                                  "
    "address         varchar(50),                                  "
    "username        varchar(50) not null unique,                  "
    "password        varchar(50) not null,                         "
    "credit          varchar(50),                                  "
    "phone           varchar(50),                                  "
    "rating          varchar(50),                                  "
    "key             varchar(50),                                  "
    "product         varchar(100),                                 "
    "maintenance     varchar(50),                                  "
    "recievePamphlet boolean                                       "
    ");";

    QSqlQuery qry;
    if(!qry.exec(query))
    {
        qDebug() << "error creating table" << endl;
    }


}




/**
 * @brief CustomerController::createEntry
 *              This function will help to create an customer information.
 * @param name
 * @param address
 * @param username
 * @param password
 * @param credit
 * @param phone
 * @param rating
 * @param key
 * @param products
 * @param maintainPlan
 * @param getPamphlet
 */
void CustomerController::createEntry(QString name,
                                     QString address,
                                     QString username,
                                     QString password,
                                     QString credit,
                                     QString phone,
                                     QString rating,
                                     QString key,
                                     QList<QString> products,
                                     QString maintainPlan,
                                     bool getPamphlet)
{
    QSqlQuery qry;
    qry.prepare("insert into customer (          "
                "name,                           "
                "address,                        "
                "username,                       "
                "password,                       "
                "credit,                         "
                "phone,                          "
                "rating,                         "
                "key,                            "
                "product,                        "
                "maintenance,                    "
                "recievePamhlet)                 "
                "values(?,?,?,?,?,?,?,?,?,?,?);  "
                );
    qry.addBindValue(name);
    qry.addBindValue(address);
    qry.addBindValue(username);
    qry.addBindValue(password);
    qry.addBindValue(credit);
    qry.addBindValue(phone);
    qry.addBindValue(rating);
    qry.addBindValue(key);
    qry.addBindValue(convertProductsToString(products));
    qry.addBindValue(maintainPlan);
    qry.addBindValue(getPamphlet);

    if(!qry.exec())
    {
        qDebug() <<"error adding values to db" << endl;
    }

}



/**
 * @brief CustomerController::deleteEntry
 *          This function will help us delete the entry
 * @param name
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

void CustomerController::updateEntry(QString name, QString address, QString username, QString password, QString credit, QString phone, QString rating, QString key, QList<QString> products, QString maintainPlan, bool getPamphlet)
{
    QSqlQuery qry;
    qry.prepare("update customer set  "
                "name            = ?, "
                "address         = ?, "
                "username        = ?, "
                "password        = ?, "
                "credit          = ?, "
                "phone           = ?, "
                "rating          = ?, "
                "key             = ?, "
                "product         = ?, "
                "maintenance     = ?, "
                "recievePamhlet  = ?; "
                     );

    qry.addBindValue(name);
    qry.addBindValue(address);
    qry.addBindValue(username);
    qry.addBindValue(password);
    qry.addBindValue(credit);
    qry.addBindValue(phone);
    qry.addBindValue(rating);
    qry.addBindValue(key);
    qry.addBindValue(convertProductsToString(products));
    qry.addBindValue(maintainPlan);
    qry.addBindValue(getPamphlet);


    if(!qry.exec())
    {
        qDebug() <<"error updating values to db" << endl;

    }

}



QString CustomerController::convertProductsToString(QList<QString> products)
{
    QString result;

    for(auto & item: products)
    {
        result += item;
        result += ",";
    }

    return result;
}
