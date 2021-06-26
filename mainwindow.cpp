#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    DummyPrinter printer;
    ui->label->setText(printer.print());
}

MainWindow::~MainWindow()
{
    delete ui;
}

