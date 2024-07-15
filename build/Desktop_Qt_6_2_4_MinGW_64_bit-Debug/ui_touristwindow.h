/********************************************************************************
** Form generated from reading UI file 'touristwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOURISTWINDOW_H
#define UI_TOURISTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TouristWindow
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TouristWindow)
    {
        if (TouristWindow->objectName().isEmpty())
            TouristWindow->setObjectName(QString::fromUtf8("TouristWindow"));
        TouristWindow->resize(600, 600);
        centralwidget = new QWidget(TouristWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        TouristWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TouristWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 600, 24));
        TouristWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(TouristWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        TouristWindow->setStatusBar(statusbar);

        retranslateUi(TouristWindow);

        QMetaObject::connectSlotsByName(TouristWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TouristWindow)
    {
        TouristWindow->setWindowTitle(QString());
#if QT_CONFIG(accessibility)
        centralwidget->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
    } // retranslateUi

};

namespace Ui {
    class TouristWindow: public Ui_TouristWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOURISTWINDOW_H
