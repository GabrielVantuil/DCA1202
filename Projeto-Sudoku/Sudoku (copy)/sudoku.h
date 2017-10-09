#ifndef SUDOKU_H
#define SUDOKU_H
#include <stack>

#include <QMainWindow>

using namespace std;
namespace Ui {
class Sudoku;
}

class Sudoku : public QMainWindow{
    Q_OBJECT
public:
    explicit Sudoku(QWidget *parent = 0);
    ~Sudoku();
private slots:
    void on_tabuleiro_cellClicked(int row, int column);

    void on_Reiniciar_clicked();

    void on_SelNum_valueChanged(int arg1);

    void on_ok_num_clicked();

    void on_resolver_clicked();

    void on_actionResolver_triggered();

    void on_actionReiniciar_triggered();

private:
    Ui::Sudoku *ui;
};

#endif // _SUDOKU_H_
