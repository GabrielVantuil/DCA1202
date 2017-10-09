#include "sudoku.h"
#include <QApplication>
#include "console.h"
#include "sudoku2.h"

int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    Sudoku w;
    w.show();


    return a.exec();
}
