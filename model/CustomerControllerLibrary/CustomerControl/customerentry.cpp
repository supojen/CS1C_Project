#include "customerentry.h"

CustomerEntry::CustomerEntry(QObject *parent) : QObject(parent)
{

}

QString CustomerEntry::getName() const
{
    return m_name;
}

void CustomerEntry::setName(const QString &name)
{
    m_name = name;
}

QString CustomerEntry::getAddress() const
{
    return m_address;
}

void CustomerEntry::setAddress(const QString &address)
{
    m_address = address;
}

QString CustomerEntry::getUsername() const
{
    return m_username;
}

void CustomerEntry::setUsername(const QString &username)
{
    m_username = username;
}

QString CustomerEntry::getPassword() const
{
    return m_password;
}

void CustomerEntry::setPassword(const QString &password)
{
    m_password = password;
}

QString CustomerEntry::getCredit() const
{
    return m_credit;
}

void CustomerEntry::setCredit(const QString &credit)
{
    m_credit = credit;
}

QString CustomerEntry::getPhone() const
{
    return m_phone;
}

void CustomerEntry::setPhone(const QString &phone)
{
    m_phone = phone;
}

QString CustomerEntry::getRating() const
{
    return m_rating;
}

void CustomerEntry::setRating(const QString &rating)
{
    m_rating = rating;
}

QString CustomerEntry::getKey() const
{
    return m_key;
}

void CustomerEntry::setKey(const QString &key)
{
    m_key = key;
}


QString CustomerEntry::getMaintainPlan() const
{
    return m_maintainPlan;
}

void CustomerEntry::setMaintainPlan(const QString &maintainPlan)
{
    m_maintainPlan = maintainPlan;
}

bool CustomerEntry::getGetPamphlet() const
{
    return m_getPamphlet;
}

void CustomerEntry::setGetPamphlet(bool getPamphlet)
{
    m_getPamphlet = getPamphlet;
}

QStringList CustomerEntry::getProducts() const
{
    return m_products;
}

void CustomerEntry::setProducts(const QStringList &products)
{
    m_products = products;
}
