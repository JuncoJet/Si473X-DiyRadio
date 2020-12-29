#ifndef TBOOKMARKS_H
#define TBOOKMARKS_H

#include <QMainWindow>
#include <QCursor>
#include <QDebug>

namespace Ui {
class TBOOKMARKS;
}

class TBOOKMARKS : public QMainWindow
{
    Q_OBJECT

public:
    explicit TBOOKMARKS(QWidget *parent = 0);
    ~TBOOKMARKS();
    void *t;

private slots:
    void on_listWidget_customContextMenuRequested(const QPoint &pos);

    void on_action_A_triggered();

private:
    Ui::TBOOKMARKS *ui;
};

#endif // TBOOKMARKS_H
