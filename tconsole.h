#ifndef TCONSOLE_H
#define TCONSOLE_H

#include <QMainWindow>
#include <QTextCursor>

namespace Ui {
class TCONSOLE;
}

class TCONSOLE : public QMainWindow
{
    Q_OBJECT

public:
    explicit TCONSOLE(QWidget *parent = 0);
    ~TCONSOLE();
    void appendConsole(QString txt);
    void *t;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_lineEdit_returnPressed();

private:
    Ui::TCONSOLE *ui;
};

#endif // TCONSOLE_H
