/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_9;
    QWidget *widget_7;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_6;
    QPushButton *pushButton_upDateBLE;
    QPushButton *pushButton_closeBLE;
    QListWidget *listWidget;
    QPushButton *pushButton_openBLE;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_5;
    QSlider *horizontalSlider;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QComboBox *comboBox;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QLabel *label_4;
    QSlider *horizontalSlider_4;
    QSlider *horizontalSlider_5;
    QSlider *horizontalSlider_3;
    QSlider *horizontalSlider_2;
    QLabel *label;
    QPushButton *pushButton_sendtest;
    QLabel *label_5;
    QLabel *label_3;
    QPushButton *pushButton_clearReceive;
    QLabel *label_2;
    QCheckBox *checkBox_fenwei;
    QCheckBox *checkBox_main;
    QTextBrowser *textBrowser_receive;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(566, 721);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_9 = new QGridLayout(centralwidget);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        widget_7 = new QWidget(centralwidget);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        verticalLayout = new QVBoxLayout(widget_7);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(widget_7);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox_7 = new QGroupBox(groupBox);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        gridLayout_6 = new QGridLayout(groupBox_7);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        pushButton_upDateBLE = new QPushButton(groupBox_7);
        pushButton_upDateBLE->setObjectName(QStringLiteral("pushButton_upDateBLE"));
        sizePolicy.setHeightForWidth(pushButton_upDateBLE->sizePolicy().hasHeightForWidth());
        pushButton_upDateBLE->setSizePolicy(sizePolicy);

        gridLayout_6->addWidget(pushButton_upDateBLE, 3, 2, 1, 1);

        pushButton_closeBLE = new QPushButton(groupBox_7);
        pushButton_closeBLE->setObjectName(QStringLiteral("pushButton_closeBLE"));
        sizePolicy.setHeightForWidth(pushButton_closeBLE->sizePolicy().hasHeightForWidth());
        pushButton_closeBLE->setSizePolicy(sizePolicy);

        gridLayout_6->addWidget(pushButton_closeBLE, 5, 2, 1, 1);

        listWidget = new QListWidget(groupBox_7);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy1);
        listWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout_6->addWidget(listWidget, 0, 0, 6, 2);

        pushButton_openBLE = new QPushButton(groupBox_7);
        pushButton_openBLE->setObjectName(QStringLiteral("pushButton_openBLE"));
        sizePolicy.setHeightForWidth(pushButton_openBLE->sizePolicy().hasHeightForWidth());
        pushButton_openBLE->setSizePolicy(sizePolicy);

        gridLayout_6->addWidget(pushButton_openBLE, 1, 2, 1, 1);


        gridLayout_2->addWidget(groupBox_7, 0, 0, 1, 1);

        groupBox_6 = new QGroupBox(groupBox);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        sizePolicy.setHeightForWidth(groupBox_6->sizePolicy().hasHeightForWidth());
        groupBox_6->setSizePolicy(sizePolicy);
        groupBox_6->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        gridLayout_5 = new QGridLayout(groupBox_6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        horizontalSlider = new QSlider(groupBox_6);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setMaximum(255);
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(horizontalSlider, 16, 1, 1, 1);

        groupBox_2 = new QGroupBox(groupBox_6);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        comboBox = new QComboBox(groupBox_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 0, 0, 1, 1);

        checkBox = new QCheckBox(groupBox_2);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        sizePolicy.setHeightForWidth(checkBox->sizePolicy().hasHeightForWidth());
        checkBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(checkBox, 1, 0, 1, 1);

        checkBox_2 = new QCheckBox(groupBox_2);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        sizePolicy.setHeightForWidth(checkBox_2->sizePolicy().hasHeightForWidth());
        checkBox_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(checkBox_2, 2, 0, 1, 1);


        gridLayout_5->addWidget(groupBox_2, 2, 1, 1, 1);

        label_4 = new QLabel(groupBox_6);
        label_4->setObjectName(QStringLiteral("label_4"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);
        label_4->setStyleSheet(QStringLiteral("color: rgb(0, 0, 255);"));

        gridLayout_5->addWidget(label_4, 18, 0, 1, 1);

        horizontalSlider_4 = new QSlider(groupBox_6);
        horizontalSlider_4->setObjectName(QStringLiteral("horizontalSlider_4"));
        horizontalSlider_4->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(horizontalSlider_4, 15, 1, 1, 1);

        horizontalSlider_5 = new QSlider(groupBox_6);
        horizontalSlider_5->setObjectName(QStringLiteral("horizontalSlider_5"));
        horizontalSlider_5->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(horizontalSlider_5, 14, 1, 1, 1);

        horizontalSlider_3 = new QSlider(groupBox_6);
        horizontalSlider_3->setObjectName(QStringLiteral("horizontalSlider_3"));
        horizontalSlider_3->setMaximum(255);
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(horizontalSlider_3, 18, 1, 1, 1);

        horizontalSlider_2 = new QSlider(groupBox_6);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setMaximum(255);
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(horizontalSlider_2, 17, 1, 1, 1);

        label = new QLabel(groupBox_6);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);

        gridLayout_5->addWidget(label, 14, 0, 1, 1);

        pushButton_sendtest = new QPushButton(groupBox_6);
        pushButton_sendtest->setObjectName(QStringLiteral("pushButton_sendtest"));
        sizePolicy.setHeightForWidth(pushButton_sendtest->sizePolicy().hasHeightForWidth());
        pushButton_sendtest->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(pushButton_sendtest, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox_6);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);

        gridLayout_5->addWidget(label_5, 15, 0, 1, 1);

        label_3 = new QLabel(groupBox_6);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setStyleSheet(QStringLiteral("color: rgb(0, 255, 0);"));

        gridLayout_5->addWidget(label_3, 17, 0, 1, 1);

        pushButton_clearReceive = new QPushButton(groupBox_6);
        pushButton_clearReceive->setObjectName(QStringLiteral("pushButton_clearReceive"));
        sizePolicy.setHeightForWidth(pushButton_clearReceive->sizePolicy().hasHeightForWidth());
        pushButton_clearReceive->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(pushButton_clearReceive, 1, 1, 1, 1);

        label_2 = new QLabel(groupBox_6);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        gridLayout_5->addWidget(label_2, 16, 0, 1, 1);

        checkBox_fenwei = new QCheckBox(groupBox_6);
        checkBox_fenwei->setObjectName(QStringLiteral("checkBox_fenwei"));
        sizePolicy.setHeightForWidth(checkBox_fenwei->sizePolicy().hasHeightForWidth());
        checkBox_fenwei->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(checkBox_fenwei, 8, 1, 1, 1);

        checkBox_main = new QCheckBox(groupBox_6);
        checkBox_main->setObjectName(QStringLiteral("checkBox_main"));
        sizePolicy2.setHeightForWidth(checkBox_main->sizePolicy().hasHeightForWidth());
        checkBox_main->setSizePolicy(sizePolicy2);

        gridLayout_5->addWidget(checkBox_main, 8, 0, 1, 1);

        textBrowser_receive = new QTextBrowser(groupBox_6);
        textBrowser_receive->setObjectName(QStringLiteral("textBrowser_receive"));
        sizePolicy1.setHeightForWidth(textBrowser_receive->sizePolicy().hasHeightForWidth());
        textBrowser_receive->setSizePolicy(sizePolicy1);
        textBrowser_receive->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout_5->addWidget(textBrowser_receive, 0, 0, 3, 1);


        gridLayout_2->addWidget(groupBox_6, 1, 0, 1, 1);


        verticalLayout->addWidget(groupBox);


        gridLayout_9->addWidget(widget_7, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 566, 26));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QString());
        groupBox_7->setTitle(QApplication::translate("MainWindow", "\350\256\276\345\244\207\350\277\236\346\216\245", Q_NULLPTR));
        pushButton_upDateBLE->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260\350\256\276\345\244\207", Q_NULLPTR));
        pushButton_closeBLE->setText(QApplication::translate("MainWindow", "\346\226\255\345\274\200\350\277\236\346\216\245", Q_NULLPTR));
        pushButton_openBLE->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\350\223\235\347\211\231", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "\350\256\276\347\275\256", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\351\200\232\347\224\250\350\256\276\347\275\256", Q_NULLPTR));
        checkBox->setText(QApplication::translate("MainWindow", "\344\272\272\344\275\223\346\204\237\345\272\224", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("MainWindow", "\350\207\252\345\212\250\350\260\203\350\212\202\344\272\256\345\272\246", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"right\">B</p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\344\272\256\345\272\246", Q_NULLPTR));
        pushButton_sendtest->setText(QApplication::translate("MainWindow", "\350\216\267\345\217\226\347\212\266\346\200\201", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\350\211\262\346\270\251", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"right\">G</p></body></html>", Q_NULLPTR));
        pushButton_clearReceive->setText(QApplication::translate("MainWindow", "\346\270\205\345\261\217", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"right\">R</p></body></html>", Q_NULLPTR));
        checkBox_fenwei->setText(QApplication::translate("MainWindow", "\346\260\233\345\233\264\347\201\257", Q_NULLPTR));
        checkBox_main->setText(QApplication::translate("MainWindow", "\344\270\273\347\201\257\345\205\211", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
