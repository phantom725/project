#ifndef SECURITYSYSTEM_H
#define SECURITYSYSTEM_H

#include <QMainWindow>
#include "graph.h"
#include<QDebug>

namespace Ui {
class SecuritySystem;
}

class SecuritySystem : public QMainWindow
{
    Q_OBJECT

public:
    explicit SecuritySystem(Graph *g,QWidget *parent = nullptr);
    ~SecuritySystem();



private slots:
    // void addLocation();
    void addEdge();
    void removeEdge();
    void restoreEdge();

    void on_finishButton_clicked();

private:
    Ui::SecuritySystem *ui;
    Graph *graph;

    void displayError(const QString &message);
};

#endif // SECURITYSYSTEM_H

