#include "designwidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DesignWidget w1,w2;
    w1.show();
    w1.move(300,0);
    return a.exec();
}
