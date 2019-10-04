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

