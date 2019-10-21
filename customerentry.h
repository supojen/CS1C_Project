#ifndef CUSTOMERENTRY_H
#define CUSTOMERENTRY_H

#include <QObject>
#include <QString>
#include <QList>
#include <QStringList>


using namespace std;


class CustomerEntry : public QObject
{
    Q_OBJECT
public:
    explicit CustomerEntry(QObject *parent = nullptr);


  /*****************************************************
   * QString getName() -
   *  This function gets the customer's name
   ****************************************************/
    QString getName() const;
  /*****************************************************
   * void setName(const QString &name) -
   *  This function sets the customer's name
   ****************************************************/
    void setName(const QString &name);
  /*****************************************************
   * QString getAddress() -
   *  This function gets the customer's Address
   ****************************************************/
    QString getAddress() const;
  /*****************************************************
   * void setAddress(const QString &address) -
   *  This function sets the customer's Address
   ****************************************************/
    void setAddress(const QString &address);
  /*****************************************************
   * QString getRating() -
   *  This function gets the customer's Rating
   ****************************************************/
    QString getRating() const;
  /*****************************************************
   * void setRating(const QString &rating) -
   *  This function setss the customer's Rating
   ****************************************************/
    void setRating(const QString &rating);
  /*****************************************************
   * QString getKey() -
   *  This function gets the customer's type
   ****************************************************/
    QString getKey() const;
   /*****************************************************
   * void setKey(const QString &key) -
   *  This function sets the customer's type
   ****************************************************/
    void setKey(const QString &key);
  /*****************************************************
   * bool getGetPamphlet() -
   *  This function is resposible for checking on
   *  Pamphlet wether it was sent or not
   ****************************************************/
    bool getGetPamphlet() const;
  /*****************************************************
   * void setGetPamphlet(bool getPamphlet) -
   *  This function is resposible for marking the customer
   * wether the pamphlet was sent or not
   ****************************************************/
    void setGetPamphlet(bool getPamphlet);

  /*****************************************************
   * QStringList getProducts() -
   *  This function gets the products that was stored
   *  in the object
   ****************************************************/
    QStringList getProducts() const;
  /*****************************************************
   * void setProducts(const QStringList &products) -
   *  This function sets the products and store them
   *  in the object
   ****************************************************/
    void setProducts(const QStringList &products);

signals:

    void nameChanged();
    void addressChanged();
    void ratingChanged();
    void keyChanged();
    void productsChanged();
    void getPhamphletChanged();

public slots:


private:
    QString          m_name;
    QString          m_address;
    QString          m_rating;
    QString          m_key;
    QStringList      m_products;
    bool             m_getPamphlet;
};

#endif // CUSTOMERENTRY_H
