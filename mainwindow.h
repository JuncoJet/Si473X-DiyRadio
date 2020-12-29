#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QDebug>
#include <QtSerialPort>
#include <QMessageBox>
#include <QtConfig>
#include "tconfig.h"
#include "tconsole.h"
#include "tbookmarks.h"
#define DISABLED "color: rgb(200, 200, 200);"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QStringList com;
    QSerialPort *ser;
    void serWrite(QString txt);
    int freq;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_11_clicked();

    void on_dial_2_valueChanged(int value);

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_12_clicked();

    void ser_readyRead();

    void on_pushButton_2_clicked();

    void on_pushButton_2_customContextMenuRequested(const QPoint &pos);

    void on_pushButton_9_toggled(bool checked);

private:
    Ui::MainWindow *ui;
    QLabel *lb[8];
    TCONSOLE *tcom;
    TBOOKMARKS *tbook;
    QRegExp *hz;
    int slb;
};

#endif // MAINWINDOW_H
