#include "mainwindow.h"
#include "ui_mainwindow.h"
/*
 在蓝牙中，每个服务和服务属性都唯一地由"全球唯一标识符" （UUID）来校验。正如它的名字所暗示的，
每一个这样的标识符都要在时空上保证唯一。UUID类可表现为短整形（16或32位）和长整形（128位）UUID。
他提供了分别利用String和16位或32位数值来创建类的构造函数，提供了一个可以比较两个UUID（如果两个
都是128位）的方法，还有一个可以转换一个UUID为一个字符串的方法。UUID实例是不可改变的（immutable），
只有被UUID标示的服务可以被发现。在Linux下你用一个命令uuidgen -t可以生成一个UUID值；在Windows下
则执行命令uuidgen 。UUID看起来就像如下的这个形式：2d266186-01fb-47c2-8d9f-10b8ec891363。
当使用生成的UUID去创建一个UUID对象，你可以去掉连字符。

在本项目中，用到的模式是串口模式，我们需要建立一个存储Uuid的机制，如下：
static const QLatin1String serviceUuid("00001101-0000-1000-8000-00805F9B34FB");
*/

static const QLatin1String serviceUuid("00001101-0000-1000-8000-00805F9B34FB");
/* 全局变量 方便控制端调用蓝牙连接成功后的socket发送数据 */
QBluetoothSocket *socket;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    discoveryAgent = new QBluetoothDeviceDiscoveryAgent();
    timer = new QTimer();
    localDevice = new QBluetoothLocalDevice();
    //给socket分配内存，限定套接字协议
    socket = new QBluetoothSocket(QBluetoothServiceInfo::RfcommProtocol);
    //发现设备时会触发deviceDiscovered信号，转到槽显示蓝牙设备
    connect(discoveryAgent,SIGNAL(deviceDiscovered(QBluetoothDeviceInfo)),this,SLOT(addBlueToothDevicesToList(QBluetoothDeviceInfo)));
    connect(discoveryAgent,SIGNAL(finished()),this,SLOT(findFinish()));
    //双击listwidget的项目，触发连接蓝牙的槽
    connect(ui->listWidget,SIGNAL(itemActivated(QListWidgetItem*)),this,SLOT(connectBLE(QListWidgetItem*)));
    //蓝牙连接设备成功后会停止搜索设备，显示连接成功
    connect(socket,SIGNAL(connected()),this,SLOT(connectOK()));
    //蓝牙连断开连接后，会显示已断开连接
    connect(socket,SIGNAL(disconnected()),this,SLOT(connectNot()));
    //接受到上位机传来的数据后显示，会触发接受数据函数
    connect(socket,SIGNAL(readyRead()),this,SLOT(readBluetoothDataEvent()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
//打开蓝牙并查找蓝牙设备
void MainWindow::on_pushButton_openBLE_clicked()
{
    if( localDevice->hostMode() == QBluetoothLocalDevice::HostPoweredOff)//开机没有打开蓝牙
    {
        localDevice->powerOn();//调用打开本地的蓝牙设备
        discoveryAgent->start();//开始扫描蓝牙设备
    }
    else
    {
         QMessageBox::information(this, tr("成功"), tr("蓝牙已打开"));
    }

}
// 关闭 断开已连接的蓝牙设备 close设备和我们的open设备的方法在形式上不一样，只能用这样的方法对蓝牙进行关闭。
void MainWindow::on_pushButton_closeBLE_clicked()
{
    socket->close();
    QMessageBox::information(this, tr("成功"), tr("已断开连接"));

}
//刷新 重新查找蓝牙设备
void MainWindow::on_pushButton_upDateBLE_clicked()
{
    discoveryAgent->start();
    ui->listWidget->clear();
}
//在ListWidget上显示查找到的蓝牙设备
void MainWindow::addBlueToothDevicesToList(const QBluetoothDeviceInfo &info)
{
    QString label = QString("%1 %2").arg(info.address().toString()).arg(info.name());
    QList<QListWidgetItem *> items = ui->listWidget->findItems(label, Qt::MatchExactly);

    if (items.empty())
    {
        QListWidgetItem *item = new QListWidgetItem(label);
        QBluetoothLocalDevice::Pairing pairingStatus = localDevice->pairingStatus(info.address());
        /* 蓝牙状态pairingStatus，Pairing枚举类型
         * 0:Unpaired没配对
         * 1:Paired配对但没授权
         * 2:AuthorizedPaired配对且授权 */
        if (pairingStatus == QBluetoothLocalDevice::Paired || pairingStatus == QBluetoothLocalDevice::AuthorizedPaired )
            item->setTextColor(QColor(Qt::red));
        else
            item->setTextColor(QColor(Qt::black));
        ui->listWidget->addItem(item);
    }
}
//刷新完成
void MainWindow::findFinish()
{
    ui->pushButton_upDateBLE->setEnabled(true);
    QMessageBox::information(this, tr("刷新"), tr("刷新完成!"));
}
//蓝牙连接
void MainWindow::connectBLE(QListWidgetItem *item)
{
    QString text = item->text();
    int index = text.indexOf(' ');
    if (index == -1)
        return;
    QBluetoothAddress address(text.left(index));
    QString name(text.mid(index + 1));
    QMessageBox::information(this,tr("提示"),tr("设备正在连接中..."));
    socket->connectToService(address, QBluetoothUuid(serviceUuid) ,QIODevice::ReadWrite);
}
//连接成功
void MainWindow::connectOK()
{
    discoveryAgent->stop();  //停止搜索设备
    QMessageBox::information(this, tr("成功"), tr("连接成功!"));
}
//连接失败
void MainWindow::connectNot()
{
    QMessageBox::information(this, tr("提示"), tr("已断开连接"));
}

//窗口显示串口传来的数据
void MainWindow::readBluetoothDataEvent()
{    
    //这里数据需要自己做处理，不然发送接受不成功，提示：用定时器定时接受
    QByteArray line = socket->readAll();
    QString strData = line.toHex();
    comStr.append(strData);
    if(comStr.length() >= 4)
    {
        ui->textBrowser_receive->append(comStr + "\n");
        comStr.clear();
    }
}

//蓝牙状态
void MainWindow::blueStates()
{
    if(socket == NULL)
    QMessageBox::information(this, "错误", "蓝牙未连接");
}
//暂停
void MainWindow::on_pushButton_stop_clicked()
{
    blueStates();
    socket->write(stop.toLatin1());
}

//前进
void MainWindow::on_pushButton_forward_clicked()
{
    blueStates();
    socket->write(fornt.toLatin1());
}
//后退
void MainWindow::on_pushButton_back_clicked()
{
    blueStates();
    socket->write(back.toLatin1());
}
//左转
void MainWindow::on_pushButton_lift_clicked()
{
    blueStates();
    socket->write(left.toLatin1());
}
//右转
void MainWindow::on_pushButton_right_clicked()
{
    blueStates();
    socket->write(right.toLatin1());
}
//加速
void MainWindow::on_pushButton_speedUp_clicked()
{
    blueStates();
    socket->write(speedUp.toLatin1());
}
//减速
void MainWindow::on_pushButton_slowDown_clicked()
{
    blueStates();
    socket->write(slowDown.toLatin1());
}

void MainWindow::on_pushButton_clearReceive_clicked()
{
    ui->textBrowser_receive->clear();
}

void MainWindow::on_pushButton_send_clicked()
{
    QByteArray arrayData;
    QString s("Welcome to pay attention to WeChat public number Guoguo young teachers\n");
    socket->write(s.toUtf8());
}

