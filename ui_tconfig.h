/********************************************************************************
** Form generated from reading UI file 'tconfig.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCONFIG_H
#define UI_TCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_TCONFIG
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox;
    QLineEdit *lineEdit_2;
    QCheckBox *checkBox;

    void setupUi(QDialog *TCONFIG)
    {
        if (TCONFIG->objectName().isEmpty())
            TCONFIG->setObjectName(QStringLiteral("TCONFIG"));
        TCONFIG->resize(270, 153);
        gridLayout = new QGridLayout(TCONFIG);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        pushButton = new QPushButton(TCONFIG);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);

        groupBox = new QGroupBox(TCONFIG);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout_2->addWidget(comboBox, 0, 1, 1, 1);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout_2->addWidget(lineEdit_2, 1, 1, 1, 1);

        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        gridLayout_2->addWidget(checkBox, 2, 0, 1, 2);


        gridLayout->addWidget(groupBox, 0, 0, 1, 2);


        retranslateUi(TCONFIG);

        QMetaObject::connectSlotsByName(TCONFIG);
    } // setupUi

    void retranslateUi(QDialog *TCONFIG)
    {
        TCONFIG->setWindowTitle(QApplication::translate("TCONFIG", "\350\256\276\347\275\256", Q_NULLPTR));
        pushButton->setText(QApplication::translate("TCONFIG", "\344\277\235\345\255\230", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("TCONFIG", "\350\277\236\346\216\245\350\256\276\347\275\256", Q_NULLPTR));
        label->setText(QApplication::translate("TCONFIG", "\344\270\262\345\217\243\345\220\215\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("TCONFIG", "\346\263\242\347\211\271\347\216\207\357\274\232", Q_NULLPTR));
        lineEdit_2->setText(QApplication::translate("TCONFIG", "9600", Q_NULLPTR));
        checkBox->setText(QApplication::translate("TCONFIG", "\345\220\257\345\212\250\345\220\216\350\207\252\345\212\250\350\277\236\346\216\245", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TCONFIG: public Ui_TCONFIG {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCONFIG_H
