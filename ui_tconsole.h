/********************************************************************************
** Form generated from reading UI file 'tconsole.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCONSOLE_H
#define UI_TCONSOLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TCONSOLE
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPlainTextEdit *plainTextEdit;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox;
    QPushButton *pushButton_2;
    QMenuBar *menubar;

    void setupUi(QMainWindow *TCONSOLE)
    {
        if (TCONSOLE->objectName().isEmpty())
            TCONSOLE->setObjectName(QStringLiteral("TCONSOLE"));
        TCONSOLE->resize(528, 354);
        centralwidget = new QWidget(TCONSOLE);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 0, 2, 1, 1);

        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setReadOnly(true);

        gridLayout->addWidget(plainTextEdit, 1, 0, 1, 3);

        frame = new QFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        checkBox_2 = new QCheckBox(frame);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setEnabled(false);
        checkBox_2->setChecked(true);
        checkBox_2->setTristate(false);

        horizontalLayout->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(frame);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setChecked(true);

        horizontalLayout->addWidget(checkBox_3);

        checkBox = new QCheckBox(frame);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        horizontalLayout->addWidget(checkBox);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        gridLayout->addWidget(frame, 2, 0, 1, 3);

        TCONSOLE->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TCONSOLE);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 528, 23));
        TCONSOLE->setMenuBar(menubar);

        retranslateUi(TCONSOLE);

        pushButton->setDefault(true);


        QMetaObject::connectSlotsByName(TCONSOLE);
    } // setupUi

    void retranslateUi(QMainWindow *TCONSOLE)
    {
        TCONSOLE->setWindowTitle(QApplication::translate("TCONSOLE", "\344\270\262\345\217\243\346\216\247\345\210\266\345\217\260", Q_NULLPTR));
        label->setText(QApplication::translate("TCONSOLE", "\350\276\223\345\205\245\345\221\275\344\273\244\357\274\232", Q_NULLPTR));
        pushButton->setText(QApplication::translate("TCONSOLE", "\345\217\221\351\200\201(&S)", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("TCONSOLE", "\350\207\252\345\212\250\346\273\232\345\212\250", Q_NULLPTR));
        checkBox_3->setText(QApplication::translate("TCONSOLE", "\345\217\221\351\200\201\345\220\216\346\270\205\347\251\272\345\221\275\344\273\244", Q_NULLPTR));
        checkBox->setText(QApplication::translate("TCONSOLE", "\346\230\276\347\244\272\346\227\266\351\227\264\346\210\263", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("TCONSOLE", "\346\270\205\347\251\272\350\276\223\345\207\272(&C)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TCONSOLE: public Ui_TCONSOLE {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCONSOLE_H
