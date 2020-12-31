#include "tbookmarks.h"
#include "ui_tbookmarks.h"
#include "mainwindow.h"

TBOOKMARKS::TBOOKMARKS(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TBOOKMARKS)
{
    ui->setupUi(this);
    ui->menu_1->menuAction()->setVisible(false);
    ui->menu_2->menuAction()->setVisible(false);
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
        MainWindow *q=(MainWindow*)t;
        selRow=q->slb;
        bandList bl;
        bl.freq=q->freq;
        vbl[selRow].append(bl);
        ui->listWidget->setCurrentRow(selRow);
        refresh_listWidget(selRow);
        //临时操作，回滚记录除非手动保存
        vbl[selRow].remove(vbl[selRow].size()-1);
    }
}

void TBOOKMARKS::on_tableWidget_2_customContextMenuRequested(const QPoint &pos)
{
    ui->menu_2->popup(QCursor::pos(),ui->action_O);
}

void TBOOKMARKS::on_action_O_triggered()
{
    QStringList sl;
    sl<<ui->listWidget->currentItem()->text();
    sl<<ui->tableWidget_2->itemAt(0,ui->tableWidget_2->currentRow())->text();
    qDebug()<<sl.join(":");
}

void TBOOKMARKS::refresh_listWidget(int row)
{
    selRow=row;
    ui->tableWidget_2->setRowCount(0);
    foreach(bandList bl,vbl[selRow]){
        QTableWidgetItem *item=new QTableWidgetItem();
        item->setText(QString::number(bl.freq));
        ui->tableWidget_2->insertRow(0);
        ui->tableWidget_2->setItem(0,0,item);
    }
}

void TBOOKMARKS::on_listWidget_clicked(const QModelIndex &index)
{
    refresh_listWidget(index.row());
}

void TBOOKMARKS::on_action_S_triggered()
{
    QMessageBox::information(this,"提示","设置已保存！");
}

void TBOOKMARKS::on_action_D_triggered()
{
    if(ui->listWidget->currentRow()<6){
        QMessageBox::critical(this,"错误","不允许删除默认分类！");
    }
}

void TBOOKMARKS::on_action_R_triggered()
{
    if(ui->listWidget->currentRow()<6){
        QMessageBox::critical(this,"错误","不允许重命名默认分类！");
    }
}
