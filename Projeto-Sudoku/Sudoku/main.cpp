#include "sudoku.h"
#include <QApplication>
#include "console.h"
#include "sudoku2.h"

Sudoku2 S("../Sudoku/sudoku.txt");
Sudoku2 Origem("../Sudoku/sudoku.txt");
int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    Sudoku w;
    w.show();

    return a.exec();
}
