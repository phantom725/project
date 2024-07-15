/********************************************************************************
** Form generated from reading UI file 'securitysystem.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECURITYSYSTEM_H
#define UI_SECURITYSYSTEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecuritySystem
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *locationNameInput;
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout_2;
    QLineEdit *srcLocationInput;
    QLineEdit *destLocationInput;
    QLineEdit *weightInput;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout;
    QPushButton *addEdgeBtn;
    QPushButton *removeEdgeBtn;
    QPushButton *modifyEdgeBtn;
    QTextEdit *statusTextEdit;

    void setupUi(QWidget *SecuritySystem)
    {
        if (SecuritySystem->objectName().isEmpty())
            SecuritySystem->setObjectName(QString::fromUtf8("SecuritySystem"));
        SecuritySystem->resize(626, 402);
        layoutWidget = new QWidget(SecuritySystem);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 601, 381));
        gridLayout_3 = new QGridLayout(layoutWidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        locationNameInput = new QLineEdit(layoutWidget);
        locationNameInput->setObjectName(QString::fromUtf8("locationNameInput"));

        horizontalLayout->addWidget(locationNameInput);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 2);


        horizontalLayout_2->addLayout(gridLayout);


        gridLayout_3->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        srcLocationInput = new QLineEdit(layoutWidget);
        srcLocationInput->setObjectName(QString::fromUtf8("srcLocationInput"));

        gridLayout_2->addWidget(srcLocationInput, 0, 0, 1, 1);

        destLocationInput = new QLineEdit(layoutWidget);
        destLocationInput->setObjectName(QString::fromUtf8("destLocationInput"));

        gridLayout_2->addWidget(destLocationInput, 0, 1, 1, 1);

        weightInput = new QLineEdit(layoutWidget);
        weightInput->setObjectName(QString::fromUtf8("weightInput"));

        gridLayout_2->addWidget(weightInput, 0, 2, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 1, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 1, 2, 1, 1);


        horizontalLayout_3->addLayout(gridLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        addEdgeBtn = new QPushButton(layoutWidget);
        addEdgeBtn->setObjectName(QString::fromUtf8("addEdgeBtn"));

        verticalLayout->addWidget(addEdgeBtn);

        removeEdgeBtn = new QPushButton(layoutWidget);
        removeEdgeBtn->setObjectName(QString::fromUtf8("removeEdgeBtn"));

        verticalLayout->addWidget(removeEdgeBtn);

        modifyEdgeBtn = new QPushButton(layoutWidget);
        modifyEdgeBtn->setObjectName(QString::fromUtf8("modifyEdgeBtn"));

        verticalLayout->addWidget(modifyEdgeBtn);


        horizontalLayout_3->addLayout(verticalLayout);


        gridLayout_3->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        statusTextEdit = new QTextEdit(layoutWidget);
        statusTextEdit->setObjectName(QString::fromUtf8("statusTextEdit"));

        gridLayout_3->addWidget(statusTextEdit, 2, 0, 1, 1);


        retranslateUi(SecuritySystem);

        QMetaObject::connectSlotsByName(SecuritySystem);
    } // setupUi

    void retranslateUi(QWidget *SecuritySystem)
    {
        SecuritySystem->setWindowTitle(QCoreApplication::translate("SecuritySystem", "\351\201\223\350\267\257\344\277\241\346\201\257\345\217\230\346\233\264", nullptr));
        label->setText(QCoreApplication::translate("SecuritySystem", "\344\277\256\346\224\271\345\234\260\347\202\271\345\220\215\347\247\260", nullptr));
        label_2->setText(QCoreApplication::translate("SecuritySystem", "\345\234\260\347\202\2711", nullptr));
        label_3->setText(QCoreApplication::translate("SecuritySystem", "\345\234\260\347\202\2712", nullptr));
        label_4->setText(QCoreApplication::translate("SecuritySystem", "\350\267\235\347\246\273", nullptr));
        addEdgeBtn->setText(QCoreApplication::translate("SecuritySystem", "\345\242\236\345\212\240\351\201\223\350\267\257", nullptr));
        removeEdgeBtn->setText(QCoreApplication::translate("SecuritySystem", "\347\247\273\351\231\244\351\201\223\350\267\257", nullptr));
        modifyEdgeBtn->setText(QCoreApplication::translate("SecuritySystem", "\344\277\256\346\224\271\351\201\223\350\267\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecuritySystem: public Ui_SecuritySystem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECURITYSYSTEM_H
