#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(CustomerController* controller,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    m_controller(controller)
{
    ui->setupUi(this);
    settingConnection();
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
}

/*    void updateEntry(QString        name,
                     QString        address,
                     QString        rating,
                     QString        key,
                     QStringList products,
                     bool           getPamphlet);
    ui->textAddressListPage->setPlainText(entry->getAddress());
    ui->textRatingListPage->setPlainText(entry->getRating());
    ui->textKeyListPage->setPlainText(entry->getKey());
*/
void MainWindow::updateEntry()
{
    //ui->textAddressListPage->toPlainText();
    //ui->textRatingListPage->toPlainText();
    //ui->textKeyListPage->toPlainText();

    CustomerEntry *entry;
    entry = m_controller->getEntryFromName(ui->labelCustomerName->text());
    m_controller->updateEntry(entry->getName(),
                              ui->textAddressListPage->toPlainText(),
                              ui->textRatingListPage->toPlainText(),
                              ui->textKeyListPage->toPlainText(),
                              entry->getProducts(),
                              entry->getGetPamphlet());
    showCustomerList(m_controller->loadEntries());
}

/**
 * @brief MainWindow::changePageListPage
 *    Changeing page
 */
void MainWindow::changePageListPage()
{
    showCustomerList(m_controller->loadEntries());
    ui->stackedWidget->setCurrentWidget(ui->PageList);
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
 * @brief MainWindow::settingConnection
 *      This function set up the connection.
 */
void MainWindow::settingConnection()
{
    connect(ui->btnListPage,&QPushButton::clicked,
            this,&MainWindow::changePageListPage);

    connect(ui->btncreatePage,&QPushButton::clicked,
            this,&MainWindow::changePageCreatePage);

    connect(ui->btnConfirm,&QPushButton::clicked,
            this,&MainWindow::createEntry);

    connect(ui->btnDelete,&QPushButton::clicked,
            this,&MainWindow::deleteEntry);

    connect(ui->btnUpdate,&QPushButton::clicked,
            this,&MainWindow::updateEntry);

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
void MainWindow::setupconnections()
{
    connect(ui->Contactus,&QPushButton::clicked,this,&MainWindow::changepageToContactUs);
    connect(ui->Homebutton,&QPushButton::clicked,this,&MainWindow::changePageToHome);
    connect(ui->Buynow,&QPushButton::clicked,this,&MainWindow::changepagetobuynow);
    connect(ui->backbutton,&QPushButton::clicked,this,&MainWindow::changePageToHome);
    connect(ui->cartButton,&QPushButton::clicked,this,&MainWindow::changetoGuaranteepage);
    connect(ui->cancelbutton,&QPushButton::clicked,this,&MainWindow::changePageToHome);
    connect(ui->declinebutton,&QPushButton::clicked,this,&MainWindow::changePageToHome);
    connect(ui->Acknowledgebutton,&QPushButton::clicked,this,&MainWindow::changetocartpage);
    connect(ui->Customerreviewsbutton,&QPushButton::clicked,this,&MainWindow::changetocustomerreviewspage);
    connect(ui->closebtn,&QPushButton::clicked,this,&MainWindow::changePageToHome);
    connect(ui->Helpbutton,&QPushButton::clicked,this,&MainWindow::changetohelppage);
    connect(ui->helphomebtn,&QPushButton::clicked,this,&MainWindow::changePageToHome);
}
