#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include"securitysystem.h"
#include <QMainWindow>
#include "touristwindow.h"
#include "introduction.h"
#include "graph.h"
#include <QLabel>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void openTouristWindow();

    void on_gongzhujiao_clicked();

    void on_yingyuan_clicked();

    void on_songyuancaochang_clicked();

    void on_jisuanjixueyuan_clicked();

    void on_guiyuancaochang_clicked();

    void on_jiuyiercaochang_clicked();

    void on_fengyuan_clicked();

    void on_leijunkejilou_clicked();

    void on_luojiaguangchang_clicked();

    void on_luojiashan_clicked();

    void on_luojiamen_clicked();

    void on_xinghutiyuchang_clicked();

    void on_xintu_clicked();

    void on_wanganxiaocaochang_clicked();

    void on_xincao_clicked();

    void on_shishe_clicked();

    void on_guoruanc3_clicked();

    void on_xinxixuebuyijiao_clicked();

    void on_nanermen_clicked();

    void on_luoyumen_clicked();

private:
    Ui::MainWindow *ui;
    Graph * graph;
    TouristWindow *touristWindow;
    SecuritySystem *securityWindow;
    QLabel *imageLabel;
    void loadImage(const QString &imagePath);
    Introduction *introwindow;
};

#endif // MAINWINDOW_H

