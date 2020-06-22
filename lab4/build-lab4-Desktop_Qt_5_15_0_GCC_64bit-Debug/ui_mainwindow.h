/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *view;
    QSpinBox *z_max;
    QSpinBox *x_min;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QDial *dial_x;
    QDial *dial_y;
    QDial *dial_z;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QSpinBox *x_max;
    QLabel *label_8;
    QLabel *label_9;
    QFrame *line;
    QLabel *label_10;
    QSpinBox *z_min;
    QLabel *label_11;
    QPushButton *draw;
    QDoubleSpinBox *dx;
    QDoubleSpinBox *dz;
    QComboBox *funcs;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(809, 605);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        view = new QGraphicsView(centralwidget);
        view->setObjectName(QString::fromUtf8("view"));
        view->setGeometry(QRect(0, 0, 721, 611));
        z_max = new QSpinBox(centralwidget);
        z_max->setObjectName(QString::fromUtf8("z_max"));
        z_max->setGeometry(QRect(760, 250, 48, 24));
        z_max->setMinimum(-601);
        z_max->setMaximum(601);
        z_max->setValue(5);
        x_min = new QSpinBox(centralwidget);
        x_min->setObjectName(QString::fromUtf8("x_min"));
        x_min->setGeometry(QRect(760, 20, 48, 24));
        x_min->setMinimum(-711);
        x_min->setMaximum(711);
        x_min->setValue(-5);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(730, 40, 16, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Courier New"));
        font.setPointSize(18);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(730, 210, 16, 16));
        label_2->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(730, 100, 81, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Courier New"));
        font1.setPointSize(14);
        label_3->setFont(font1);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(730, 280, 71, 16));
        label_4->setFont(font1);
        dial_x = new QDial(centralwidget);
        dial_x->setObjectName(QString::fromUtf8("dial_x"));
        dial_x->setGeometry(QRect(740, 360, 50, 64));
        dial_x->setMinimum(-180);
        dial_x->setMaximum(180);
        dial_x->setValue(20);
        dial_x->setWrapping(true);
        dial_y = new QDial(centralwidget);
        dial_y->setObjectName(QString::fromUtf8("dial_y"));
        dial_y->setGeometry(QRect(740, 440, 50, 64));
        dial_y->setMinimum(-180);
        dial_y->setMaximum(180);
        dial_y->setValue(-10);
        dial_y->setWrapping(true);
        dial_z = new QDial(centralwidget);
        dial_z->setObjectName(QString::fromUtf8("dial_z"));
        dial_z->setGeometry(QRect(740, 520, 50, 64));
        dial_z->setMinimum(-45);
        dial_z->setMaximum(45);
        dial_z->setValue(0);
        dial_z->setWrapping(true);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(760, 340, 16, 16));
        label_5->setFont(font);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(760, 420, 16, 16));
        label_6->setFont(font);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(760, 500, 16, 16));
        label_7->setFont(font);
        x_max = new QSpinBox(centralwidget);
        x_max->setObjectName(QString::fromUtf8("x_max"));
        x_max->setGeometry(QRect(760, 70, 48, 24));
        x_max->setMinimum(-711);
        x_max->setMaximum(711);
        x_max->setValue(5);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(760, 50, 41, 16));
        label_8->setFont(font);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(760, 0, 31, 16));
        label_9->setFont(font);
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(730, 150, 71, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(760, 230, 41, 16));
        label_10->setFont(font);
        z_min = new QSpinBox(centralwidget);
        z_min->setObjectName(QString::fromUtf8("z_min"));
        z_min->setGeometry(QRect(760, 190, 48, 24));
        z_min->setMinimum(-601);
        z_min->setMaximum(601);
        z_min->setValue(-5);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(760, 170, 31, 16));
        label_11->setFont(font);
        draw = new QPushButton(centralwidget);
        draw->setObjectName(QString::fromUtf8("draw"));
        draw->setGeometry(QRect(600, 560, 113, 32));
        draw->setFont(font1);
        dx = new QDoubleSpinBox(centralwidget);
        dx->setObjectName(QString::fromUtf8("dx"));
        dx->setGeometry(QRect(730, 120, 68, 24));
        dx->setSingleStep(0.100000000000000);
        dx->setValue(0.100000000000000);
        dz = new QDoubleSpinBox(centralwidget);
        dz->setObjectName(QString::fromUtf8("dz"));
        dz->setGeometry(QRect(730, 300, 68, 24));
        dz->setSingleStep(0.100000000000000);
        dz->setValue(0.100000000000000);
        funcs = new QComboBox(centralwidget);
        funcs->setObjectName(QString::fromUtf8("funcs"));
        funcs->setGeometry(QRect(380, 560, 221, 31));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\220\320\273\320\263\320\276\321\200\320\270\321\202\320\274 \320\277\320\273\320\260\320\262\320\260\321\216\321\211\320\265\320\263\320\276 \320\263\320\276\321\200\320\270\320\267\320\276\320\275\321\202\320\260", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\250\320\260\320\263 \320\277\320\276 \320\245", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\250\320\260\320\263 \320\277\320\276 Z", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "MAX", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "MIN", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "MAX", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "MIN", nullptr));
        draw->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\276\320\261\321\200\320\260\320\267\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
