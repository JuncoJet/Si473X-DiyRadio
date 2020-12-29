#include "tbookmarks.h"
#include "ui_tbookmarks.h"
#include "mainwindow.h"

TBOOKMARKS::TBOOKMARKS(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TBOOKMARKS)
{
    ui->setupUi(this);
    ui->menu_1->menuAction()->setVisible(false);
    ui->splitter->setStretchFactor(0,3);
    ui->splitter->setStretchFactor(1,7);
    ui->menubar->addAction(ui->action_A);
}

TBOOKMARKS::~TBOOKMARKS()
{
    delete ui;
}

void TBOOKMARKS::on_listWidget_customContextMenuRequested(const QPoint &pos)
{
    ui->menu_1->popup(QCursor::pos());
}

void TBOOKMARKS::on_action_A_triggered()
{
    if(t){
        QTableWidgetItem *item=new QTableWidgetItem();
        item->setText(QString::number(((MainWindow*)t)->freq));
        ui->tableWidget_2->insertRow(0);
        ui->tableWidget_2->setItem(0,0,item);
    }
}
