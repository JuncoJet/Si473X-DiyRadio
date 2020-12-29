#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    com<<"COM1"<<"9600";
    lb[0]=ui->label_9;
    lb[1]=ui->label_11;
    lb[2]=ui->label_3;
    lb[3]=ui->label_4;
    lb[4]=ui->label_12;
    lb[5]=ui->label_5;
    lb[6]=ui->label_6;
    lb[7]=ui->label_2;
    slb=0;
    ser=0;
    tcom=0;
    tbook=0;
    freq=0;
    lb[slb]->setStyleSheet("");
    lb[6]->setStyleSheet("");
    hz=new QRegExp(" (.+)(\\w)Hz");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    lb[slb]->setStyleSheet(DISABLED);
    if(slb>4)slb=-1;
    lb[++slb]->setStyleSheet("");
    if(slb<2){
        ui->label_6->setStyleSheet("");
        ui->label_2->setStyleSheet(DISABLED);
    }else{
        if(slb!=2)ui->label_2->setStyleSheet("");
        ui->label_6->setStyleSheet(DISABLED);
    }
}

void MainWindow::on_pushButton_8_clicked()
{
    TCONFIG t;
    t.p=&com;
    t.exec();
}

void MainWindow::on_pushButton_11_clicked()
{
    serWrite("B");
}

void MainWindow::on_dial_2_valueChanged(int value)
{

}

void MainWindow::on_pushButton_3_clicked()
{
    serWrite("U");
}

void MainWindow::on_pushButton_4_clicked()
{
    serWrite("D");
}

void MainWindow::on_pushButton_5_clicked()
{
    serWrite("-");
}

void MainWindow::on_pushButton_6_clicked()
{
    serWrite("+");
}

void MainWindow::on_pushButton_10_clicked()
{
    if(!tcom)tcom=new TCONSOLE();
    tcom->t=(void*)this;
    if(tcom->isMaximized())
        tcom->showMaximized();
    else
        tcom->showNormal();
    tcom->activateWindow();
}

void MainWindow::on_pushButton_12_clicked()
{
    if(!tbook)tbook=new TBOOKMARKS();
    tbook->t=(void*)this;
    if(tbook->isMaximized())
        tbook->showMaximized();
    else
        tbook->showNormal();
    tbook->activateWindow();
}

void MainWindow::ser_readyRead()
{
    QString s=ser->readAll();
    if(tcom){
        tcom->appendConsole(s);
    }
    if(s.indexOf(*hz)>=0){
        qDebug()<<hz->cap(1)<<" "<<hz->cap(2);
        if(hz->cap(2)=="M"){
            ui->label_16->setStyleSheet("");
            ui->label_15->setStyleSheet(DISABLED);
            freq=1000*1000;
        }else{
            ui->label_15->setStyleSheet("");
            ui->label_16->setStyleSheet(DISABLED);
            freq=1000;
        }
        ui->lcdNumber->display(hz->cap(1));
        freq*=hz->cap(1).toFloat();
    }
    if(s.indexOf("ST")<0){
        if(s.indexOf("MONO")<0)return;
        ui->label_19->setStyleSheet(DISABLED);
        ui->label_18->setStyleSheet("");
    }else{
        ui->label_19->setStyleSheet("");
        ui->label_18->setStyleSheet(DISABLED);
    }
}

void MainWindow::serWrite(QString txt)
{
    if(ser){
        ser->write(txt.toUtf8());
        if(tcom){
            tcom->appendConsole(txt+"\n");
        }
    }else{
        QMessageBox::critical(this,"错误","串口未连接！");
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    serWrite("S");
}

void MainWindow::on_pushButton_2_customContextMenuRequested(const QPoint &pos)
{
    serWrite("s");
}

void MainWindow::on_pushButton_9_toggled(bool checked)
{
    if(checked){
        if(!ser)ser=new QSerialPort();
        ser->setPortName(com[0]);
        ser->setBaudRate(com[1].toInt());
        if(!ser->open(QIODevice::ReadWrite)){
            QMessageBox::critical(this,"错误","串口打开失败！");
            return;
        }
        connect(ser,SIGNAL(readyRead()),this,SLOT(ser_readyRead()));
    }else{
        if(ser){
            ser->close();
            delete ser;
            ser=0;
        }
    }
}
