#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QResource::registerResource("./res_file.rcc");
    MainWindow w;
    w.show();
    return a.exec();
}
