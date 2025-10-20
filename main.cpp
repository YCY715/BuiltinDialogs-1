#include "cbuiltindia.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CBuiltinDia w;
    w.show();
    return a.exec();
}
