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
#include <QtWidgets/QDial>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_7;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_6;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_openBLE;
    QPushButton *pushButton_closeBLE;
    QPushButton *pushButton_upDateBLE;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_5;
    QTextBrowser *textBrowser_receive;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QPushButton *pushButton_sendtest;
    QPushButton *pushButton_clearReceive;
    QWidget *widget_6;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QSpinBox *spinBox_B;
    QSlider *verticalSlider;
    QPushButton *pushButton_right;
    QLabel *label_5;
    QLabel *label_2;
    QPushButton *pushButton_stop;
    QCheckBox *checkBox_main;
    QDial *dial;
    QSpinBox *spinBox_G;
    QSlider *horizontalSlider_3;
    QSpinBox *spinBox_R;
    QSpacerItem *verticalSpacer;
    QSlider *horizontalSlider_2;
    QLabel *label_3;
    QPushButton *pushButton_speedUp;
    QSlider *horizontalSlider;
    QLabel *label;
    QSpinBox *spinBox_temperature;
    QPushButton *pushButton_back;
    QCheckBox *checkBox_fenwei;
    QSpinBox *spinBox_brightness;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(566, 721);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget_7 = new QWidget(centralwidget);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        verticalLayout = new QVBoxLayout(widget_7);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(widget_7);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
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


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(widget_7);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        horizontalLayout_5 = new QHBoxLayout(groupBox_2);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        textBrowser_receive = new QTextBrowser(groupBox_2);
        textBrowser_receive->setObjectName(QStringLiteral("textBrowser_receive"));
        textBrowser_receive->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_5->addWidget(textBrowser_receive);

        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setEnabled(true);
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        checkBox = new QCheckBox(groupBox_3);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        verticalLayout_4->addWidget(checkBox);

        checkBox_2 = new QCheckBox(groupBox_3);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        verticalLayout_4->addWidget(checkBox_2);


        gridLayout_2->addLayout(verticalLayout_4, 0, 0, 1, 1);

        pushButton_sendtest = new QPushButton(groupBox_3);
        pushButton_sendtest->setObjectName(QStringLiteral("pushButton_sendtest"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_sendtest->sizePolicy().hasHeightForWidth());
        pushButton_sendtest->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(pushButton_sendtest, 1, 0, 1, 1);

        pushButton_clearReceive = new QPushButton(groupBox_3);
        pushButton_clearReceive->setObjectName(QStringLiteral("pushButton_clearReceive"));

        gridLayout_2->addWidget(pushButton_clearReceive, 2, 0, 1, 1);


        horizontalLayout_5->addWidget(groupBox_3);


        verticalLayout->addWidget(groupBox_2);

        widget_6 = new QWidget(widget_7);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        gridLayout = new QGridLayout(widget_6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_4 = new QLabel(widget_6);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("color: rgb(0, 0, 255);"));

        gridLayout->addWidget(label_4, 12, 0, 1, 1, Qt::AlignHCenter);

        spinBox_B = new QSpinBox(widget_6);
        spinBox_B->setObjectName(QStringLiteral("spinBox_B"));
        spinBox_B->setStyleSheet(QStringLiteral("color: rgb(0, 0, 255);"));
        spinBox_B->setMaximum(255);

        gridLayout->addWidget(spinBox_B, 12, 3, 1, 1);

        verticalSlider = new QSlider(widget_6);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        verticalSlider->setOrientation(Qt::Vertical);

        gridLayout->addWidget(verticalSlider, 2, 3, 7, 1, Qt::AlignHCenter);

        pushButton_right = new QPushButton(widget_6);
        pushButton_right->setObjectName(QStringLiteral("pushButton_right"));
        pushButton_right->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(pushButton_right, 3, 0, 1, 1);

        label_5 = new QLabel(widget_6);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 9, 1, 1, 1, Qt::AlignHCenter);

        label_2 = new QLabel(widget_6);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        gridLayout->addWidget(label_2, 10, 0, 1, 1, Qt::AlignHCenter);

        pushButton_stop = new QPushButton(widget_6);
        pushButton_stop->setObjectName(QStringLiteral("pushButton_stop"));

        gridLayout->addWidget(pushButton_stop, 4, 0, 1, 1);

        checkBox_main = new QCheckBox(widget_6);
        checkBox_main->setObjectName(QStringLiteral("checkBox_main"));

        gridLayout->addWidget(checkBox_main, 0, 0, 1, 1);

        dial = new QDial(widget_6);
        dial->setObjectName(QStringLiteral("dial"));
        dial->setMaximum(100);

        gridLayout->addWidget(dial, 3, 1, 5, 1);

        spinBox_G = new QSpinBox(widget_6);
        spinBox_G->setObjectName(QStringLiteral("spinBox_G"));
        spinBox_G->setStyleSheet(QStringLiteral("color: rgb(85, 255, 0);"));
        spinBox_G->setMaximum(255);

        gridLayout->addWidget(spinBox_G, 11, 3, 1, 1);

        horizontalSlider_3 = new QSlider(widget_6);
        horizontalSlider_3->setObjectName(QStringLiteral("horizontalSlider_3"));
        horizontalSlider_3->setMaximum(255);
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_3, 12, 1, 1, 1);

        spinBox_R = new QSpinBox(widget_6);
        spinBox_R->setObjectName(QStringLiteral("spinBox_R"));
        spinBox_R->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        spinBox_R->setMaximum(255);

        gridLayout->addWidget(spinBox_R, 10, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        horizontalSlider_2 = new QSlider(widget_6);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setMaximum(255);
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_2, 11, 1, 1, 1);

        label_3 = new QLabel(widget_6);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("color: rgb(0, 255, 0);"));

        gridLayout->addWidget(label_3, 11, 0, 1, 1, Qt::AlignHCenter);

        pushButton_speedUp = new QPushButton(widget_6);
        pushButton_speedUp->setObjectName(QStringLiteral("pushButton_speedUp"));

        gridLayout->addWidget(pushButton_speedUp, 6, 0, 1, 1);

        horizontalSlider = new QSlider(widget_6);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setMaximum(255);
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider, 10, 1, 1, 1);

        label = new QLabel(widget_6);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 9, 3, 1, 1, Qt::AlignHCenter);

        spinBox_temperature = new QSpinBox(widget_6);
        spinBox_temperature->setObjectName(QStringLiteral("spinBox_temperature"));

        gridLayout->addWidget(spinBox_temperature, 1, 3, 1, 1);

        pushButton_back = new QPushButton(widget_6);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));

        gridLayout->addWidget(pushButton_back, 5, 0, 1, 1);

        checkBox_fenwei = new QCheckBox(widget_6);
        checkBox_fenwei->setObjectName(QStringLiteral("checkBox_fenwei"));

        gridLayout->addWidget(checkBox_fenwei, 0, 1, 1, 1);

        spinBox_brightness = new QSpinBox(widget_6);
        spinBox_brightness->setObjectName(QStringLiteral("spinBox_brightness"));

        gridLayout->addWidget(spinBox_brightness, 1, 1, 1, 1, Qt::AlignHCenter);


        verticalLayout->addWidget(widget_6);

        verticalLayout->setStretch(1, 3);

        verticalLayout_2->addWidget(widget_7);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 566, 26));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), spinBox_R, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_2, SIGNAL(valueChanged(int)), spinBox_G, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_3, SIGNAL(valueChanged(int)), spinBox_B, SLOT(setValue(int)));
        QObject::connect(dial, SIGNAL(valueChanged(int)), spinBox_brightness, SLOT(setValue(int)));
        QObject::connect(verticalSlider, SIGNAL(valueChanged(int)), spinBox_temperature, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "\350\256\276\345\244\207\350\277\236\346\216\245", Q_NULLPTR));
        pushButton_openBLE->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\350\223\235\347\211\231", Q_NULLPTR));
        pushButton_closeBLE->setText(QApplication::translate("MainWindow", "\346\226\255\345\274\200\350\277\236\346\216\245", Q_NULLPTR));
        pushButton_upDateBLE->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260\350\256\276\345\244\207", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\350\256\276\345\244\207\347\212\266\346\200\201", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "    \351\200\232\347\224\250\350\256\276\347\275\256    ", Q_NULLPTR));
        checkBox->setText(QApplication::translate("MainWindow", "\344\272\272\344\275\223\346\204\237\345\272\224", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("MainWindow", "\350\207\252\345\212\250\350\260\203\350\212\202\344\272\256\345\272\246", Q_NULLPTR));
        pushButton_sendtest->setText(QApplication::translate("MainWindow", "\350\216\267\345\217\226\347\212\266\346\200\201", Q_NULLPTR));
        pushButton_clearReceive->setText(QApplication::translate("MainWindow", "\346\270\205\345\261\217", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "B", Q_NULLPTR));
        pushButton_right->setText(QApplication::translate("MainWindow", "\346\231\256\351\200\232\346\250\241\345\274\217", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\344\272\256\345\272\246", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "R", Q_NULLPTR));
        pushButton_stop->setText(QApplication::translate("MainWindow", "\351\230\205\350\257\273\346\250\241\345\274\217", Q_NULLPTR));
        checkBox_main->setText(QApplication::translate("MainWindow", "\344\270\273\347\201\257\345\205\211", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "G", Q_NULLPTR));
        pushButton_speedUp->setText(QApplication::translate("MainWindow", "\346\270\270\346\210\217\346\250\241\345\274\217", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\350\211\262\346\270\251", Q_NULLPTR));
        pushButton_back->setText(QApplication::translate("MainWindow", "\347\224\265\345\275\261\346\250\241\345\274\217", Q_NULLPTR));
        checkBox_fenwei->setText(QApplication::translate("MainWindow", "\346\260\233\345\233\264\347\201\257", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
