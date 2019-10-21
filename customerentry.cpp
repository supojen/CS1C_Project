#include "customerentry.h"

CustomerEntry::CustomerEntry(QObject *parent) : QObject(parent)
{

}
/*****************************************************
 * QString getName() -
 *  This function gets the customer's name
 ****************************************************/
QString CustomerEntry::getName() const
{
    return m_name;
}
/*****************************************************
 * void setName(const QString &name) -
 *  This function sets the customer's name
 ****************************************************/
void CustomerEntry::setName(const QString &name)
{
    m_name = name;
}
/*****************************************************
 * QString getAddress() -
 *  This function gets the customer's Address
 ****************************************************/
QString CustomerEntry::getAddress() const
{
    return m_address;
}
/*****************************************************
 * void setAddress(const QString &address) -
 *  This function sets the customer's Address
 ****************************************************/
void CustomerEntry::setAddress(const QString &address)
{
    m_address = address;
}
/*****************************************************
 * QString getRating() -
 *  This function gets the customer's Rating
 ****************************************************/
QString CustomerEntry::getRating() const
{
    return m_rating;
}
/*****************************************************
 * void setRating(const QString &rating) -
 *  This function setss the customer's Rating
 ****************************************************/
void CustomerEntry::setRating(const QString &rating)
{
    m_rating = rating;
}
/*****************************************************
 * QString getKey() -
 *  This function gets the customer's type
 ****************************************************/
QString CustomerEntry::getKey() const
{
    return m_key;
}
/*****************************************************
* void setKey(const QString &key) -
*  This function sets the customer's type
****************************************************/
void CustomerEntry::setKey(const QString &key)
{
    m_key = key;
}
/*****************************************************
 * bool getGetPamphlet() -
 *  This function is resposible for checking on
 *  Pamphlet wether it was sent or not
 ****************************************************/
bool CustomerEntry::getGetPamphlet() const
{
    return m_getPamphlet;
}
/*****************************************************
 * void setGetPamphlet(bool getPamphlet) -
 *  This function is resposible for marking the customer
 * wether the pamphlet was sent or not
 ****************************************************/
void CustomerEntry::setGetPamphlet(bool getPamphlet)
{
    m_getPamphlet = getPamphlet;
}
/*****************************************************
 * QStringList getProducts() -
 *  This function gets the products that was stored
 *  in the object
 ****************************************************/
QStringList CustomerEntry::getProducts() const
{
    return m_products;
}
/*****************************************************
 * void setProducts(const QStringList &products) -
 *  This function sets the products and store them
 *  in the object
 ****************************************************/
void CustomerEntry::setProducts(const QStringList &products)
{
    m_products = products;
}
