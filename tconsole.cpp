#include "tconsole.h"
#include "ui_tconsole.h"
#include "mainwindow.h"

TCONSOLE::TCONSOLE(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TCONSOLE)
{
    ui->setupUi(this);
}

TCONSOLE::~TCONSOLE()
{
    delete ui;
}

void TCONSOLE::appendConsole(QString txt)
{
    ui->plainTextEdit->moveCursor(QTextCursor::End);
    ui->plainTextEdit->insertPlainText(txt);
}

void TCONSOLE::on_pushButton_clicked()
{
    ((MainWindow*)t)->serWrite(ui->lineEdit->text().toUtf8());
    if(ui->checkBox_3->checkState())ui->lineEdit->clear();
}

void TCONSOLE::on_pushButton_2_clicked()
{
    ui->plainTextEdit->clear();
}

void TCONSOLE::on_lineEdit_returnPressed()
{
    on_pushButton_clicked();
}

