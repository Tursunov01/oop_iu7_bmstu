/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *line_dx;
    QLabel *label;
    QFrame *line;
    QLineEdit *line_dz;
    QLineEdit *line_dy;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QFrame *line_2;
    QPushButton *pushButton_2;
    QFrame *line_3;
    QLabel *label_6;
    QLineEdit *line_ky;
    QLineEdit *line_kz;
    QPushButton *pushButton_3;
    QLabel *label_7;
    QFrame *line_4;
    QLabel *label_8;
    QLineEdit *line_kx;
    QFrame *line_5;
    QGraphicsView *graphicsView;
    QPushButton *pushButton_4;
    QLabel *label_5;
    QLineEdit *line_oy;
    QLineEdit *line_oz;
    QLabel *label_9;
    QLineEdit *line_ox;
    QLabel *label_10;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(743, 389);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        line_dx = new QLineEdit(centralwidget);
        line_dx->setObjectName(QStringLiteral("line_dx"));
        line_dx->setGeometry(QRect(20, 68, 41, 16));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 51, 21));
        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(20, 30, 151, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_dz = new QLineEdit(centralwidget);
        line_dz->setObjectName(QStringLiteral("line_dz"));
        line_dz->setGeometry(QRect(120, 68, 41, 16));
        line_dy = new QLineEdit(centralwidget);
        line_dy->setObjectName(QStringLiteral("line_dy"));
        line_dy->setGeometry(QRect(70, 68, 41, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 40, 21, 21));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 40, 21, 21));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(130, 40, 21, 21));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(45, 100, 89, 25));
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(20, 130, 151, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(40, 190, 89, 25));
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(20, 220, 151, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(80, 242, 21, 21));
        line_ky = new QLineEdit(centralwidget);
        line_ky->setObjectName(QStringLiteral("line_ky"));
        line_ky->setGeometry(QRect(70, 270, 41, 16));
        line_kz = new QLineEdit(centralwidget);
        line_kz->setObjectName(QStringLiteral("line_kz"));
        line_kz->setGeometry(QRect(120, 270, 41, 16));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(45, 302, 89, 25));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(130, 242, 21, 21));
        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(20, 332, 151, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 242, 21, 21));
        line_kx = new QLineEdit(centralwidget);
        line_kx->setObjectName(QStringLiteral("line_kx"));
        line_kx->setGeometry(QRect(20, 270, 41, 16));
        line_5 = new QFrame(centralwidget);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(170, 40, 20, 301));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(190, 30, 540, 300));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(45, 350, 89, 25));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(80, 140, 21, 21));
        line_oy = new QLineEdit(centralwidget);
        line_oy->setObjectName(QStringLiteral("line_oy"));
        line_oy->setGeometry(QRect(70, 168, 41, 16));
        line_oz = new QLineEdit(centralwidget);
        line_oz->setObjectName(QStringLiteral("line_oz"));
        line_oz->setGeometry(QRect(120, 168, 41, 16));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(130, 140, 21, 21));
        line_ox = new QLineEdit(centralwidget);
        line_ox->setObjectName(QStringLiteral("line_ox"));
        line_ox->setGeometry(QRect(20, 168, 41, 16));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(30, 140, 21, 21));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "MENU", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "dx", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "dy", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "dz", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Move", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Turn", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "ky", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "Zoom", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "kz", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "kx", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "Download", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "oy", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "oz", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "ox", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
