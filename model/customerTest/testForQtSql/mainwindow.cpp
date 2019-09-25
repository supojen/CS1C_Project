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
                     ui->textUsername->toPlainText(),
                     ui->textPassword->toPlainText(),
                     "00",
                     ui->textPhone->toPlainText(),
                     "00",
                     "00",
                     QStringList(),
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
    //ui->textAddressListPage->toPlainText();
    //ui->textRatingListPage->toPlainText();
    //ui->textKeyListPage->toPlainText();

    CustomerEntry *entry;
    entry = m_controller->getEntryFromName(ui->labelCustomerName->text());
    m_controller->updateEntry(entry->getName(),
                              ui->textAddressListPage->toPlainText(),
                              entry->getUsername(),
                              entry->getPassword(),
                              entry->getCredit(),
                              entry->getPhone(),
                              ui->textRatingListPage->toPlainText(),
                              ui->textKeyListPage->toPlainText(),
                              entry->getProducts(),
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
    ui->textKeyListPage->setPlainText(entry->getKey());
}
