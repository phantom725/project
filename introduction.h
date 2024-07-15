#ifndef INTRODUCTION_H
#define INTRODUCTION_H

#include <QDialog>

namespace Ui {
class Introduction;
}

class Introduction : public QDialog
{
    Q_OBJECT

public:
    explicit Introduction(QWidget *parent = nullptr);
    ~Introduction();

    void showFirstLayer();

    void showSecondLayer();

    void showThirdLayer();

    void showFourthLayer();

    void showFifthLayer();

    void showSixthLayer();

    void showSeventhLayer();

    void showEighthLayer();

    void showNinthLayer();

    void showTenthLayer();

    void showEleventhLayer();

    void showTwelfthLayer();

    void showThirteenthLayer();

    void showFourteenthLayer();

    void showFifteenthLayer();

    void showSixteenthLayer();

    void showSeventeenthLayer();

    void showEighteenthLayer();

    void showNineteenthLayer();

    void showTwentiethLayer();

private:
    Ui::Introduction *ui;
};

#endif // INTRODUCTION_H
