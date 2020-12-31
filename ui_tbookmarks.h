/********************************************************************************
** Form generated from reading UI file 'tbookmarks.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TBOOKMARKS_H
#define UI_TBOOKMARKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TBOOKMARKS
{
public:
    QAction *action_I;
    QAction *action_E;
    QAction *action_R;
    QAction *action_N;
    QAction *action_D;
    QAction *action_D_2;
    QAction *action_U;
    QAction *action_A;
    QAction *action_O;
    QAction *action_S;
    QAction *action_I_2;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QListWidget *listWidget;
    QTableWidget *tableWidget_2;
    QMenuBar *menubar;
    QMenu *menu_F;
    QMenu *menu_1;
    QMenu *menu_H;
    QMenu *menu_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TBOOKMARKS)
    {
        if (TBOOKMARKS->objectName().isEmpty())
            TBOOKMARKS->setObjectName(QStringLiteral("TBOOKMARKS"));
        TBOOKMARKS->resize(514, 321);
        action_I = new QAction(TBOOKMARKS);
        action_I->setObjectName(QStringLiteral("action_I"));
        action_E = new QAction(TBOOKMARKS);
        action_E->setObjectName(QStringLiteral("action_E"));
        action_R = new QAction(TBOOKMARKS);
        action_R->setObjectName(QStringLiteral("action_R"));
        action_N = new QAction(TBOOKMARKS);
        action_N->setObjectName(QStringLiteral("action_N"));
        action_D = new QAction(TBOOKMARKS);
        action_D->setObjectName(QStringLiteral("action_D"));
        action_D_2 = new QAction(TBOOKMARKS);
        action_D_2->setObjectName(QStringLiteral("action_D_2"));
        action_U = new QAction(TBOOKMARKS);
        action_U->setObjectName(QStringLiteral("action_U"));
        action_A = new QAction(TBOOKMARKS);
        action_A->setObjectName(QStringLiteral("action_A"));
        action_O = new QAction(TBOOKMARKS);
        action_O->setObjectName(QStringLiteral("action_O"));
        action_S = new QAction(TBOOKMARKS);
        action_S->setObjectName(QStringLiteral("action_S"));
        action_I_2 = new QAction(TBOOKMARKS);
        action_I_2->setObjectName(QStringLiteral("action_I_2"));
        centralwidget = new QWidget(TBOOKMARKS);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        listWidget = new QListWidget(splitter);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        splitter->addWidget(listWidget);
        tableWidget_2 = new QTableWidget(splitter);
        if (tableWidget_2->columnCount() < 2)
            tableWidget_2->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setContextMenuPolicy(Qt::CustomContextMenu);
        splitter->addWidget(tableWidget_2);

        verticalLayout->addWidget(splitter);

        TBOOKMARKS->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TBOOKMARKS);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 514, 23));
        menu_F = new QMenu(menubar);
        menu_F->setObjectName(QStringLiteral("menu_F"));
        menu_1 = new QMenu(menubar);
        menu_1->setObjectName(QStringLiteral("menu_1"));
        menu_H = new QMenu(menubar);
        menu_H->setObjectName(QStringLiteral("menu_H"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        TBOOKMARKS->setMenuBar(menubar);
        statusbar = new QStatusBar(TBOOKMARKS);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        TBOOKMARKS->setStatusBar(statusbar);

        menubar->addAction(menu_F->menuAction());
        menubar->addAction(menu_H->menuAction());
        menubar->addAction(menu_1->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu_F->addAction(action_I);
        menu_F->addAction(action_E);
        menu_F->addSeparator();
        menu_F->addAction(action_S);
        menu_1->addAction(action_N);
        menu_1->addAction(action_R);
        menu_1->addSeparator();
        menu_1->addAction(action_I_2);
        menu_1->addSeparator();
        menu_1->addAction(action_D);
        menu_H->addAction(action_U);
        menu_H->addAction(action_D_2);
        menu_2->addAction(action_O);
        menu_2->addSeparator();
        menu_2->addAction(action_I_2);
        menu_2->addAction(action_A);

        retranslateUi(TBOOKMARKS);

        QMetaObject::connectSlotsByName(TBOOKMARKS);
    } // setupUi

    void retranslateUi(QMainWindow *TBOOKMARKS)
    {
        TBOOKMARKS->setWindowTitle(QApplication::translate("TBOOKMARKS", "\344\271\246\347\255\276\347\256\241\347\220\206\345\231\250", Q_NULLPTR));
        action_I->setText(QApplication::translate("TBOOKMARKS", "\345\257\274\345\205\245(&I)", Q_NULLPTR));
        action_E->setText(QApplication::translate("TBOOKMARKS", "\345\257\274\345\207\272(&E)", Q_NULLPTR));
        action_R->setText(QApplication::translate("TBOOKMARKS", "\351\207\215\345\221\275\345\220\215(&R)", Q_NULLPTR));
        action_N->setText(QApplication::translate("TBOOKMARKS", "\346\226\260\345\273\272(&N)", Q_NULLPTR));
        action_D->setText(QApplication::translate("TBOOKMARKS", "\345\210\240\351\231\244(&D)", Q_NULLPTR));
        action_D_2->setText(QApplication::translate("TBOOKMARKS", "\344\270\213\350\275\275(&D)", Q_NULLPTR));
        action_U->setText(QApplication::translate("TBOOKMARKS", "\344\270\212\344\274\240(&U)", Q_NULLPTR));
        action_A->setText(QApplication::translate("TBOOKMARKS", "\346\267\273\345\212\240\345\275\223\345\211\215\347\224\265\345\217\260(&A)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        action_A->setToolTip(QApplication::translate("TBOOKMARKS", "\346\267\273\345\212\240\345\275\223\345\211\215\347\224\265\345\217\260(A)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        action_O->setText(QApplication::translate("TBOOKMARKS", "\346\211\223\345\274\200\347\224\265\345\217\260(&O)", Q_NULLPTR));
        action_S->setText(QApplication::translate("TBOOKMARKS", "\344\277\235\345\255\230(&S)", Q_NULLPTR));
        action_I_2->setText(QApplication::translate("TBOOKMARKS", "\346\267\273\345\212\240\346\226\260\347\224\265\345\217\260(&I)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        action_I_2->setToolTip(QApplication::translate("TBOOKMARKS", "\346\267\273\345\212\240\346\226\260\347\224\265\345\217\260(I)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("TBOOKMARKS", "USB", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("TBOOKMARKS", "LSB", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("TBOOKMARKS", "FM", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("TBOOKMARKS", "SW", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("TBOOKMARKS", "MW", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem5 = listWidget->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("TBOOKMARKS", "LW", Q_NULLPTR));
        listWidget->setSortingEnabled(__sortingEnabled);

        QTableWidgetItem *___qtablewidgetitem = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("TBOOKMARKS", "\351\242\221\347\216\207", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("TBOOKMARKS", "\345\244\207\346\263\250", Q_NULLPTR));
        menu_F->setTitle(QApplication::translate("TBOOKMARKS", "\346\226\207\344\273\266(&F)", Q_NULLPTR));
        menu_1->setTitle(QApplication::translate("TBOOKMARKS", "\345\217\263\351\224\256\350\217\234\345\215\2251", Q_NULLPTR));
        menu_H->setTitle(QApplication::translate("TBOOKMARKS", "\346\224\266\351\237\263\346\234\272(&H)", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("TBOOKMARKS", "\345\217\263\351\224\256\350\217\234\345\215\2252", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TBOOKMARKS: public Ui_TBOOKMARKS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TBOOKMARKS_H
