#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "customercontroller.h"
#include "QMessageBox"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    // Non-default constructor, passes in CustomerController pointer
    explicit MainWindow(CustomerController* controller,QWidget *parent = nullptr);
    ~MainWindow();  // Destructor

public slots:
    /*****************************************************
     * createEntry() -
     *  Calls on the CustomerController pointer object
     *  to create the entry for the database
     ****************************************************/
    void createEntry();

    /*****************************************************
     * deleteEntry() -
     *  Allows one to double click on the customerName
     *  in order to delete the entire customer information
     *  showCustomerList() shows the customerList.
     *  After deleting, the textAddresses beneath the
     *  database gets cleared
     ****************************************************/
    void deleteEntry();

    /*****************************************************
     * updateEntry() -
     *  Updates a customer entry after the user double
     *  clicks on a name.
     ****************************************************/
    void updateEntry();

    /*****************************************************
     * changePage() functions -
     *  Sets the currentwidget to be equal to the
     *  respective page
     ****************************************************/
    void changedatabasePage();
    void changePageCreatePage();
    void changetoadminpage();
    void changetologinpage();
    void changepageToContactUs();
    void changePageToHome();
    void changepagetobuynow();
    void changetocartpage();
    void changetoGuaranteepage();
    void changetocustomerreviewspage();
    void changetohelppage();
    void changeToPamphletPages();

    // Sets up connections (signals and slots)
    void setupconnections();

    // Once the table is pressed it shows the customer's information in the boxes
    void on_tableView_activated(const QModelIndex &index);

    /*****************************************************
     * pamphletSent() -
     *  After a customer requests a copy of a pamphlet,
     *  the database will add the new customer and
     *  the pamphletSent value will be true
     ****************************************************/
    void pamphletSent();

    /*****************************************************
     * buyingProduct() -
     *  After a new customer buys a certain product,
     *  it will add the new customer's information to the
     *  database
     ****************************************************/
    void buyingProduct();


private slots:
    /***********************************************************************
     * On_LoginPushBtn_Clicked()-
     *  This function stores the typed in username and password into temp
     *  variables and checks to see if they are the right username and password.
     *  If true, then after clicking the login button, the admin page will open.
     *  If false, then an error message will be displayed.
     **********************************************************************/
    void on_loginpushbtn_clicked();

    /***********************************************************************
     * on_cartBuyBtn_clicked()-
     *  This function stores the typed in name, address, and email in the
     *  final "Cart" page and stores them in temporary variables.
     *  Then, the function checks to see that each text line box is not empty.
     *  If at least one of them is empty, then an error message will be displayed.
     *  If all of them are appropriately filled, then a gratitude message
     *  will open and the buyingProduct() function will be called to
     *  store the new customer's information in the database.
     **********************************************************************/
    void on_cartBuyBtn_clicked();

    /***********************************************************************
     * on_cartButton_clicked() -
     *  Takes place before Guarantee page. If none of the products
     *  and their checkboxes are checked, then the program will display
     *  an error message. Otherwise, it will change to guarantee Page
     **********************************************************************/
    void on_cartButton_clicked();

    /***********************************************************************
     * on_pamphletSubmitBtn_clicked() -
     *  Takes place before customer offically requests a copy.
     *  Checks to see that customer filled in information before requesting
     *  a copy. If true, then the customer's info will be stored into database
     **********************************************************************/
    void on_pamphletSubmitBtn_clicked();

    /***********************************************************************
     * on_sortBtn_clicked() -
     *  Will show a new table list of sorted customers by name
     **********************************************************************/
    void on_sortBtn_clicked();

    /***********************************************************************
     * on_keyCustomerBtn_clicked() -
     *  Will show a new table list of sorted customers with "key" rating
     **********************************************************************/
    void on_keyCustomersBtn_clicked();

    /***********************************************************************
     * on_productsBtn_clicked() -
     *  Will show a new table list of sorted customers with their
     *  products they purchased
     **********************************************************************/
    void on_productsBtn_clicked();

    /***********************************************************************
     * on_cartCancelBtn_clicked() -
     *  After a customer clicks cancel on the Cart page, it will set
     *  all the items to be empty and will change to the Home page
     **********************************************************************/
    void on_cartCancelBtn_clicked();

private:
    Ui::MainWindow *ui;
    CustomerController *m_controller;

    void showCustomerList(QSqlQueryModel *model);
    void sort(QSqlQueryModel *model);
};

#endif // MAINWINDOW_H
