#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(CustomerController* controller,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    m_controller(controller)
{
    ui->setupUi(this);
    setupconnections();
    ui->stackedWidget->setCurrentWidget(ui->homePage);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::createEntry()
{
    m_controller->createEntry(
                     ui->textName->toPlainText(),
                     ui->textAddress->toPlainText(),
                     ui->textRating->toPlainText(),
                     ui->textKey->toPlainText(),
                     QStringList(),
                false);
}

void MainWindow::deleteEntry()
{
    m_controller->deleteEntry(ui->labelCustomerName->text());
    showCustomerList(m_controller->loadEntries());
    ui->textAddressListPage->clear();
    ui->textRatingListPage->clear();
    ui->textKeyListPage->clear();
    ui->labelCustomerName->clear();
}


void MainWindow::updateEntry()
{

    CustomerEntry *entry;
    entry = m_controller->getEntryFromName(ui->labelCustomerName->text());

    m_controller->updateEntry(entry->getName(),
                              ui->textAddressListPage->toPlainText(),
                              ui->textRatingListPage->toPlainText(),
                              ui->textKeyListPage->toPlainText(),
                              entry->getProducts(),
                              entry->getGetPamphlet());
    showCustomerList(m_controller->loadEntries());

    ui->textAddressListPage->clear();
    ui->textRatingListPage->clear();
    ui->textKeyListPage->clear();
    ui->textName->clear();
    ui->textAddress->clear();
    ui->textKey->clear();
    ui->textRating->clear();
}

/**
 * @brief MainWindow::changePageListPage
 *    Changeing page
 */
void MainWindow::changedatabasePage()
{
    showCustomerList(m_controller->loadEntries());
    ui->stackedWidget->setCurrentWidget(ui->databasepage);
}

/**
 * @brief MainWindow::changePageCreatePage
 *  Changing page
 */
void MainWindow::changePageCreatePage()
{
    ui->stackedWidget->setCurrentWidget(ui->PageCreate);
}

/**
 * @brief MainWindow::showCustomerList
 *      Showing the QSqlQueryModel into the view table.
 * @param model
 */
void MainWindow::showCustomerList(QSqlQueryModel *model)
{
    ui->tableView->setModel(model);
}

/**
 * @brief MainWindow::on_tableView_activated
 *      When the view table be clicked.
 * @param index
 */

// Once the table is pressed it shows the information in the boxes
void MainWindow::on_tableView_activated(const QModelIndex &index)
{
    QString customerName = m_controller->getCustomerNameFromQModelIndex(index);
    CustomerEntry *entry;
    entry = m_controller->getEntryFromName(customerName);

    ui->labelCustomerName->setText(entry->getName());
    ui->textAddressListPage->setPlainText(entry->getAddress());
    ui->textRatingListPage->setPlainText(entry->getRating());
    ui->textKeyListPage->setPlainText(entry->getKey());
}


// After submitting, we update existing customer's pamphletSent or if they don't exist, we add a new customer
void MainWindow::pamphletSent()
{
    // NEW CUSTOMER
    m_controller->createEntry(
                 ui->pamphletNameText->text(),
                 ui->pamphletAddressText->text(),
                 "",
                 "",
                 QStringList(),
                 true);

                 ui->stackedWidget->setCurrentWidget(ui->homePage);

}

void MainWindow::buyingProduct()
{

    QStringList products;
        if(ui->checkboxbronzeAdd->isChecked())
            products.append("Bronze");
        if(ui->checkboxsilverAdd->isChecked())
            products.append("Silver");
        if(ui->checkboxgoldAdd->isChecked())
            products.append("Gold");

    m_controller->createEntry(
                     ui->cartNameText->toPlainText(),
                     ui->cartAddressText->toPlainText(),
                     "",
                     "",
                     QStringList(products),
                false);
    ui->checkboxbronzeAdd->setChecked(false);
    ui->checkboxsilverAdd->setChecked(false);
    ui->checkboxgoldAdd->setChecked(false);


}

void MainWindow::changepageToContactUs()
{
    ui->stackedWidget->setCurrentWidget(ui->Contactpage);
}
void MainWindow::changePageToHome()
{
    ui->stackedWidget->setCurrentWidget(ui->homePage);
}
void MainWindow::changepagetobuynow()
{
    ui->stackedWidget->setCurrentWidget(ui->buynowpage);
}
void MainWindow::changetocartpage()
{
    ui->stackedWidget->setCurrentWidget(ui->Cartpage);
}
void MainWindow::changetoGuaranteepage()
{
    ui->stackedWidget->setCurrentWidget(ui->Guaranteepage);
}
void MainWindow::changetocustomerreviewspage()
{
    ui->stackedWidget->setCurrentWidget(ui->Customersreview);
}
void MainWindow::changetohelppage()
{
    ui->stackedWidget->setCurrentWidget(ui->Helppage);
}

void MainWindow::changeToPamphletPages()
{
    ui->stackedWidget->setCurrentWidget(ui->pamphletPage);
}
void MainWindow::changetoadminpage()
{
    ui->stackedWidget->setCurrentWidget(ui->Adminpage);
}
void MainWindow::changetologinpage()
{

    ui->stackedWidget->setCurrentWidget(ui->Loginpage);
}



void MainWindow::on_loginpushbtn_clicked()
{
    QString username = ui->usernamelineedit->text();
        QString password = ui->passwordlineedit->text();

        if(username == "admin" && password == "admin")
        {
            changetoadminpage();
        }
        else
        {
            QMessageBox::warning(this, "Login", "Username or password is not correct");
        }

        // Sets the username and password back to its empty state
        ui->usernamelineedit->setText("");
        ui->passwordlineedit->setText("");
}

/**
 * @brief MainWindow::settingConnection
 *      This function set up the connection.
 */
void MainWindow::setupconnections()
{
    connect(ui->Contactus,&QPushButton::clicked,this,&MainWindow::changepageToContactUs);
    connect(ui->Homebutton,&QPushButton::clicked,this,&MainWindow::changePageToHome);
    connect(ui->Buynow,&QPushButton::clicked,this,&MainWindow::changepagetobuynow);
    connect(ui->backbutton,&QPushButton::clicked,this,&MainWindow::changePageToHome);
    connect(ui->declinebutton,&QPushButton::clicked,this,&MainWindow::changePageToHome);
    connect(ui->Acknowledgebutton,&QPushButton::clicked,this,&MainWindow::changetocartpage);
    connect(ui->Customerreviewsbutton,&QPushButton::clicked,this,&MainWindow::changetocustomerreviewspage);
    connect(ui->closebtn,&QPushButton::clicked,this,&MainWindow::changePageToHome);
    connect(ui->Helpbutton,&QPushButton::clicked,this,&MainWindow::changetohelppage);
    connect(ui->helphomebtn,&QPushButton::clicked,this,&MainWindow::changePageToHome);
    connect(ui->btnConfirm,&QPushButton::clicked,this,&MainWindow::createEntry);
    connect(ui->btnDelete,&QPushButton::clicked,this,&MainWindow::deleteEntry);
    connect(ui->btnConfirm,&QPushButton::clicked,this,&MainWindow::updateEntry);
    connect(ui->backpushbtn,&QPushButton::clicked,this,&MainWindow::changePageToHome);
    connect(ui->Loginbutton,&QPushButton::clicked,this,&MainWindow::changetologinpage);
    connect(ui->homedatabasebtn,&QPushButton::clicked,this,&MainWindow::changePageToHome);
    connect(ui->databasebtn,&QPushButton::clicked,this,&MainWindow::changedatabasePage);
    connect(ui->backtoadminpage,&QPushButton::clicked,this,&MainWindow::changetoadminpage);
    connect(ui->backbtntoadmin,&QPushButton::clicked,this,&MainWindow::changetoadminpage);
    connect(ui->addtodatabase,&QPushButton::clicked,this,&MainWindow::changePageCreatePage);
    connect(ui->btnUpdate,&QPushButton::clicked,this,&MainWindow::updateEntry);

    // connects pamphlet page
    connect(ui->requestCopyBtns,&QPushButton::clicked,this,&MainWindow::changeToPamphletPages);
    // goes back home from pamphlet page
    connect(ui->pamphletBackBtn,&QPushButton::clicked,this,&MainWindow::changePageToHome);

}


void MainWindow::on_cartBuyBtn_clicked()
{
    // INPUT - Gets each text edits' information
    QString nameText = ui->cartNameText->toPlainText();
    QString addressText = ui->cartAddressText->toPlainText();
    QString emailText = ui->cartEmailText->toPlainText();

    // PROCESSING- Checks to see if every box was filled in or not
    if(nameText == "" || addressText == "" || emailText == "")
    {
        // Displays an error message if at least one of the boxes weren't filled
        QMessageBox::warning(this, "Error", "Please fill in each box");
    }
    else
    {
        // If all of them are filled, in, a message will pop up, and buyingProduct()
        // function will be called
        QMessageBox::information(this, "Purchased", "Thank you for your purchase");
        changePageToHome();
        buyingProduct();
        ui->cartNameText->setText("");
        ui->cartAddressText->setText("");
        ui->cartEmailText->setText("");
        ui->cartProductOne->clear();
        ui->cartProductTwo->clear();
        ui->cartProductThree->clear();
        ui->totalCart->clear();
    }
}

void MainWindow::on_cartButton_clicked()
{
    int total;
    bool goldBoxChecked = ui->checkboxgoldAdd->isChecked();
    bool silverBoxChecked = ui->checkboxsilverAdd->isChecked();
    bool bronzeBoxChecked = ui->checkboxbronzeAdd->isChecked();

    if(goldBoxChecked == true || silverBoxChecked == true || bronzeBoxChecked == true)
    {
        changetoGuaranteepage();

     if (bronzeBoxChecked)
     {
         total += 50;

         if(ui->cartProductOne->text()=="")
         {
             ui->cartProductOne->setText("Bronze Product  $50");


         }else if (ui->cartProductTwo->text()=="")
         {
             ui->cartProductTwo->setText("Bronze Product  $50");

         }else
          {
            ui->cartProductThree->setText("Bronze Product  $50");
          }
     }

     if (silverBoxChecked)
     {
         total += 100;
         if(ui->cartProductOne->text()=="")
         {
             ui->cartProductOne->setText("Silver Product  $100");

         }else if (ui->cartProductTwo->text()=="")
         {
             ui->cartProductTwo->setText("Silver Product  $100");
         }else
          {
            ui->cartProductThree->setText("Silver Product  $100");

          }
     }

     if (goldBoxChecked)
     {
           total += 200;

         if(ui->cartProductOne->text()=="")
         {
             ui->cartProductOne->setText("Gold Product  $200");
         }else if (ui->cartProductTwo->text()=="")
         {
             ui->cartProductTwo->setText("Gold Product  $200");
         }else
          {
            ui->cartProductThree->setText("Gold Product  $200");
          }
     }

        ui->totalCart->setNum(total);


    }
    else
    {
        QMessageBox::warning(this, "Error", "Please check a product");
    }




}

void MainWindow::on_pamphletSubmitBtn_clicked()
{
    QString name = ui->pamphletNameText->text();
    QString address = ui->pamphletAddressText->text();

    // PROCESSING- Checks to see if every box was filled in or not
    if(name == "" || address == "")
    {
        // Displays an error message if at least one of the boxes weren't filled
        QMessageBox::warning(this, "Error", "Please fill in each box");
    }
    else
    {
        // If all of them are filled, then adds customer info to database (calls pamphletSent())
        QMessageBox::information(this, "Pamphlet Sent", "The copy of the pamphlet has been sent");
        pamphletSent();
        ui->pamphletNameText->setText("");
        ui->pamphletAddressText->setText("");
        changePageToHome();
    }
}

void MainWindow::on_sortBtn_clicked()
{
    showCustomerList(m_controller->loadEntriessorted());
}


void MainWindow::on_keyCustomersBtn_clicked()
{
    showCustomerList(m_controller->loadEntrieskeysorted());
}

void MainWindow::on_productsBtn_clicked()
{
    showCustomerList(m_controller->loadEntriesproductssorted());
}

void MainWindow::on_cartCancelBtn_clicked()
{
   changePageToHome();
   ui->cartNameText->setText("");
   ui->cartAddressText->setText("");
   ui->cartEmailText->setText("");
   ui->cartProductOne->clear();
   ui->cartProductTwo->clear();
   ui->cartProductThree->clear();
   ui->checkboxbronzeAdd->setChecked(false);
   ui->checkboxsilverAdd->setChecked(false);
   ui->checkboxgoldAdd->setChecked(false);
   ui->totalCart->clear();

}

