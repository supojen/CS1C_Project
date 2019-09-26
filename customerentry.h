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




    QString getName() const;
    void setName(const QString &name);

    QString getAddress() const;
    void setAddress(const QString &address);

    QString getRating() const;
    void setRating(const QString &rating);

    QString getKey() const;
    void setKey(const QString &key);

    bool getGetPamphlet() const;
    void setGetPamphlet(bool getPamphlet);

    QStringList getProducts() const;
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
