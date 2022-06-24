#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFileDialog"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableWidget->setColumnCount(5);

    QStringList name_column;
    name_column << "" << "Name" << "Size" << "Type" << "Date Modifed";
    ui->tableWidget->setHorizontalHeaderLabels(name_column);
    ui->tableWidget->horizontalHeader()->resizeSection(0, 1);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    QString str = QFileDialog::getExistingDirectory();
    qDebug() << str;
}

