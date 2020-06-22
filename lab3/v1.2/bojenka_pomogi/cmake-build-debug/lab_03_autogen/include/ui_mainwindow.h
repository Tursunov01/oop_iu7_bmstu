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
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QPushButton *rotateButton;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *rot_xEdit;
    QLineEdit *rot_yEdit;
    QLineEdit *rot_zEdit;
    QGroupBox *groupBox_2;
    QPushButton *scaleButton;
    QLabel *label_2;
    QLineEdit *zoom_kEdit;
    QGroupBox *groupBox_3;
    QPushButton *transferButton;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *dzEdit;
    QLineEdit *dyEdit;
    QLineEdit *dxEdit;
    QPushButton *loadButton;
    QGraphicsView *graphicsView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(749, 494);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 120, 181, 131));
        rotateButton = new QPushButton(groupBox);
        rotateButton->setObjectName(QStringLiteral("rotateButton"));
        rotateButton->setGeometry(QRect(50, 100, 89, 25));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 30, 16, 21));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 50, 16, 21));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 70, 16, 21));
        rot_xEdit = new QLineEdit(groupBox);
        rot_xEdit->setObjectName(QStringLiteral("rot_xEdit"));
        rot_xEdit->setGeometry(QRect(40, 30, 121, 21));
        rot_yEdit = new QLineEdit(groupBox);
        rot_yEdit->setObjectName(QStringLiteral("rot_yEdit"));
        rot_yEdit->setGeometry(QRect(40, 50, 121, 21));
        rot_zEdit = new QLineEdit(groupBox);
        rot_zEdit->setObjectName(QStringLiteral("rot_zEdit"));
        rot_zEdit->setGeometry(QRect(40, 70, 121, 21));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 10, 181, 101));
        scaleButton = new QPushButton(groupBox_2);
        scaleButton->setObjectName(QStringLiteral("scaleButton"));
        scaleButton->setGeometry(QRect(30, 70, 141, 25));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 30, 16, 21));
        zoom_kEdit = new QLineEdit(groupBox_2);
        zoom_kEdit->setObjectName(QStringLiteral("zoom_kEdit"));
        zoom_kEdit->setGeometry(QRect(40, 30, 121, 21));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 260, 181, 131));
        transferButton = new QPushButton(groupBox_3);
        transferButton->setObjectName(QStringLiteral("transferButton"));
        transferButton->setGeometry(QRect(50, 100, 89, 25));
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 30, 21, 21));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 50, 21, 21));
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 70, 21, 21));
        dzEdit = new QLineEdit(groupBox_3);
        dzEdit->setObjectName(QStringLiteral("dzEdit"));
        dzEdit->setGeometry(QRect(40, 70, 121, 21));
        dyEdit = new QLineEdit(groupBox_3);
        dyEdit->setObjectName(QStringLiteral("dyEdit"));
        dyEdit->setGeometry(QRect(40, 50, 121, 21));
        dxEdit = new QLineEdit(groupBox_3);
        dxEdit->setObjectName(QStringLiteral("dxEdit"));
        dxEdit->setGeometry(QRect(40, 30, 121, 21));
        loadButton = new QPushButton(centralWidget);
        loadButton->setObjectName(QStringLiteral("loadButton"));
        loadButton->setGeometry(QRect(20, 410, 181, 25));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(220, 0, 511, 441));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 749, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(zoom_kEdit, scaleButton);
        QWidget::setTabOrder(scaleButton, rot_xEdit);
        QWidget::setTabOrder(rot_xEdit, rot_yEdit);
        QWidget::setTabOrder(rot_yEdit, rot_zEdit);
        QWidget::setTabOrder(rot_zEdit, rotateButton);
        QWidget::setTabOrder(rotateButton, dxEdit);
        QWidget::setTabOrder(dxEdit, dyEdit);
        QWidget::setTabOrder(dyEdit, dzEdit);
        QWidget::setTabOrder(dzEdit, transferButton);
        QWidget::setTabOrder(transferButton, loadButton);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "RotateBox", Q_NULLPTR));
        rotateButton->setText(QApplication::translate("MainWindow", "Rotate", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "x: ", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "y: ", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "z: ", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "ScaleBox", Q_NULLPTR));
        scaleButton->setText(QApplication::translate("MainWindow", "Scale", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "k: ", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "MoveBox", Q_NULLPTR));
        transferButton->setText(QApplication::translate("MainWindow", "Move", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "dx: ", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "dy: ", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "dz: ", Q_NULLPTR));
        loadButton->setText(QApplication::translate("MainWindow", "Load model", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
