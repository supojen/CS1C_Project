#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "customercontroller.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(CustomerController* controller,QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void createEntry();
    void deleteEntry();
    void updateEntry();
    void changePageListPage();
    void changePageCreatePage();

private slots:
    void on_tableView_activated(const QModelIndex &index);

    void on_btnListPage_KeyMember_clicked();

private:
    Ui::MainWindow *ui;
    CustomerController *m_controller;

    void settingConnection();
    void showCustomerList(QSqlQueryModel *model);



};

#endif // MAINWINDOW_H
