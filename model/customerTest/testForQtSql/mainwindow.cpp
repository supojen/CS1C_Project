#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(CustomerController* controller,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    m_controller(controller)
{
    ui->setupUi(this);
    settingConnection();
    //m_controller->createTable();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::createEntry()
{
    QStringList products;
    if(ui->checkBoxStandardAdd->isChecked())
        products.append("Sta");
    if(ui->checkBoxPremiemAdd->isChecked())
        products.append("Pre");
    if(ui->checkBoxProAdd->isChecked())
        products.append("Pro");

    QString key;
    if(ui->radioButtonKeyCreate->isChecked())
        key = "Key";
    else
        key = "Not Key";



    m_controller->createEntry(
                     ui->textName->toPlainText(),
                     ui->textAddress->toPlainText(),
                     ui->textUsername->toPlainText(),
                     ui->textPassword->toPlainText(),
                     "00",
                     ui->textPhone->toPlainText(),
                     "00",
                     key,
                     products,
                     "",
                false);
}

void MainWindow::deleteEntry()
{
    m_controller->deleteEntry(ui->labelCustomerName->text());
    showCustomerList(m_controller->loadEntries());
}

/*    void updateEntry(QString        name,
                     QString        address,
                     QString        username,
                     QString        password,
                     QString        credit,
                     QString        phone,
                     QString        rating,
                     QString        key,
                     QStringList products,
                     QString        maintainPlan,
                     bool           getPamphlet);


    ui->textAddressListPage->setPlainText(entry->getAddress());
    ui->textRatingListPage->setPlainText(entry->getRating());
    ui->textKeyListPage->setPlainText(entry->getKey());
*/
void MainWindow::updateEntry()
{

    CustomerEntry *entry;
    entry = m_controller->getEntryFromName(ui->labelCustomerName->text());

    // About Products
    QStringList products;
    if(ui->checkBoxStandardUpdate->isChecked())
        products.append("Sta");
    else
        products.removeOne("Sta");
    if(ui->checkBoxPremiemUpdate->isChecked())
        products.append("Pre");
    else
        products.removeOne("Pre");
    if(ui->checkBoxProUpdate->isChecked())
        products.append("Pro");
    else
        products.removeOne("Pro");

    //About Key
    QString key;
    if(ui->radioButtonKeyUpdate->isChecked())
        key = "Key";
    else
        key = "Not Key";

    m_controller->updateEntry(entry->getName(),
                              ui->textAddressListPage->toPlainText(),
                              entry->getUsername(),
                              entry->getPassword(),
                              entry->getCredit(),
                              entry->getPhone(),
                              ui->textRatingListPage->toPlainText(),
                              key,
                              products,
                              entry->getMaintainPlan(),
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

    connect(ui->btnListPage_KeyMember,&QPushButton::clicked,
            this,&MainWindow::on_btnListPage_KeyMember_clicked);

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
void MainWindow::on_tableView_activated(const QModelIndex &index)
{
    QString customerName = m_controller->getCustomerNameFromQModelIndex(index);
    CustomerEntry *entry;
    entry = m_controller->getEntryFromName(customerName);

    ui->labelCustomerName->setText(entry->getName());
    ui->textAddressListPage->setPlainText(entry->getAddress());
    ui->textRatingListPage->setPlainText(entry->getRating());


    // About Products
    QStringList products = entry->getProducts();
    if(products.contains("Sta"))
        ui->checkBoxStandardUpdate->setChecked(true);
    else
        ui->checkBoxStandardUpdate->setChecked(false);

    if(products.contains("Pre"))
        ui->checkBoxPremiemUpdate->setChecked(true);
    else
        ui->checkBoxPremiemUpdate->setChecked(false);
    if(products.contains("Pro"))
        ui->checkBoxProUpdate->setChecked(true);
    else
        ui->checkBoxProUpdate->setChecked(false);

    // About Key
    if(entry->getKey() == "Key")
        ui->radioButtonKeyUpdate->setChecked(true);
    else
        ui->radioButtonKeyUpdate->setChecked(false);


}

void MainWindow::on_btnListPage_KeyMember_clicked()
{
    showCustomerList(m_controller->loadKeyEntries());
    ui->stackedWidget->setCurrentWidget(ui->PageList);
}
