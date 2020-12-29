/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDial>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_10;
    QLabel *label;
    QLCDNumber *lcdNumber;
    QLabel *label_8;
    QPushButton *pushButton_4;
    QDial *dial;
    QPushButton *pushButton;
    QDial *dial_2;
    QPushButton *pushButton_7;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_12;
    QLabel *label_5;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label_2;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QLabel *label_7;
    QLabel *label_13;
    QPushButton *pushButton_12;
    QLabel *label_14;
    QLabel *label_17;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_18;
    QLabel *label_19;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(624, 239);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(50, 160, 101, 16));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 10, 221, 41));
        label->setStyleSheet(QStringLiteral("font: 9px \"CountryBlueprint\";"));
        label->setAlignment(Qt::AlignCenter);
        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(50, 70, 221, 51));
        lcdNumber->setDigitCount(6);
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 80, 31, 31));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(450, 100, 75, 23));
        dial = new QDial(centralWidget);
        dial->setObjectName(QStringLiteral("dial"));
        dial->setGeometry(QRect(390, 130, 111, 111));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(370, 10, 75, 23));
        dial_2 = new QDial(centralWidget);
        dial_2->setObjectName(QStringLiteral("dial_2"));
        dial_2->setGeometry(QRect(510, 160, 71, 71));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(460, 70, 51, 23));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(450, 40, 75, 23));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(400, 70, 51, 23));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(370, 100, 75, 23));
        pushButton_2->setContextMenuPolicy(Qt::CustomContextMenu);
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(520, 70, 51, 23));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(530, 10, 75, 23));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(370, 40, 75, 23));
        pushButton_9->setCheckable(true);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(310, 70, 20, 86));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QStringLiteral("color: rgb(200, 200, 200);"));

        verticalLayout->addWidget(label_6);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("color: rgb(200, 200, 200);"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("color: rgb(200, 200, 200);"));

        verticalLayout->addWidget(label_4);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setStyleSheet(QStringLiteral("color: rgb(200, 200, 200);"));

        verticalLayout->addWidget(label_12);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QStringLiteral("color: rgb(200, 200, 200);"));

        verticalLayout->addWidget(label_5);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(330, 90, 20, 50));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setStyleSheet(QStringLiteral("color: rgb(200, 200, 200);"));

        verticalLayout_2->addWidget(label_9);

        label_11 = new QLabel(layoutWidget1);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setStyleSheet(QStringLiteral("color: rgb(200, 200, 200);"));

        verticalLayout_2->addWidget(label_11);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("color: rgb(200, 200, 200);"));

        verticalLayout_2->addWidget(label_2);

        pushButton_10 = new QPushButton(centralWidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(530, 40, 75, 23));
        pushButton_11 = new QPushButton(centralWidget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(450, 10, 75, 23));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(370, 140, 54, 12));
        label_7->setAlignment(Qt::AlignCenter);
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(490, 140, 54, 12));
        label_13->setAlignment(Qt::AlignCenter);
        pushButton_12 = new QPushButton(centralWidget);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(530, 100, 75, 23));
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(170, 160, 121, 16));
        label_17 = new QLabel(centralWidget);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(50, 130, 41, 16));
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(280, 80, 31, 20));
        label_15->setStyleSheet(QStringLiteral("color: rgb(200, 200, 200);"));
        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(280, 100, 31, 20));
        label_16->setStyleSheet(QStringLiteral("color: rgb(200, 200, 200);"));
        label_18 = new QLabel(centralWidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(190, 130, 31, 16));
        label_18->setStyleSheet(QStringLiteral("color: rgb(200, 200, 200);"));
        label_19 = new QLabel(centralWidget);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(230, 130, 41, 16));
        label_19->setStyleSheet(QStringLiteral("color: rgb(200, 200, 200);"));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Si473X DiyRadio", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "SNR       dB", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:600; color:#00aa00;\">D</span><span style=\" font-size:20pt; font-weight:600;\">iy </span><span style=\" font-size:20pt; font-weight:600; color:#ff0000;\">R</span><span style=\" font-size:20pt; font-weight:600;\">adio</span></p></body></html>", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Freq", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "_", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Band", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "OK", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "^", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "<", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Seek", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", ">", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "Config", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MainWindow", "Connect", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "SSB", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "FM", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "SW", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "MW", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "LW", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "USB", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "LSB", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "AM", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("MainWindow", "Console", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("MainWindow", "Bandwith", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Tune", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Volume", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("MainWindow", "Bookmarks", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "RSSI      dBuV", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "Vol", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "KHz", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "MHz", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "MONO", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "STEREO", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
