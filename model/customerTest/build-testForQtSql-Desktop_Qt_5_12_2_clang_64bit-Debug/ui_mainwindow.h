/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *PageCreate;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QTextEdit *textCredit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QTextEdit *textUsername;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QTextEdit *textPassword;
    QHBoxLayout *horizontalLayout;
    QLabel *label_10;
    QTextEdit *textName;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QTextEdit *textPhone;
    QPushButton *btnListPage;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QTextEdit *textAddress;
    QPushButton *btnConfirm;
    QWidget *PageList;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QLabel *labelAddressListPage;
    QTextEdit *textAddressListPage;
    QHBoxLayout *horizontalLayout_8;
    QLabel *labelRatingListPage;
    QTextEdit *textRatingListPage;
    QHBoxLayout *horizontalLayout_9;
    QLabel *labelKeyListPage;
    QTextEdit *textKeyListPage;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *btncreatePage;
    QPushButton *btnUpdate;
    QPushButton *btnDelete;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_3;
    QTableView *tableView;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QLabel *labelCustomerName;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(615, 706);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        PageCreate = new QWidget();
        PageCreate->setObjectName(QString::fromUtf8("PageCreate"));
        gridLayout_2 = new QGridLayout(PageCreate);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_5 = new QLabel(PageCreate);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_6->addWidget(label_5);

        textCredit = new QTextEdit(PageCreate);
        textCredit->setObjectName(QString::fromUtf8("textCredit"));

        horizontalLayout_6->addWidget(textCredit);


        gridLayout_2->addLayout(horizontalLayout_6, 5, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(PageCreate);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        textUsername = new QTextEdit(PageCreate);
        textUsername->setObjectName(QString::fromUtf8("textUsername"));

        horizontalLayout_3->addWidget(textUsername);


        gridLayout_2->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(PageCreate);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        textPassword = new QTextEdit(PageCreate);
        textPassword->setObjectName(QString::fromUtf8("textPassword"));

        horizontalLayout_4->addWidget(textPassword);


        gridLayout_2->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_10 = new QLabel(PageCreate);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout->addWidget(label_10);

        textName = new QTextEdit(PageCreate);
        textName->setObjectName(QString::fromUtf8("textName"));

        horizontalLayout->addWidget(textName);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(PageCreate);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        textPhone = new QTextEdit(PageCreate);
        textPhone->setObjectName(QString::fromUtf8("textPhone"));

        horizontalLayout_5->addWidget(textPhone);


        gridLayout_2->addLayout(horizontalLayout_5, 4, 0, 1, 1);

        btnListPage = new QPushButton(PageCreate);
        btnListPage->setObjectName(QString::fromUtf8("btnListPage"));

        gridLayout_2->addWidget(btnListPage, 6, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(PageCreate);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        textAddress = new QTextEdit(PageCreate);
        textAddress->setObjectName(QString::fromUtf8("textAddress"));

        horizontalLayout_2->addWidget(textAddress);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        btnConfirm = new QPushButton(PageCreate);
        btnConfirm->setObjectName(QString::fromUtf8("btnConfirm"));

        gridLayout_2->addWidget(btnConfirm, 7, 0, 1, 1);

        stackedWidget->addWidget(PageCreate);
        PageList = new QWidget();
        PageList->setObjectName(QString::fromUtf8("PageList"));
        layoutWidget = new QWidget(PageList);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 340, 591, 250));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        labelAddressListPage = new QLabel(layoutWidget);
        labelAddressListPage->setObjectName(QString::fromUtf8("labelAddressListPage"));

        horizontalLayout_7->addWidget(labelAddressListPage);

        textAddressListPage = new QTextEdit(layoutWidget);
        textAddressListPage->setObjectName(QString::fromUtf8("textAddressListPage"));

        horizontalLayout_7->addWidget(textAddressListPage);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        labelRatingListPage = new QLabel(layoutWidget);
        labelRatingListPage->setObjectName(QString::fromUtf8("labelRatingListPage"));

        horizontalLayout_8->addWidget(labelRatingListPage);

        textRatingListPage = new QTextEdit(layoutWidget);
        textRatingListPage->setObjectName(QString::fromUtf8("textRatingListPage"));

        horizontalLayout_8->addWidget(textRatingListPage);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        labelKeyListPage = new QLabel(layoutWidget);
        labelKeyListPage->setObjectName(QString::fromUtf8("labelKeyListPage"));

        horizontalLayout_9->addWidget(labelKeyListPage);

        textKeyListPage = new QTextEdit(layoutWidget);
        textKeyListPage->setObjectName(QString::fromUtf8("textKeyListPage"));

        horizontalLayout_9->addWidget(textKeyListPage);


        verticalLayout->addLayout(horizontalLayout_9);

        layoutWidget1 = new QWidget(PageList);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 600, 591, 41));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        btncreatePage = new QPushButton(layoutWidget1);
        btncreatePage->setObjectName(QString::fromUtf8("btncreatePage"));

        horizontalLayout_10->addWidget(btncreatePage);

        btnUpdate = new QPushButton(layoutWidget1);
        btnUpdate->setObjectName(QString::fromUtf8("btnUpdate"));

        horizontalLayout_10->addWidget(btnUpdate);

        btnDelete = new QPushButton(layoutWidget1);
        btnDelete->setObjectName(QString::fromUtf8("btnDelete"));

        horizontalLayout_10->addWidget(btnDelete);

        layoutWidget2 = new QWidget(PageList);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(2, 12, 591, 291));
        gridLayout_3 = new QGridLayout(layoutWidget2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        tableView = new QTableView(layoutWidget2);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_3->addWidget(tableView, 0, 0, 2, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 1, 1, 1, 1);

        labelCustomerName = new QLabel(PageList);
        labelCustomerName->setObjectName(QString::fromUtf8("labelCustomerName"));
        labelCustomerName->setGeometry(QRect(10, 310, 71, 16));
        stackedWidget->addWidget(PageList);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 615, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "credit         ", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "username  ", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "password   ", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Name         ", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "phone        ", nullptr));
        btnListPage->setText(QApplication::translate("MainWindow", "List All", nullptr));
        label->setText(QApplication::translate("MainWindow", "Address     ", nullptr));
        btnConfirm->setText(QApplication::translate("MainWindow", "Confirm", nullptr));
        labelAddressListPage->setText(QApplication::translate("MainWindow", "Address", nullptr));
        labelRatingListPage->setText(QApplication::translate("MainWindow", "rating    ", nullptr));
        labelKeyListPage->setText(QApplication::translate("MainWindow", "key        ", nullptr));
        btncreatePage->setText(QApplication::translate("MainWindow", "Back", nullptr));
        btnUpdate->setText(QApplication::translate("MainWindow", "Update", nullptr));
        btnDelete->setText(QApplication::translate("MainWindow", "Delete", nullptr));
        labelCustomerName->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
