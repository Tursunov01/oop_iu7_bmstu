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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *floor_group;
    QPushButton *floor5;
    QPushButton *floor4;
    QPushButton *floor1;
    QPushButton *floor2;
    QPushButton *floor3;
    QGroupBox *lif_group;
    QPushButton *b4;
    QPushButton *b1;
    QPushButton *b2;
    QPushButton *b3;
    QPushButton *b5;
    QLabel *label;
    QLabel *stage_doors;
    QLabel *stage_lift;
    QFrame *line;
    QTextEdit *text;
    QLCDNumber *table;
    QLabel *label_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(633, 373);
        MainWindow->setAcceptDrops(false);
        MainWindow->setAutoFillBackground(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        floor_group = new QGroupBox(centralWidget);
        floor_group->setObjectName(QString::fromUtf8("floor_group"));
        floor_group->setGeometry(QRect(20, 50, 81, 241));
        QFont font;
        font.setFamily(QString::fromUtf8("Courier New"));
        font.setPointSize(14);
        floor_group->setFont(font);
        floor_group->setCursor(QCursor(Qt::ArrowCursor));
        floor5 = new QPushButton(floor_group);
        floor5->setObjectName(QString::fromUtf8("floor5"));
        floor5->setGeometry(QRect(20, 200, 41, 24));
        floor5->setFont(font);
        floor5->setCursor(QCursor(Qt::OpenHandCursor));
        floor4 = new QPushButton(floor_group);
        floor4->setObjectName(QString::fromUtf8("floor4"));
        floor4->setGeometry(QRect(20, 160, 41, 24));
        floor4->setFont(font);
        floor4->setCursor(QCursor(Qt::OpenHandCursor));
        floor1 = new QPushButton(floor_group);
        floor1->setObjectName(QString::fromUtf8("floor1"));
        floor1->setGeometry(QRect(20, 40, 41, 24));
        floor1->setFont(font);
        floor1->setCursor(QCursor(Qt::OpenHandCursor));
        floor2 = new QPushButton(floor_group);
        floor2->setObjectName(QString::fromUtf8("floor2"));
        floor2->setGeometry(QRect(20, 80, 41, 24));
        floor2->setFont(font);
        floor2->setCursor(QCursor(Qt::OpenHandCursor));
        floor3 = new QPushButton(floor_group);
        floor3->setObjectName(QString::fromUtf8("floor3"));
        floor3->setGeometry(QRect(20, 120, 41, 24));
        floor3->setFont(font);
        floor3->setCursor(QCursor(Qt::OpenHandCursor));
        lif_group = new QGroupBox(centralWidget);
        lif_group->setObjectName(QString::fromUtf8("lif_group"));
        lif_group->setGeometry(QRect(140, 50, 81, 241));
        lif_group->setFont(font);
        b4 = new QPushButton(lif_group);
        b4->setObjectName(QString::fromUtf8("b4"));
        b4->setGeometry(QRect(20, 160, 41, 24));
        b4->setFont(font);
        b4->setCursor(QCursor(Qt::OpenHandCursor));
        b1 = new QPushButton(lif_group);
        b1->setObjectName(QString::fromUtf8("b1"));
        b1->setGeometry(QRect(20, 40, 41, 24));
        b1->setFont(font);
        b1->setCursor(QCursor(Qt::OpenHandCursor));
        b2 = new QPushButton(lif_group);
        b2->setObjectName(QString::fromUtf8("b2"));
        b2->setGeometry(QRect(20, 80, 41, 24));
        b2->setFont(font);
        b2->setCursor(QCursor(Qt::OpenHandCursor));
        b3 = new QPushButton(lif_group);
        b3->setObjectName(QString::fromUtf8("b3"));
        b3->setGeometry(QRect(20, 120, 41, 24));
        b3->setFont(font);
        b3->setCursor(QCursor(Qt::OpenHandCursor));
        b5 = new QPushButton(lif_group);
        b5->setObjectName(QString::fromUtf8("b5"));
        b5->setGeometry(QRect(20, 200, 41, 24));
        b5->setFont(font);
        b5->setCursor(QCursor(Qt::OpenHandCursor));
        label = new QLabel(lif_group);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 60, 16, 21));
        label->setFont(font);
        stage_doors = new QLabel(lif_group);
        stage_doors->setObjectName(QString::fromUtf8("stage_doors"));
        stage_doors->setGeometry(QRect(100, 90, 16, 16));
        stage_doors->setFont(font);
        stage_lift = new QLabel(lif_group);
        stage_lift->setObjectName(QString::fromUtf8("stage_lift"));
        stage_lift->setGeometry(QRect(100, 150, 16, 16));
        stage_lift->setFont(font);
        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(110, 60, 20, 231));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        text = new QTextEdit(centralWidget);
        text->setObjectName(QString::fromUtf8("text"));
        text->setGeometry(QRect(240, 70, 381, 221));
        table = new QLCDNumber(centralWidget);
        table->setObjectName(QString::fromUtf8("table"));
        table->setGeometry(QRect(60, 310, 111, 41));
        table->setLineWidth(1);
        table->setProperty("value", QVariant(1.000000000000000));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(300, 130, 16, 16));
        label_2->setFont(font);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\201\321\202\320\276 \320\273\320\270\321\204\321\202", nullptr));
#if QT_CONFIG(whatsthis)
        MainWindow->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        floor_group->setTitle(QCoreApplication::translate("MainWindow", "\320\255\321\202\320\260\320\266", nullptr));
        floor5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        floor4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        floor1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        floor2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        floor3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        lif_group->setTitle(QCoreApplication::translate("MainWindow", "\320\233\320\270\321\204\321\202 ", nullptr));
        b4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        b1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        b2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        b3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        b5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        label->setText(QString());
        stage_doors->setText(QString());
        stage_lift->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
