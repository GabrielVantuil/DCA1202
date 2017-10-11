#include "mainsudoku.h"
#include <QApplication>
#include "sudoku.h"

Sudoku S("./sudoku.txt");
Sudoku Origem("./sudoku.txt");
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainSudoku w;
    w.show();
    return a.exec();
}
