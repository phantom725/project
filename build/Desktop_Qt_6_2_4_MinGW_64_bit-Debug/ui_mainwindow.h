/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionexit;
    QAction *actiontourists;
    QAction *actionsecurity;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QLabel *label;
    QPushButton *enterTourist;
    QPushButton *enterSecurity;
    QWidget *page_4;
    QLabel *label_5;
    QPushButton *changeMap;
    QPushButton *exitSecurity;
    QWidget *page_5;
    QPushButton *exitTourist;
    QLabel *routegraph;
    QPushButton *searchButton;
    QPushButton *gongzhujiao;
    QPushButton *songyuancaochang;
    QPushButton *fengyuan;
    QPushButton *jiuyiercaochang;
    QPushButton *luojiaguangchang;
    QPushButton *yingyuan;
    QPushButton *guiyuancaochang;
    QPushButton *jisuanjixueyuan;
    QPushButton *luojiashan;
    QPushButton *leijunkejilou;
    QPushButton *luojiamen;
    QPushButton *xintu;
    QPushButton *xinghutiyuchang;
    QPushButton *xincao;
    QPushButton *wanganxiaocaochang;
    QPushButton *guoruanc3;
    QPushButton *shishe;
    QPushButton *xinxixuebuyijiao;
    QPushButton *luoyumen;
    QPushButton *nanermen;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1132, 770);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/Image/whu.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionexit = new QAction(MainWindow);
        actionexit->setObjectName(QString::fromUtf8("actionexit"));
        actiontourists = new QAction(MainWindow);
        actiontourists->setObjectName(QString::fromUtf8("actiontourists"));
        actionsecurity = new QAction(MainWindow);
        actionsecurity->setObjectName(QString::fromUtf8("actionsecurity"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        stackedWidget->setMinimumSize(QSize(0, 549));
        stackedWidget->setCursor(QCursor(Qt::ArrowCursor));
        stackedWidget->setFocusPolicy(Qt::NoFocus);
        stackedWidget->setContextMenuPolicy(Qt::PreventContextMenu);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        label = new QLabel(page_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(480, 200, 200, 100));
        QFont font;
        font.setPointSize(22);
        label->setFont(font);
        enterTourist = new QPushButton(page_3);
        enterTourist->setObjectName(QString::fromUtf8("enterTourist"));
        enterTourist->setGeometry(QRect(332, 368, 200, 40));
        enterSecurity = new QPushButton(page_3);
        enterSecurity->setObjectName(QString::fromUtf8("enterSecurity"));
        enterSecurity->setGeometry(QRect(600, 368, 200, 40));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        label_5 = new QLabel(page_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(100, 0, 469, 700));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/imgs/Image/routegraph.jpg")));
        label_5->setScaledContents(true);
        changeMap = new QPushButton(page_4);
        changeMap->setObjectName(QString::fromUtf8("changeMap"));
        changeMap->setGeometry(QRect(700, 168, 200, 40));
        exitSecurity = new QPushButton(page_4);
        exitSecurity->setObjectName(QString::fromUtf8("exitSecurity"));
        exitSecurity->setGeometry(QRect(700, 432, 200, 40));
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        exitTourist = new QPushButton(page_5);
        exitTourist->setObjectName(QString::fromUtf8("exitTourist"));
        exitTourist->setGeometry(QRect(700, 432, 200, 40));
        routegraph = new QLabel(page_5);
        routegraph->setObjectName(QString::fromUtf8("routegraph"));
        routegraph->setGeometry(QRect(100, 0, 469, 700));
        QFont font1;
        font1.setPointSize(6);
        routegraph->setFont(font1);
        routegraph->setCursor(QCursor(Qt::ArrowCursor));
        routegraph->setPixmap(QPixmap(QString::fromUtf8(":/imgs/Image/routegraph.jpg")));
        routegraph->setScaledContents(true);
        searchButton = new QPushButton(page_5);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setGeometry(QRect(700, 168, 200, 40));
        gongzhujiao = new QPushButton(page_5);
        gongzhujiao->setObjectName(QString::fromUtf8("gongzhujiao"));
        gongzhujiao->setGeometry(QRect(280, 10, 15, 15));
        gongzhujiao->setFont(font1);
        gongzhujiao->setCursor(QCursor(Qt::PointingHandCursor));
        gongzhujiao->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        songyuancaochang = new QPushButton(page_5);
        songyuancaochang->setObjectName(QString::fromUtf8("songyuancaochang"));
        songyuancaochang->setGeometry(QRect(460, 50, 15, 15));
        songyuancaochang->setFont(font1);
        songyuancaochang->setCursor(QCursor(Qt::PointingHandCursor));
        songyuancaochang->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        fengyuan = new QPushButton(page_5);
        fengyuan->setObjectName(QString::fromUtf8("fengyuan"));
        fengyuan->setGeometry(QRect(540, 160, 15, 15));
        fengyuan->setFont(font1);
        fengyuan->setCursor(QCursor(Qt::PointingHandCursor));
        fengyuan->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        jiuyiercaochang = new QPushButton(page_5);
        jiuyiercaochang->setObjectName(QString::fromUtf8("jiuyiercaochang"));
        jiuyiercaochang->setGeometry(QRect(390, 170, 15, 15));
        jiuyiercaochang->setFont(font1);
        jiuyiercaochang->setCursor(QCursor(Qt::PointingHandCursor));
        jiuyiercaochang->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        luojiaguangchang = new QPushButton(page_5);
        luojiaguangchang->setObjectName(QString::fromUtf8("luojiaguangchang"));
        luojiaguangchang->setGeometry(QRect(270, 300, 15, 15));
        luojiaguangchang->setFont(font1);
        luojiaguangchang->setCursor(QCursor(Qt::PointingHandCursor));
        luojiaguangchang->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        yingyuan = new QPushButton(page_5);
        yingyuan->setObjectName(QString::fromUtf8("yingyuan"));
        yingyuan->setGeometry(QRect(280, 90, 15, 15));
        yingyuan->setFont(font1);
        yingyuan->setCursor(QCursor(Qt::PointingHandCursor));
        yingyuan->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        guiyuancaochang = new QPushButton(page_5);
        guiyuancaochang->setObjectName(QString::fromUtf8("guiyuancaochang"));
        guiyuancaochang->setGeometry(QRect(230, 160, 15, 15));
        guiyuancaochang->setFont(font1);
        guiyuancaochang->setCursor(QCursor(Qt::PointingHandCursor));
        guiyuancaochang->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        jisuanjixueyuan = new QPushButton(page_5);
        jisuanjixueyuan->setObjectName(QString::fromUtf8("jisuanjixueyuan"));
        jisuanjixueyuan->setGeometry(QRect(150, 150, 15, 15));
        jisuanjixueyuan->setFont(font1);
        jisuanjixueyuan->setCursor(QCursor(Qt::PointingHandCursor));
        jisuanjixueyuan->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        luojiashan = new QPushButton(page_5);
        luojiashan->setObjectName(QString::fromUtf8("luojiashan"));
        luojiashan->setGeometry(QRect(470, 300, 20, 20));
        luojiashan->setFont(font1);
        luojiashan->setCursor(QCursor(Qt::PointingHandCursor));
        luojiashan->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        leijunkejilou = new QPushButton(page_5);
        leijunkejilou->setObjectName(QString::fromUtf8("leijunkejilou"));
        leijunkejilou->setGeometry(QRect(150, 250, 15, 15));
        leijunkejilou->setFont(font1);
        leijunkejilou->setCursor(QCursor(Qt::PointingHandCursor));
        leijunkejilou->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        luojiamen = new QPushButton(page_5);
        luojiamen->setObjectName(QString::fromUtf8("luojiamen"));
        luojiamen->setGeometry(QRect(160, 340, 15, 15));
        luojiamen->setFont(font1);
        luojiamen->setCursor(QCursor(Qt::PointingHandCursor));
        luojiamen->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        xintu = new QPushButton(page_5);
        xintu->setObjectName(QString::fromUtf8("xintu"));
        xintu->setGeometry(QRect(340, 420, 15, 15));
        xintu->setFont(font1);
        xintu->setCursor(QCursor(Qt::PointingHandCursor));
        xintu->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        xinghutiyuchang = new QPushButton(page_5);
        xinghutiyuchang->setObjectName(QString::fromUtf8("xinghutiyuchang"));
        xinghutiyuchang->setGeometry(QRect(230, 420, 15, 15));
        xinghutiyuchang->setFont(font1);
        xinghutiyuchang->setCursor(QCursor(Qt::PointingHandCursor));
        xinghutiyuchang->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        xincao = new QPushButton(page_5);
        xincao->setObjectName(QString::fromUtf8("xincao"));
        xincao->setGeometry(QRect(340, 520, 15, 15));
        xincao->setFont(font1);
        xincao->setCursor(QCursor(Qt::PointingHandCursor));
        xincao->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        wanganxiaocaochang = new QPushButton(page_5);
        wanganxiaocaochang->setObjectName(QString::fromUtf8("wanganxiaocaochang"));
        wanganxiaocaochang->setGeometry(QRect(130, 500, 15, 15));
        wanganxiaocaochang->setFont(font1);
        wanganxiaocaochang->setCursor(QCursor(Qt::PointingHandCursor));
        wanganxiaocaochang->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        guoruanc3 = new QPushButton(page_5);
        guoruanc3->setObjectName(QString::fromUtf8("guoruanc3"));
        guoruanc3->setGeometry(QRect(130, 580, 15, 15));
        guoruanc3->setFont(font1);
        guoruanc3->setCursor(QCursor(Qt::PointingHandCursor));
        guoruanc3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        shishe = new QPushButton(page_5);
        shishe->setObjectName(QString::fromUtf8("shishe"));
        shishe->setGeometry(QRect(230, 580, 15, 15));
        shishe->setFont(font1);
        shishe->setCursor(QCursor(Qt::PointingHandCursor));
        shishe->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        xinxixuebuyijiao = new QPushButton(page_5);
        xinxixuebuyijiao->setObjectName(QString::fromUtf8("xinxixuebuyijiao"));
        xinxixuebuyijiao->setGeometry(QRect(340, 580, 15, 15));
        xinxixuebuyijiao->setFont(font1);
        xinxixuebuyijiao->setCursor(QCursor(Qt::PointingHandCursor));
        xinxixuebuyijiao->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        luoyumen = new QPushButton(page_5);
        luoyumen->setObjectName(QString::fromUtf8("luoyumen"));
        luoyumen->setGeometry(QRect(340, 660, 15, 15));
        luoyumen->setFont(font1);
        luoyumen->setCursor(QCursor(Qt::PointingHandCursor));
        luoyumen->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        nanermen = new QPushButton(page_5);
        nanermen->setObjectName(QString::fromUtf8("nanermen"));
        nanermen->setGeometry(QRect(230, 660, 15, 15));
        nanermen->setFont(font1);
        nanermen->setCursor(QCursor(Qt::PointingHandCursor));
        nanermen->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        stackedWidget->addWidget(page_5);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1132, 24));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(actionexit);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\346\240\241\345\233\255\345\257\274\346\270\270\347\263\273\347\273\237", nullptr));
        actionexit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        actiontourists->setText(QCoreApplication::translate("MainWindow", "\346\270\270\345\256\242", nullptr));
        actionsecurity->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\215\253\351\203\250", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\257\274\346\270\270\347\263\273\347\273\237", nullptr));
        enterTourist->setText(QCoreApplication::translate("MainWindow", "\350\277\233\345\205\245\346\270\270\345\256\242\347\263\273\347\273\237", nullptr));
        enterSecurity->setText(QCoreApplication::translate("MainWindow", "\350\277\233\345\205\245\344\277\235\345\215\253\351\203\250\347\263\273\347\273\237", nullptr));
        label_5->setText(QString());
        changeMap->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271\345\234\260\345\233\276", nullptr));
        exitSecurity->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\344\277\235\345\215\253\351\203\250\347\263\273\347\273\237", nullptr));
        exitTourist->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\346\270\270\345\256\242\347\263\273\347\273\237", nullptr));
        routegraph->setText(QString());
        searchButton->setText(QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242\350\267\257\345\276\204", nullptr));
        gongzhujiao->setText(QCoreApplication::translate("MainWindow", "go", nullptr));
        songyuancaochang->setText(QCoreApplication::translate("MainWindow", "go", nullptr));
        fengyuan->setText(QCoreApplication::translate("MainWindow", "go", nullptr));
        jiuyiercaochang->setText(QCoreApplication::translate("MainWindow", "go", nullptr));
        luojiaguangchang->setText(QCoreApplication::translate("MainWindow", "go", nullptr));
        yingyuan->setText(QCoreApplication::translate("MainWindow", "go", nullptr));
        guiyuancaochang->setText(QCoreApplication::translate("MainWindow", "go", nullptr));
        jisuanjixueyuan->setText(QCoreApplication::translate("MainWindow", "go", nullptr));
        luojiashan->setText(QCoreApplication::translate("MainWindow", "go", nullptr));
        leijunkejilou->setText(QCoreApplication::translate("MainWindow", "go", nullptr));
        luojiamen->setText(QCoreApplication::translate("MainWindow", "go", nullptr));
        xintu->setText(QCoreApplication::translate("MainWindow", "go", nullptr));
        xinghutiyuchang->setText(QCoreApplication::translate("MainWindow", "go", nullptr));
        xincao->setText(QCoreApplication::translate("MainWindow", "go", nullptr));
        wanganxiaocaochang->setText(QCoreApplication::translate("MainWindow", "go", nullptr));
        guoruanc3->setText(QCoreApplication::translate("MainWindow", "go", nullptr));
        shishe->setText(QCoreApplication::translate("MainWindow", "go", nullptr));
        xinxixuebuyijiao->setText(QCoreApplication::translate("MainWindow", "go", nullptr));
        luoyumen->setText(QCoreApplication::translate("MainWindow", "go", nullptr));
        nanermen->setText(QCoreApplication::translate("MainWindow", "go", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
