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
#include <QtWidgets/QDial>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_6;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_openBLE;
    QPushButton *pushButton_closeBLE;
    QPushButton *pushButton_upDateBLE;
    QWidget *widget_7;
    QVBoxLayout *verticalLayout;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *label_9;
    QWidget *tab_2;
    QGroupBox *groupBox_2;
    QTextBrowser *textBrowser_receive;
    QGroupBox *groupBox_3;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QPushButton *pushButton_clearReceive;
    QPushButton *pushButton_sendtest;
    QWidget *widget_6;
    QSlider *verticalSlider;
    QDial *dial;
    QComboBox *comboBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_5;
    QPushButton *pushButton_forward;
    QPushButton *pushButton_TurnOff;
    QLCDNumber *lcdNumber;
    QGroupBox *groupBox_4;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QSlider *horizontalSlider;
    QSpinBox *spinBox;
    QSlider *horizontalSlider_2;
    QLabel *label_5;
    QSpinBox *spinBox_2;
    QSlider *horizontalSlider_3;
    QLabel *label_6;
    QSpinBox *spinBox_3;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(439, 594);
        MainWindow->setToolTipDuration(0);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab_1 = new QWidget();
        tab_1->setObjectName(QStringLiteral("tab_1"));
        tab_1->setEnabled(true);
        groupBox = new QGroupBox(tab_1);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 10, 400, 133));
        horizontalLayout_6 = new QHBoxLayout(groupBox);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, -1, 10, -1);
        listWidget = new QListWidget(groupBox);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_6->addWidget(listWidget);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        pushButton_openBLE = new QPushButton(groupBox);
        pushButton_openBLE->setObjectName(QStringLiteral("pushButton_openBLE"));

        verticalLayout_3->addWidget(pushButton_openBLE);

        pushButton_closeBLE = new QPushButton(groupBox);
        pushButton_closeBLE->setObjectName(QStringLiteral("pushButton_closeBLE"));

        verticalLayout_3->addWidget(pushButton_closeBLE);

        pushButton_upDateBLE = new QPushButton(groupBox);
        pushButton_upDateBLE->setObjectName(QStringLiteral("pushButton_upDateBLE"));

        verticalLayout_3->addWidget(pushButton_upDateBLE);


        horizontalLayout_6->addLayout(verticalLayout_3);

        widget_7 = new QWidget(tab_1);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        widget_7->setGeometry(QRect(0, 270, 418, 18));
        verticalLayout = new QVBoxLayout(widget_7);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_8 = new QLabel(widget_7);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout->addWidget(label_8);

        label_7 = new QLabel(tab_1);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 160, 181, 31));
        label_9 = new QLabel(tab_1);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 190, 181, 16));
        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 10, 411, 161));
        textBrowser_receive = new QTextBrowser(groupBox_2);
        textBrowser_receive->setObjectName(QStringLiteral("textBrowser_receive"));
        textBrowser_receive->setGeometry(QRect(10, 25, 261, 131));
        textBrowser_receive->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(280, 26, 121, 131));
        checkBox = new QCheckBox(groupBox_3);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(0, 20, 87, 19));
        checkBox->setChecked(true);
        checkBox_2 = new QCheckBox(groupBox_3);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(0, 40, 121, 19));
        checkBox_2->setChecked(false);
        pushButton_clearReceive = new QPushButton(groupBox_3);
        pushButton_clearReceive->setObjectName(QStringLiteral("pushButton_clearReceive"));
        pushButton_clearReceive->setGeometry(QRect(0, 100, 93, 28));
        pushButton_sendtest = new QPushButton(groupBox_3);
        pushButton_sendtest->setObjectName(QStringLiteral("pushButton_sendtest"));
        pushButton_sendtest->setGeometry(QRect(0, 70, 93, 28));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_sendtest->sizePolicy().hasHeightForWidth());
        pushButton_sendtest->setSizePolicy(sizePolicy);
        widget_6 = new QWidget(tab_2);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setGeometry(QRect(10, 170, 401, 291));
        verticalSlider = new QSlider(widget_6);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        verticalSlider->setGeometry(QRect(310, 30, 31, 91));
        verticalSlider->setValue(40);
        verticalSlider->setOrientation(Qt::Vertical);
        dial = new QDial(widget_6);
        dial->setObjectName(QStringLiteral("dial"));
        dial->setGeometry(QRect(140, 29, 111, 111));
        comboBox = new QComboBox(widget_6);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(0, 40, 87, 22));
        label = new QLabel(widget_6);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 130, 82, 15));
        label_2 = new QLabel(widget_6);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(228, 130, 81, 15));
        label_3 = new QLabel(widget_6);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(310, 130, 68, 15));
        checkBox_6 = new QCheckBox(widget_6);
        checkBox_6->setObjectName(QStringLiteral("checkBox_6"));
        checkBox_6->setGeometry(QRect(90, 0, 72, 19));
        checkBox_5 = new QCheckBox(widget_6);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));
        checkBox_5->setGeometry(QRect(10, 0, 72, 19));
        checkBox_5->setTabletTracking(false);
        checkBox_5->setCheckable(true);
        checkBox_5->setChecked(true);
        pushButton_forward = new QPushButton(widget_6);
        pushButton_forward->setObjectName(QStringLiteral("pushButton_forward"));
        pushButton_forward->setGeometry(QRect(90, 260, 101, 31));
        pushButton_TurnOff = new QPushButton(widget_6);
        pushButton_TurnOff->setObjectName(QStringLiteral("pushButton_TurnOff"));
        pushButton_TurnOff->setGeometry(QRect(220, 260, 101, 31));
        lcdNumber = new QLCDNumber(widget_6);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(290, 0, 61, 31));
        groupBox_4 = new QGroupBox(widget_6);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 150, 381, 111));
        layoutWidget = new QWidget(groupBox_4);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 361, 92));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        gridLayout->addWidget(label_4, 0, 0, 2, 1);

        horizontalSlider = new QSlider(layoutWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setMaximum(255);
        horizontalSlider->setPageStep(50);
        horizontalSlider->setValue(127);
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider, 0, 1, 1, 1);

        spinBox = new QSpinBox(layoutWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMaximum(255);
        spinBox->setValue(127);
        spinBox->setDisplayIntegerBase(10);

        gridLayout->addWidget(spinBox, 0, 2, 2, 1);

        horizontalSlider_2 = new QSlider(layoutWidget);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setMaximum(255);
        horizontalSlider_2->setPageStep(50);
        horizontalSlider_2->setValue(127);
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_2, 1, 1, 2, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QStringLiteral("color: rgb(0, 255, 0);"));

        gridLayout->addWidget(label_5, 2, 0, 2, 1);

        spinBox_2 = new QSpinBox(layoutWidget);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setMaximum(255);
        spinBox_2->setValue(127);
        spinBox_2->setDisplayIntegerBase(10);

        gridLayout->addWidget(spinBox_2, 2, 2, 2, 1);

        horizontalSlider_3 = new QSlider(layoutWidget);
        horizontalSlider_3->setObjectName(QStringLiteral("horizontalSlider_3"));
        horizontalSlider_3->setMaximum(255);
        horizontalSlider_3->setPageStep(50);
        horizontalSlider_3->setValue(127);
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_3, 3, 1, 2, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QStringLiteral("color: rgb(0, 0, 255);"));

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        spinBox_3 = new QSpinBox(layoutWidget);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));
        spinBox_3->setMaximum(255);
        spinBox_3->setValue(127);
        spinBox_3->setDisplayIntegerBase(10);

        gridLayout->addWidget(spinBox_3, 4, 2, 1, 1);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_2->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 439, 26));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);
        QObject::connect(verticalSlider, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), spinBox, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_2, SIGNAL(valueChanged(int)), spinBox_2, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_3, SIGNAL(valueChanged(int)), spinBox_3, SLOT(setValue(int)));

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "\345\217\257\347\224\250\350\256\276\345\244\207", Q_NULLPTR));
        pushButton_openBLE->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\350\223\235\347\211\231", Q_NULLPTR));
        pushButton_closeBLE->setText(QApplication::translate("MainWindow", "\346\226\255\345\274\200\350\277\236\346\216\245", Q_NULLPTR));
        pushButton_upDateBLE->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260\350\256\276\345\244\207", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "\345\215\225\345\207\273\345\210\227\350\241\250\345\217\257\351\200\211\344\270\255\350\223\235\347\211\231\350\256\276\345\244\207", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "\345\217\214\345\207\273\345\210\227\350\241\250\345\217\257\350\277\236\346\216\245\350\223\235\347\211\231\350\256\276\345\244\207", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QApplication::translate("MainWindow", "\350\277\236\346\216\245", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\345\275\223\345\211\215\347\212\266\346\200\201", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\351\200\232\347\224\250\350\256\276\347\275\256", Q_NULLPTR));
        checkBox->setText(QApplication::translate("MainWindow", "\344\272\272\344\275\223\346\204\237\345\272\224", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("MainWindow", "\350\207\252\345\212\250\350\260\203\350\212\202\344\272\256\345\272\246", Q_NULLPTR));
        pushButton_clearReceive->setText(QApplication::translate("MainWindow", "\346\270\205\345\261\217", Q_NULLPTR));
        pushButton_sendtest->setText(QApplication::translate("MainWindow", "\350\216\267\345\217\226\347\212\266\346\200\201", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\346\255\243\345\270\270\346\250\241\345\274\217", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\351\230\205\350\257\273\346\250\241\345\274\217", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\345\267\245\344\275\234\346\250\241\345\274\217", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\347\224\265\345\275\261\346\250\241\345\274\217", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\346\270\270\346\210\217\346\250\241\345\274\217", Q_NULLPTR)
        );
        label->setText(QApplication::translate("MainWindow", "\345\206\267", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\346\232\226", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\344\272\256\345\272\246", Q_NULLPTR));
        checkBox_6->setText(QApplication::translate("MainWindow", "\346\260\233\345\233\264\347\201\257", Q_NULLPTR));
        checkBox_5->setText(QApplication::translate("MainWindow", "\344\270\273\347\201\257\345\205\211", Q_NULLPTR));
        pushButton_forward->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", Q_NULLPTR));
        pushButton_TurnOff->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "RGB", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "R", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "G", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "B", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\346\216\247\345\210\266\344\270\255\345\277\203", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
