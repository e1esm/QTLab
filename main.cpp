#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QMainWindow *mw = new QMainWindow(0, Qt::Window);
    mw->setWindowTitle("Hello, QT 5");
    mw->resize(400, 300);
    mw->show();
    return app.exec();
}
