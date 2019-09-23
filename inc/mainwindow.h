#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QObject>

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
    void changepageToContactUs();
    void changePageToHome();
    void setupconnections();
    void changepagetobuynow();
    void changetocartpage();
    void changetoGuaranteepage();
    void changetocustomerreviewspage();
    void changetohelppage();


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
