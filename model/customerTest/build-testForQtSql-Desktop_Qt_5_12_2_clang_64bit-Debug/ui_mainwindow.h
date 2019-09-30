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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
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
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QTextEdit *textPassword;
    QHBoxLayout *horizontalLayout;
    QLabel *label_10;
    QTextEdit *textName;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *btnConfirm;
    QPushButton *btnListPage_KeyMember;
    QPushButton *btnListPage;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QTextEdit *textUsername;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QTextEdit *textPhone;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_12;
    QCheckBox *checkBoxStandardAdd;
    QCheckBox *checkBoxPremiemAdd;
    QCheckBox *checkBoxProAdd;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QTextEdit *textAddress;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QTextEdit *textCredit;
    QRadioButton *radioButtonKeyCreate;
    QWidget *PageList;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QLabel *labelAddressListPage;
    QTextEdit *textAddressListPage;
    QHBoxLayout *horizontalLayout_8;
    QLabel *labelRatingListPage;
    QTextEdit *textRatingListPage;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *btnDelete;
    QPushButton *btnUpdate;
    QLabel *labelCustomerName;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_13;
    QCheckBox *checkBoxStandardUpdate;
    QCheckBox *checkBoxPremiemUpdate;
    QCheckBox *checkBoxProUpdate;
    QPushButton *btncreatePage;
    QGridLayout *gridLayout_3;
    QTableView *tableView;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QRadioButton *radioButtonKeyUpdate;
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

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        btnConfirm = new QPushButton(PageCreate);
        btnConfirm->setObjectName(QString::fromUtf8("btnConfirm"));

        horizontalLayout_11->addWidget(btnConfirm);

        btnListPage_KeyMember = new QPushButton(PageCreate);
        btnListPage_KeyMember->setObjectName(QString::fromUtf8("btnListPage_KeyMember"));

        horizontalLayout_11->addWidget(btnListPage_KeyMember);

        btnListPage = new QPushButton(PageCreate);
        btnListPage->setObjectName(QString::fromUtf8("btnListPage"));

        horizontalLayout_11->addWidget(btnListPage);


        gridLayout_2->addLayout(horizontalLayout_11, 8, 0, 1, 1);

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

        groupBox = new QGroupBox(PageCreate);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_12 = new QHBoxLayout(groupBox);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        checkBoxStandardAdd = new QCheckBox(groupBox);
        checkBoxStandardAdd->setObjectName(QString::fromUtf8("checkBoxStandardAdd"));

        horizontalLayout_12->addWidget(checkBoxStandardAdd);

        checkBoxPremiemAdd = new QCheckBox(groupBox);
        checkBoxPremiemAdd->setObjectName(QString::fromUtf8("checkBoxPremiemAdd"));

        horizontalLayout_12->addWidget(checkBoxPremiemAdd);

        checkBoxProAdd = new QCheckBox(groupBox);
        checkBoxProAdd->setObjectName(QString::fromUtf8("checkBoxProAdd"));

        horizontalLayout_12->addWidget(checkBoxProAdd);


        gridLayout_2->addWidget(groupBox, 6, 0, 1, 1);

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

        radioButtonKeyCreate = new QRadioButton(PageCreate);
        radioButtonKeyCreate->setObjectName(QString::fromUtf8("radioButtonKeyCreate"));

        gridLayout_2->addWidget(radioButtonKeyCreate, 7, 0, 1, 1);

        stackedWidget->addWidget(PageCreate);
        PageList = new QWidget();
        PageList->setObjectName(QString::fromUtf8("PageList"));
        gridLayout_4 = new QGridLayout(PageList);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        labelAddressListPage = new QLabel(PageList);
        labelAddressListPage->setObjectName(QString::fromUtf8("labelAddressListPage"));

        horizontalLayout_7->addWidget(labelAddressListPage);

        textAddressListPage = new QTextEdit(PageList);
        textAddressListPage->setObjectName(QString::fromUtf8("textAddressListPage"));

        horizontalLayout_7->addWidget(textAddressListPage);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        labelRatingListPage = new QLabel(PageList);
        labelRatingListPage->setObjectName(QString::fromUtf8("labelRatingListPage"));

        horizontalLayout_8->addWidget(labelRatingListPage);

        textRatingListPage = new QTextEdit(PageList);
        textRatingListPage->setObjectName(QString::fromUtf8("textRatingListPage"));

        horizontalLayout_8->addWidget(textRatingListPage);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));

        verticalLayout->addLayout(horizontalLayout_9);


        gridLayout_4->addLayout(verticalLayout, 5, 0, 1, 3);

        btnDelete = new QPushButton(PageList);
        btnDelete->setObjectName(QString::fromUtf8("btnDelete"));

        gridLayout_4->addWidget(btnDelete, 6, 1, 1, 1);

        btnUpdate = new QPushButton(PageList);
        btnUpdate->setObjectName(QString::fromUtf8("btnUpdate"));

        gridLayout_4->addWidget(btnUpdate, 6, 2, 1, 1);

        labelCustomerName = new QLabel(PageList);
        labelCustomerName->setObjectName(QString::fromUtf8("labelCustomerName"));

        gridLayout_4->addWidget(labelCustomerName, 2, 0, 1, 3);

        groupBox_2 = new QGroupBox(PageList);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("Comic Sans MS"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        groupBox_2->setFont(font);
        horizontalLayout_13 = new QHBoxLayout(groupBox_2);
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        checkBoxStandardUpdate = new QCheckBox(groupBox_2);
        checkBoxStandardUpdate->setObjectName(QString::fromUtf8("checkBoxStandardUpdate"));

        horizontalLayout_13->addWidget(checkBoxStandardUpdate);

        checkBoxPremiemUpdate = new QCheckBox(groupBox_2);
        checkBoxPremiemUpdate->setObjectName(QString::fromUtf8("checkBoxPremiemUpdate"));

        horizontalLayout_13->addWidget(checkBoxPremiemUpdate);

        checkBoxProUpdate = new QCheckBox(groupBox_2);
        checkBoxProUpdate->setObjectName(QString::fromUtf8("checkBoxProUpdate"));

        horizontalLayout_13->addWidget(checkBoxProUpdate);


        gridLayout_4->addWidget(groupBox_2, 3, 0, 1, 3);

        btncreatePage = new QPushButton(PageList);
        btncreatePage->setObjectName(QString::fromUtf8("btncreatePage"));

        gridLayout_4->addWidget(btncreatePage, 6, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        tableView = new QTableView(PageList);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setMinimumSize(QSize(50, 200));

        gridLayout_3->addWidget(tableView, 0, 0, 2, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 1, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 2, 3);

        radioButtonKeyUpdate = new QRadioButton(PageList);
        radioButtonKeyUpdate->setObjectName(QString::fromUtf8("radioButtonKeyUpdate"));

        gridLayout_4->addWidget(radioButtonKeyUpdate, 4, 0, 1, 1);

        stackedWidget->addWidget(PageList);

        gridLayout->addWidget(stackedWidget, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 615, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "password   ", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Name         ", nullptr));
        btnConfirm->setText(QApplication::translate("MainWindow", "Confirm", nullptr));
        btnListPage_KeyMember->setText(QApplication::translate("MainWindow", "List Key Member Only", nullptr));
        btnListPage->setText(QApplication::translate("MainWindow", "List All", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "username  ", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "phone        ", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "products", nullptr));
        checkBoxStandardAdd->setText(QApplication::translate("MainWindow", "standard", nullptr));
        checkBoxPremiemAdd->setText(QApplication::translate("MainWindow", "premiem", nullptr));
        checkBoxProAdd->setText(QApplication::translate("MainWindow", "pro", nullptr));
        label->setText(QApplication::translate("MainWindow", "Address     ", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "credit         ", nullptr));
        radioButtonKeyCreate->setText(QApplication::translate("MainWindow", "Key Member", nullptr));
        labelAddressListPage->setText(QApplication::translate("MainWindow", "Address", nullptr));
        labelRatingListPage->setText(QApplication::translate("MainWindow", "rating    ", nullptr));
        btnDelete->setText(QApplication::translate("MainWindow", "Delete", nullptr));
        btnUpdate->setText(QApplication::translate("MainWindow", "Update", nullptr));
        labelCustomerName->setText(QApplication::translate("MainWindow", "Name", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Products", nullptr));
        checkBoxStandardUpdate->setText(QApplication::translate("MainWindow", "Standard: $100", nullptr));
        checkBoxPremiemUpdate->setText(QApplication::translate("MainWindow", "Premiem: $200", nullptr));
        checkBoxProUpdate->setText(QApplication::translate("MainWindow", "Pro: $300", nullptr));
        btncreatePage->setText(QApplication::translate("MainWindow", "Back", nullptr));
        radioButtonKeyUpdate->setText(QApplication::translate("MainWindow", "Key Member", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
