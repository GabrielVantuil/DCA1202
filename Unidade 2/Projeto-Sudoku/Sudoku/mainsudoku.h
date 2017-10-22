#ifndef MAINSUDOKU_H
#define MAINSUDOKU_H

#include <stack>
#include "sudoku.h"
#include <QMainWindow>

namespace Ui {
class MainSudoku;
}

class MainSudoku : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainSudoku(QWidget *parent = 0);
    ~MainSudoku();
    void desenha_tab(int I=-1, int J=-1);
    void chagesourceFile(const char *nome_arq);

private slots:
    void on_tabuleiro_cellClicked(int row, int column);

    void on_SelNum_valueChanged(int arg1);

    void on_ok_num_clicked();

    void on_actionResolver_triggered();

    void on_actionReiniciar_triggered();

    void on_actionSair_triggered();

    void on_actionNovo_jogo_triggered();

private:
    Ui::MainSudoku *ui;
};

#endif // MAINSUDOKU_H
