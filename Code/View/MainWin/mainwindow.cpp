#include "mainwindow.h"
#include "ui_mainwindow.h"

#define SCREEN_WIDTH (1280)
#define SCREEN_HEIGHT (720)

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->resize(SCREEN_WIDTH, SCREEN_HEIGHT);
}

MainWindow::~MainWindow()
{
    delete ui;
}
