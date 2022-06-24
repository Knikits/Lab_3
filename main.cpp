#include "mainwindow.h"
#include <QtCharts/QChart>
#include <QApplication>
#include <string>
#include "Printer.h"
#include "DataGraph.h"
#include "GeneratorGraph.h"
#include "Graph.h"
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
