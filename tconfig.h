#ifndef TCONFIG_H
#define TCONFIG_H

#include <QDialog>
#include <QtSerialPort>

namespace Ui {
class TCONFIG;
}

class TCONFIG : public QDialog
{
    Q_OBJECT

public:
    explicit TCONFIG(QWidget *parent = 0);
    ~TCONFIG();
    QStringList *p;

private slots:
    void on_pushButton_clicked();

private:
    Ui::TCONFIG *ui;
};

#endif // TCONFIG_H
