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

    QString getUsername() const;
    void setUsername(const QString &username);

    QString getPassword() const;
    void setPassword(const QString &password);

    QString getCredit() const;
    void setCredit(const QString &credit);

    QString getPhone() const;
    void setPhone(const QString &phone);

    QString getRating() const;
    void setRating(const QString &rating);

    QString getKey() const;
    void setKey(const QString &key);


    QString getMaintainPlan() const;
    void setMaintainPlan(const QString &maintainPlan);

    bool getGetPamphlet() const;
    void setGetPamphlet(bool getPamphlet);

    QStringList getProducts() const;
    void setProducts(const QStringList &products);

signals:

    void nameChanged();
    void addressChanged();
    void usernameChanged();
    void passwordChanged();
    void creditChanged();
    void phoneChanged();
    void ratingChanged();
    void keyChanged();
    void productsChanged();
    void maintainPlanChanged();
    void getPhamphletChanged();

public slots:


private:
    QString          m_name;
    QString          m_address;
    QString          m_username;
    QString          m_password;
    QString          m_credit;
    QString          m_phone;
    QString          m_rating;
    QString          m_key;
    QStringList      m_products;
    QString          m_maintainPlan;
    bool             m_getPamphlet;
};

#endif // CUSTOMERENTRY_H
