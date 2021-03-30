#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QBluetoothSocket>
#include <QMessageBox>
#include <QListWidgetItem>

#include <QtBluetooth/qtbluetoothglobal.h>
//#include <QtBluetooth/qbluetoothglobal.h>
#include <QtBluetooth/qbluetoothlocaldevice.h>
#include <qbluetoothaddress.h>
#include <qbluetoothdevicediscoveryagent.h>
#include <qbluetoothlocaldevice.h>
#include <qbluetoothsocket.h>

#include <QTextCodec>
#include <QDateTime>
#include <QTimer>//定时器
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
void blueStates();
private slots:
     void on_pushButton_openBLE_clicked();
     void on_pushButton_upDateBLE_clicked();
     void addBlueToothDevicesToList(const QBluetoothDeviceInfo &info);
     void findFinish();
     void connectBLE(QListWidgetItem *item);
     void connectOK();
     void connectNot();
     void readBluetoothDataEvent();

     void on_pushButton_forward_clicked();
     void on_pushButton_back_clicked();
     void on_pushButton_stop_clicked();
     void on_pushButton_lift_clicked();
     void on_pushButton_right_clicked();

     void on_pushButton_speedUp_clicked();
     void on_pushButton_slowDown_clicked();
     void on_pushButton_closeBLE_clicked();
     void on_pushButton_clearReceive_clicked();
     void on_pushButton_send_clicked();
private:
    Ui::MainWindow *ui;

        QBluetoothDeviceDiscoveryAgent *discoveryAgent;//用来对周围蓝牙进行搜寻
        QBluetoothLocalDevice *localDevice;//对本地设备进行操作，比如进行设备的打开，设备的关闭等等
        QBluetoothSocket *socket;//就是用来进行蓝牙配对链接和数据传输的
        QTimer *timer;

        QString fornt = "1";
        QString back = "2";
        QString left = "3";
        QString right = "4";
        QString stop = "5";
        QString speedUp = "6";
        QString slowDown = "7";

        QString comStr;
};
#endif // MAINWINDOW_H
