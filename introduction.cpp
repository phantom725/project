#include "introduction.h"
#include "ui_introduction.h"

Introduction::Introduction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Introduction)
{
    ui->setupUi(this);
}

Introduction::~Introduction()
{
    delete ui;
}

void Introduction::showFirstLayer()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void Introduction::showSecondLayer()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void Introduction::showThirdLayer()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void Introduction::showFourthLayer()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void Introduction::showFifthLayer()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void Introduction::showSixthLayer()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void Introduction::showSeventhLayer()
{
    ui->stackedWidget->setCurrentIndex(6);
}

void Introduction::showEighthLayer()
{
    ui->stackedWidget->setCurrentIndex(7);
}

void Introduction::showNinthLayer()
{
    ui->stackedWidget->setCurrentIndex(8);
}

void Introduction::showTenthLayer()
{
    ui->stackedWidget->setCurrentIndex(9);
}

void Introduction::showEleventhLayer()
{
    ui->stackedWidget->setCurrentIndex(10);
}

void Introduction::showTwelfthLayer()
{
    ui->stackedWidget->setCurrentIndex(11);
}

void Introduction::showThirteenthLayer()
{
    ui->stackedWidget->setCurrentIndex(12);
}

void Introduction::showFourteenthLayer()
{
    ui->stackedWidget->setCurrentIndex(13);
}

void Introduction::showFifteenthLayer()
{
    ui->stackedWidget->setCurrentIndex(14);
}

void Introduction::showSixteenthLayer()
{
    ui->stackedWidget->setCurrentIndex(15);
}

void Introduction::showSeventeenthLayer()
{
    ui->stackedWidget->setCurrentIndex(16);
}

void Introduction::showEighteenthLayer()
{
    ui->stackedWidget->setCurrentIndex(17);
}

void Introduction::showNineteenthLayer()
{
    ui->stackedWidget->setCurrentIndex(18);
}

void Introduction::showTwentiethLayer()
{
    ui->stackedWidget->setCurrentIndex(19);
}
