#include "mainjogovelha.h"
#include "jogodavelha.h"
#include <QApplication>

JogoDaVelha JV;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainJogoVelha w;

    w.show();

    return a.exec();
}
