#include "View/MainWin/mainwindow.h"
#include <QApplication>
#include <QFontDatabase>
#include <QFont>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    int fontId = QFontDatabase::addApplicationFont(":/wqy-microhei.ttc");
    QString fontString = QFontDatabase::applicationFontFamilies(fontId).at(0);
    QFont appFont(fontString);
    QApplication::setFont(appFont);

    MainWindow w;
    w.show();

    return a.exec();
}
