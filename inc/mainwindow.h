#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void changePageToContactUs();
    void changePageToHome();

private:
    Ui::MainWindow *ui;

    void setupConnections();
};

#endif // MAINWINDOW_H
