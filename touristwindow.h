#ifndef TOURISTWINDOW_H
#define TOURISTWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QPushButton>
#include <QTextEdit>
#include "graph.h"
#include<QDebug>
class TouristWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit TouristWindow(Graph *graph, QWidget *parent = nullptr);
    ~TouristWindow();

private slots:
    void onQueryClicked();

private:
    QLineEdit *startLineEdit;
    QLineEdit *endLineEdit;
    QPushButton *queryButton;
    QTextEdit *resultTextEdit;
    Graph *graph;
};

#endif // TOURISTWINDOW_H
