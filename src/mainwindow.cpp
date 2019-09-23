#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setupconnections();
}

MainWindow::~MainWindow()
{
    delete ui;
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
