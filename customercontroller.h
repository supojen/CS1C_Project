#ifndef CUSTOMERCONTROLLER_H
#define CUSTOMERCONTROLLER_H

#include <QObject>
#include <QtSql>
#include "customerentry.h"



class CustomerController : public QObject
{
    Q_OBJECT
public:
    explicit CustomerController(QObject *parent = nullptr);
    
    /*******************************************************
     * createTable() -
     *  This function creates a table for the database.
     *  There are 5 varchar variables to help define the
     *  the table (name, address, rating, product and key)
     *  and a boolean variable (receive pamphlet). If the 
     *  program undergoes an error, it will output a
     *  statement "error creating a table
      ****************************************************/
    void static createTable();
    
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
      ****************************************************/
    QSqlQueryModel* loadEntries();
    
    /*******************************************************
     * getEntryFromName() -
     *  This function will read one customer information from
     *  the database. The customer is called via name. Once
     *  the customer is read, the name, address, rating, key,
     *  product and receivePamphlet variables are then stored
     *  in the CustomerEntry * object.
      ****************************************************/
    CustomerEntry* getEntryFromName(QString name);
  
    /*******************************************************
     * getCustomerNameFromQModelIndex() -
     *  This function will read the customer name from the
     *  database. This will be done via to QModelIndex 
     *  object. Once the name of the customer is read,
     *  the nameOfCustomer QString variable will be
     *  returned.
      ****************************************************/
    QString getCustomerNameFromQModelIndex(const QModelIndex &index);
    
    /*******************************************************
     * loadEntriessorted() -
     *  This function will help sort the data by
     *  name. The function will primarily use a 
     *  query function, "select * from". The function
     *  will select the data from the customer 
     *  database and then order all of the customers by name
     *  alphabetically. If the values go through an 
     *  error, a statement will output "error loading
     *  values to db".
      ****************************************************/
    QSqlQueryModel* loadEntriessorted();
    
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
      ****************************************************/
    QSqlQueryModel* loadEntrieskeysorted();
    
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
      ****************************************************/
    QSqlQueryModel* loadEntriesproductssorted();

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
      ****************************************************/
    void createEntry(QString        name,
                     QString        address,
                     QString        rating,
                     QString        key,
                     QStringList products,
                     bool           getPamphlet);
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
      ****************************************************/
    void deleteEntry(QString name);
    
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
      ****************************************************/
    void updateEntry(QString        name,
                     QString        address,
                     QString        rating,
                     QString        key,
                     QStringList products,
                     bool           getPamphlet);

signals:

public slots:

private:
    QSqlDatabase         m_database;
    QList<CustomerEntry> m_entries;

    //******************* Helper Function ********************//
    QString convertProductsToString(QStringList products);
    QStringList convertProductsFromString(QString productsStr);
};





#endif // CUSTOMERCONTROLLER_H
