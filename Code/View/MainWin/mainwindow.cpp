#include "mainwindow.h"
#include "ui_mainwindow.h"

#define SCREEN_WIDTH  (1280)
#define SCREEN_HEIGHT (720)

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->resize(SCREEN_WIDTH, SCREEN_HEIGHT);
    this->setWindowIcon(QIcon(":/Logo.ico"));

    QDesktopWidget *desktopWidget = QApplication::desktop();
    this->move((desktopWidget->width() - this->width()) / 2,
               (desktopWidget->height() - this->height()) / 2);
}

MainWindow::~MainWindow()
{
    delete ui;
}
