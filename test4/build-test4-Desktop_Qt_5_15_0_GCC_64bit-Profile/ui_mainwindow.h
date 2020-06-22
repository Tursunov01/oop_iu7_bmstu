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
    QLCDNumber *table;
    QPushButton *b4;
    QPushButton *b1;
    QPushButton *b2;
    QPushButton *b3;
    QPushButton *b5;
    QLabel *label;
    QLabel *label_2;
    QLabel *stage_doors;
    QLabel *stage_lift;
    QFrame *line;
    QLabel *label_3;
    QTextEdit *text;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(559, 398);
        MainWindow->setAcceptDrops(false);
        MainWindow->setAutoFillBackground(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        floor_group = new QGroupBox(centralWidget);
        floor_group->setObjectName(QString::fromUtf8("floor_group"));
        floor_group->setGeometry(QRect(0, 10, 201, 291));
        QFont font;
        font.setFamily(QString::fromUtf8("Courier New"));
        font.setPointSize(14);
        floor_group->setFont(font);
        floor_group->setCursor(QCursor(Qt::ArrowCursor));
        floor5 = new QPushButton(floor_group);
        floor5->setObjectName(QString::fromUtf8("floor5"));
        floor5->setGeometry(QRect(40, 230, 101, 24));
        floor5->setFont(font);
        floor5->setCursor(QCursor(Qt::OpenHandCursor));
        floor4 = new QPushButton(floor_group);
        floor4->setObjectName(QString::fromUtf8("floor4"));
        floor4->setGeometry(QRect(40, 180, 101, 24));
        floor4->setFont(font);
        floor4->setCursor(QCursor(Qt::OpenHandCursor));
        floor1 = new QPushButton(floor_group);
        floor1->setObjectName(QString::fromUtf8("floor1"));
        floor1->setGeometry(QRect(40, 30, 101, 24));
        floor1->setFont(font);
        floor1->setCursor(QCursor(Qt::OpenHandCursor));
        floor2 = new QPushButton(floor_group);
        floor2->setObjectName(QString::fromUtf8("floor2"));
        floor2->setGeometry(QRect(40, 80, 101, 24));
        floor2->setFont(font);
        floor2->setCursor(QCursor(Qt::OpenHandCursor));
        floor3 = new QPushButton(floor_group);
        floor3->setObjectName(QString::fromUtf8("floor3"));
        floor3->setGeometry(QRect(40, 130, 101, 24));
        floor3->setFont(font);
        floor3->setCursor(QCursor(Qt::OpenHandCursor));
        lif_group = new QGroupBox(centralWidget);
        lif_group->setObjectName(QString::fromUtf8("lif_group"));
        lif_group->setGeometry(QRect(240, 10, 311, 291));
        lif_group->setFont(font);
        table = new QLCDNumber(lif_group);
        table->setObjectName(QString::fromUtf8("table"));
        table->setGeometry(QRect(150, 30, 61, 21));
        table->setLineWidth(1);
        table->setProperty("value", QVariant(1.000000000000000));
        b4 = new QPushButton(lif_group);
        b4->setObjectName(QString::fromUtf8("b4"));
        b4->setGeometry(QRect(40, 180, 31, 24));
        b4->setFont(font);
        b4->setCursor(QCursor(Qt::OpenHandCursor));
        b1 = new QPushButton(lif_group);
        b1->setObjectName(QString::fromUtf8("b1"));
        b1->setGeometry(QRect(40, 30, 31, 24));
        b1->setFont(font);
        b1->setCursor(QCursor(Qt::OpenHandCursor));
        b2 = new QPushButton(lif_group);
        b2->setObjectName(QString::fromUtf8("b2"));
        b2->setGeometry(QRect(40, 80, 31, 24));
        b2->setFont(font);
        b2->setCursor(QCursor(Qt::OpenHandCursor));
        b3 = new QPushButton(lif_group);
        b3->setObjectName(QString::fromUtf8("b3"));
        b3->setGeometry(QRect(40, 130, 31, 24));
        b3->setFont(font);
        b3->setCursor(QCursor(Qt::OpenHandCursor));
        b5 = new QPushButton(lif_group);
        b5->setObjectName(QString::fromUtf8("b5"));
        b5->setGeometry(QRect(40, 230, 31, 24));
        b5->setFont(font);
        b5->setCursor(QCursor(Qt::OpenHandCursor));
        label = new QLabel(lif_group);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 60, 201, 21));
        label->setFont(font);
        label_2 = new QLabel(lif_group);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 120, 131, 16));
        label_2->setFont(font);
        stage_doors = new QLabel(lif_group);
        stage_doors->setObjectName(QString::fromUtf8("stage_doors"));
        stage_doors->setGeometry(QRect(100, 90, 191, 16));
        stage_doors->setFont(font);
        stage_lift = new QLabel(lif_group);
        stage_lift->setObjectName(QString::fromUtf8("stage_lift"));
        stage_lift->setGeometry(QRect(100, 150, 201, 16));
        stage_lift->setFont(font);
        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(210, 80, 16, 161));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 300, 60, 16));
        label_3->setFont(font);
        text = new QTextEdit(centralWidget);
        text->setObjectName(QString::fromUtf8("text"));
        text->setGeometry(QRect(10, 320, 541, 70));
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
        floor_group->setTitle(QCoreApplication::translate("MainWindow", "\320\232\320\275\320\276\320\277\320\272\320\270 \320\262\321\213\320\267\320\276\320\262\320\260 \320\275\320\260 \321\215\321\202\320\260\320\266\320\260\321\205", nullptr));
        floor5->setText(QCoreApplication::translate("MainWindow", "5 \321\215\321\202\320\260\320\266 ", nullptr));
        floor4->setText(QCoreApplication::translate("MainWindow", "4 \321\215\321\202\320\260\320\266 ", nullptr));
        floor1->setText(QCoreApplication::translate("MainWindow", "1 \321\215\321\202\320\260\320\266 ", nullptr));
        floor2->setText(QCoreApplication::translate("MainWindow", "2 \321\215\321\202\320\260\320\266 ", nullptr));
        floor3->setText(QCoreApplication::translate("MainWindow", "3 \321\215\321\202\320\260\320\266 ", nullptr));
        lif_group->setTitle(QCoreApplication::translate("MainWindow", "\320\233\320\270\321\204\321\202 ", nullptr));
        b4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        b1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        b2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        b3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        b5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \320\264\320\262\320\265\321\200\320\265\320\271 \320\273\320\270\321\204\321\202\320\260:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \320\273\320\270\321\204\321\202\320\260:", nullptr));
        stage_doors->setText(QCoreApplication::translate("MainWindow", "none", nullptr));
        stage_lift->setText(QCoreApplication::translate("MainWindow", "none", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\233\320\270\321\201\321\202\320\270\320\275\320\263", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
