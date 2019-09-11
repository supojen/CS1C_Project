#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setupConnections();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changePageToContactUs()
{
    ui->stackedWidget->setCurrentWidget(ui->ContactPage);
}

void MainWindow::changePageToHome()
{
    ui->stackedWidget->setCurrentWidget(ui->HomePage);
}

void MainWindow::setupConnections()
{
    connect(ui->btnContact,&QPushButton::clicked,
            this,&MainWindow::changePageToContactUs);
    connect(ui->btnHomePage,&QPushButton::clicked,
            this,&MainWindow::changePageToHome);
}
