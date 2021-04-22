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
    QListWidget *listWidget;
    QPushButton *pushButton_openBLE;
    QPushButton *pushButton_upDateBLE;
    QPushButton *pushButton_closeBLE;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_7;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QPushButton *pushButton_sendtest;
    QPushButton *pushButton_clearReceive;
    QTextBrowser *textBrowser_receive;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_10;
    QPushButton *pushButton_right;
    QPushButton *pushButton_stop;
    QPushButton *pushButton_speedUp;
    QPushButton *pushButton_back;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_5;
    QCheckBox *checkBox_main;
    QGroupBox *groupBox_61;
    QGridLayout *gridLayout_4;
    QLabel *label_5;
    QLabel *label;
    QSlider *horizontalSlider_5;
    QSlider *horizontalSlider_4;
    QCheckBox *checkBox_fenwei;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout;
    QSlider *horizontalSlider_3;
    QLabel *label_3;
    QLabel *label_4;
    QSlider *horizontalSlider_2;
    QSlider *horizontalSlider;
    QLabel *label_2;
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
        listWidget = new QListWidget(groupBox);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);
        listWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout_2->addWidget(listWidget, 0, 0, 3, 1);

        pushButton_openBLE = new QPushButton(groupBox);
        pushButton_openBLE->setObjectName(QStringLiteral("pushButton_openBLE"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_openBLE->sizePolicy().hasHeightForWidth());
        pushButton_openBLE->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(pushButton_openBLE, 0, 1, 1, 1);

        pushButton_upDateBLE = new QPushButton(groupBox);
        pushButton_upDateBLE->setObjectName(QStringLiteral("pushButton_upDateBLE"));
        sizePolicy1.setHeightForWidth(pushButton_upDateBLE->sizePolicy().hasHeightForWidth());
        pushButton_upDateBLE->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(pushButton_upDateBLE, 1, 1, 1, 1);

        pushButton_closeBLE = new QPushButton(groupBox);
        pushButton_closeBLE->setObjectName(QStringLiteral("pushButton_closeBLE"));
        sizePolicy1.setHeightForWidth(pushButton_closeBLE->sizePolicy().hasHeightForWidth());
        pushButton_closeBLE->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(pushButton_closeBLE, 2, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(widget_7);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        groupBox_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        gridLayout_7 = new QGridLayout(groupBox_2);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy2);
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        checkBox = new QCheckBox(groupBox_3);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        sizePolicy.setHeightForWidth(checkBox->sizePolicy().hasHeightForWidth());
        checkBox->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(checkBox, 0, 0, 1, 1);

        checkBox_2 = new QCheckBox(groupBox_3);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        sizePolicy.setHeightForWidth(checkBox_2->sizePolicy().hasHeightForWidth());
        checkBox_2->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(checkBox_2, 1, 0, 1, 1);

        pushButton_sendtest = new QPushButton(groupBox_3);
        pushButton_sendtest->setObjectName(QStringLiteral("pushButton_sendtest"));
        sizePolicy.setHeightForWidth(pushButton_sendtest->sizePolicy().hasHeightForWidth());
        pushButton_sendtest->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButton_sendtest, 2, 0, 1, 1);

        pushButton_clearReceive = new QPushButton(groupBox_3);
        pushButton_clearReceive->setObjectName(QStringLiteral("pushButton_clearReceive"));
        sizePolicy.setHeightForWidth(pushButton_clearReceive->sizePolicy().hasHeightForWidth());
        pushButton_clearReceive->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButton_clearReceive, 3, 0, 1, 1);


        gridLayout_7->addWidget(groupBox_3, 0, 1, 1, 1);

        textBrowser_receive = new QTextBrowser(groupBox_2);
        textBrowser_receive->setObjectName(QStringLiteral("textBrowser_receive"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(textBrowser_receive->sizePolicy().hasHeightForWidth());
        textBrowser_receive->setSizePolicy(sizePolicy3);
        textBrowser_receive->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout_7->addWidget(textBrowser_receive, 0, 0, 1, 1);

        groupBox_4 = new QGroupBox(groupBox_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        sizePolicy.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy);
        gridLayout_10 = new QGridLayout(groupBox_4);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        pushButton_right = new QPushButton(groupBox_4);
        pushButton_right->setObjectName(QStringLiteral("pushButton_right"));
        sizePolicy.setHeightForWidth(pushButton_right->sizePolicy().hasHeightForWidth());
        pushButton_right->setSizePolicy(sizePolicy);
        pushButton_right->setStyleSheet(QStringLiteral(""));

        gridLayout_10->addWidget(pushButton_right, 0, 0, 1, 1);

        pushButton_stop = new QPushButton(groupBox_4);
        pushButton_stop->setObjectName(QStringLiteral("pushButton_stop"));
        sizePolicy.setHeightForWidth(pushButton_stop->sizePolicy().hasHeightForWidth());
        pushButton_stop->setSizePolicy(sizePolicy);

        gridLayout_10->addWidget(pushButton_stop, 1, 0, 1, 1);

        pushButton_speedUp = new QPushButton(groupBox_4);
        pushButton_speedUp->setObjectName(QStringLiteral("pushButton_speedUp"));
        sizePolicy.setHeightForWidth(pushButton_speedUp->sizePolicy().hasHeightForWidth());
        pushButton_speedUp->setSizePolicy(sizePolicy);

        gridLayout_10->addWidget(pushButton_speedUp, 2, 0, 1, 1);

        pushButton_back = new QPushButton(groupBox_4);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        sizePolicy.setHeightForWidth(pushButton_back->sizePolicy().hasHeightForWidth());
        pushButton_back->setSizePolicy(sizePolicy);

        gridLayout_10->addWidget(pushButton_back, 3, 0, 1, 1);


        gridLayout_7->addWidget(groupBox_4, 0, 2, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        groupBox_6 = new QGroupBox(widget_7);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(groupBox_6->sizePolicy().hasHeightForWidth());
        groupBox_6->setSizePolicy(sizePolicy4);
        groupBox_6->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        gridLayout_5 = new QGridLayout(groupBox_6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        checkBox_main = new QCheckBox(groupBox_6);
        checkBox_main->setObjectName(QStringLiteral("checkBox_main"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(checkBox_main->sizePolicy().hasHeightForWidth());
        checkBox_main->setSizePolicy(sizePolicy5);

        gridLayout_5->addWidget(checkBox_main, 0, 0, 1, 1);

        groupBox_61 = new QGroupBox(groupBox_6);
        groupBox_61->setObjectName(QStringLiteral("groupBox_61"));
        sizePolicy.setHeightForWidth(groupBox_61->sizePolicy().hasHeightForWidth());
        groupBox_61->setSizePolicy(sizePolicy);
        gridLayout_4 = new QGridLayout(groupBox_61);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_5 = new QLabel(groupBox_61);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_4->addWidget(label_5, 1, 0, 1, 1);

        label = new QLabel(groupBox_61);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        horizontalSlider_5 = new QSlider(groupBox_61);
        horizontalSlider_5->setObjectName(QStringLiteral("horizontalSlider_5"));
        horizontalSlider_5->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(horizontalSlider_5, 0, 1, 1, 1);

        horizontalSlider_4 = new QSlider(groupBox_61);
        horizontalSlider_4->setObjectName(QStringLiteral("horizontalSlider_4"));
        horizontalSlider_4->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(horizontalSlider_4, 1, 1, 1, 1);


        gridLayout_5->addWidget(groupBox_61, 1, 0, 1, 2);

        checkBox_fenwei = new QCheckBox(groupBox_6);
        checkBox_fenwei->setObjectName(QStringLiteral("checkBox_fenwei"));
        sizePolicy.setHeightForWidth(checkBox_fenwei->sizePolicy().hasHeightForWidth());
        checkBox_fenwei->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(checkBox_fenwei, 0, 1, 1, 1);

        groupBox_5 = new QGroupBox(groupBox_6);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        sizePolicy.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(groupBox_5);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSlider_3 = new QSlider(groupBox_5);
        horizontalSlider_3->setObjectName(QStringLiteral("horizontalSlider_3"));
        horizontalSlider_3->setMaximum(255);
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_3, 2, 1, 1, 1);

        label_3 = new QLabel(groupBox_5);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy6);
        label_3->setStyleSheet(QStringLiteral("color: rgb(0, 255, 0);"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        label_4 = new QLabel(groupBox_5);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy6.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy6);
        label_4->setStyleSheet(QStringLiteral("color: rgb(0, 0, 255);"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        horizontalSlider_2 = new QSlider(groupBox_5);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setMaximum(255);
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_2, 1, 1, 1, 1);

        horizontalSlider = new QSlider(groupBox_5);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setMaximum(255);
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox_5);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy6.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy6);
        label_2->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);


        gridLayout_5->addWidget(groupBox_5, 2, 0, 1, 2);


        verticalLayout->addWidget(groupBox_6);


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
        groupBox->setTitle(QApplication::translate("MainWindow", "\350\256\276\345\244\207\350\277\236\346\216\245", Q_NULLPTR));
        pushButton_openBLE->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\350\223\235\347\211\231", Q_NULLPTR));
        pushButton_upDateBLE->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260\350\256\276\345\244\207", Q_NULLPTR));
        pushButton_closeBLE->setText(QApplication::translate("MainWindow", "\346\226\255\345\274\200\350\277\236\346\216\245", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\350\256\276\345\244\207\347\212\266\346\200\201", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "    \351\200\232\347\224\250\350\256\276\347\275\256    ", Q_NULLPTR));
        checkBox->setText(QApplication::translate("MainWindow", "\344\272\272\344\275\223\346\204\237\345\272\224", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("MainWindow", "\350\207\252\345\212\250\350\260\203\350\212\202\344\272\256\345\272\246", Q_NULLPTR));
        pushButton_sendtest->setText(QApplication::translate("MainWindow", "\350\216\267\345\217\226\347\212\266\346\200\201", Q_NULLPTR));
        pushButton_clearReceive->setText(QApplication::translate("MainWindow", "\346\270\205\345\261\217", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\346\250\241\345\274\217", Q_NULLPTR));
        pushButton_right->setText(QApplication::translate("MainWindow", "\346\231\256\351\200\232\346\250\241\345\274\217", Q_NULLPTR));
        pushButton_stop->setText(QApplication::translate("MainWindow", "\351\230\205\350\257\273\346\250\241\345\274\217", Q_NULLPTR));
        pushButton_speedUp->setText(QApplication::translate("MainWindow", "\346\270\270\346\210\217\346\250\241\345\274\217", Q_NULLPTR));
        pushButton_back->setText(QApplication::translate("MainWindow", "\347\224\265\345\275\261\346\250\241\345\274\217", Q_NULLPTR));
        checkBox_main->setText(QApplication::translate("MainWindow", "\344\270\273\347\201\257\345\205\211", Q_NULLPTR));
        groupBox_61->setTitle(QApplication::translate("MainWindow", "\344\272\256\345\272\246\350\211\262\346\270\251\350\260\203\350\212\202", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\350\211\262\346\270\251", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\344\272\256\345\272\246", Q_NULLPTR));
        checkBox_fenwei->setText(QApplication::translate("MainWindow", "\346\260\233\345\233\264\347\201\257", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "RGB\350\256\276\347\275\256", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"right\">G</p></body></html>", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"right\">B</p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"right\">R</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
