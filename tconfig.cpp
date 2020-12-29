#include "tconfig.h"
#include "ui_tconfig.h"

TCONFIG::TCONFIG(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TCONFIG)
{
    ui->setupUi(this);
    foreach(const QSerialPortInfo &inf,QSerialPortInfo::availablePorts()){
        ui->comboBox->addItem(QIcon(),inf.portName());
    }
}

TCONFIG::~TCONFIG()
{
    delete ui;
}

void TCONFIG::on_pushButton_clicked()
{
    p->clear();
    *p<<ui->comboBox->currentText()<<ui->lineEdit_2->text();
    this->close();
}
