#ifndef TBOOKMARKS_H
#define TBOOKMARKS_H

#include <QMainWindow>
#include <QCursor>
#include <QDebug>
typedef struct{
    int freq;
    QString rem;
}bandList;

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

    void on_tableWidget_2_customContextMenuRequested(const QPoint &pos);

    void on_action_O_triggered();

    void on_listWidget_clicked(const QModelIndex &index);

    void on_action_S_triggered();

    void on_action_D_triggered();

    void on_action_R_triggered();

private:
    Ui::TBOOKMARKS *ui;
    QVector<bandList> vbl[6];
    int selRow;
    void refresh_listWidget(int row);
};

#endif // TBOOKMARKS_H
