#ifndef CUSTOMERCONTROLLER_H
#define CUSTOMERCONTROLLER_H

#include <QObject>
#include <QtSql>
#include "customerentry.h"
/*
QString          m_name;
QString          m_address;
QString          m_username;
QString          m_password;
QString          m_credit;
QString          m_phone;
QString          m_rating;
QString          m_key;
QList<QString>   m_products;
QString          m_maintainPlan;
bool             m_getPamphlet;
*/
class CustomerController : public QObject
{
    Q_OBJECT
public:
    explicit CustomerController(QObject *parent = nullptr);

    void static createTable();
    void createEntry(QString        name,
                     QString        address,
                     QString        username,
                     QString        password,
                     QString        credit,
                     QString        phone,
                     QString        rating,
                     QString        key,
                     QList<QString> products,
                     QString        maintainPlan,
                     bool           getPamphlet);
    void deleteEntry(QString name);
    void updateEntry(QString        name,
                     QString        address,
                     QString        username,
                     QString        password,
                     QString        credit,
                     QString        phone,
                     QString        rating,
                     QString        key,
                     QList<QString> products,
                     QString        maintainPlan,
                     bool           getPamphlet);

signals:

public slots:

private:
    QSqlDatabase         m_database;
    QList<CustomerEntry> m_entries;

    QString convertProductsToString(QList<QString> products);
};





#endif // CUSTOMERCONTROLLER_H
