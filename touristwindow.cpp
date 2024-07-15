#include "touristwindow.h"
#include "ui_touristwindow.h"
#include <QVBoxLayout>
#include <QLabel>

TouristWindow::TouristWindow(Graph *graph, QWidget *parent)
    : QMainWindow(parent), graph(graph)
{
    QWidget *centralWidget = new QWidget(this);

    this->setWindowTitle("路线查询");

    setFixedSize(626,402);

    QVBoxLayout *layout = new QVBoxLayout(centralWidget);

    QLabel *startLabel = new QLabel("起点:", this);
    startLineEdit = new QLineEdit(this);

    QLabel *endLabel = new QLabel("终点:", this);
    endLineEdit = new QLineEdit(this);

    queryButton = new QPushButton("查询", this);
    connect(queryButton, &QPushButton::clicked, this, &TouristWindow::onQueryClicked);

    resultTextEdit = new QTextEdit(this);
    resultTextEdit->setReadOnly(true);

    layout->addWidget(startLabel);
    layout->addWidget(startLineEdit);
    layout->addWidget(endLabel);
    layout->addWidget(endLineEdit);
    layout->addWidget(queryButton);
    layout->addWidget(resultTextEdit);

    setCentralWidget(centralWidget);
}

TouristWindow::~TouristWindow() {}

void TouristWindow::onQueryClicked()
{
    QString start = startLineEdit->text();
    QString end = endLineEdit->text();

    if (start.isEmpty() || end.isEmpty()) {
        resultTextEdit->setText("请输入有效的起点和终点");
        return;
    }

    std::vector<int> shortestPath = graph->getShortestPathByName(start.toStdString(), end.toStdString());
    std::vector<std::vector<int>> allPaths = graph->getAllPathsByName(start.toStdString(), end.toStdString());

    QString result;

    if (shortestPath.empty()) {
        resultTextEdit->setText("起点或终点不存在");
    } else {
        result += "从" + start + "到" + end + "的最短路径为: ";
        for (int i = 0; i < shortestPath.size(); ++i) {
            result += QString::fromStdString(graph->getVertexInfo(shortestPath[i]));
            if (i != shortestPath.size() - 1) {
                result += " -> ";
            }
        }
        result += "\n";
    }

    if (allPaths.empty()) {resultTextEdit->setText("起点或终点不存在");}
    else {
        result += "从" + start + "到" + end + "的所有路径:\n";
        std::vector<int> prevPath;
        for (const auto &path : allPaths) {
            if(path!=prevPath){
                for (int i = 0; i < path.size(); ++i) {
                    result += QString::fromStdString(graph->getVertexInfo(path[i]));
                    if (i != path.size() - 1) {
                        result += " -> ";
                    }
                }
                result += "\n";
                prevPath=path;
            }
        }
    }

    resultTextEdit->setText(result);
}
