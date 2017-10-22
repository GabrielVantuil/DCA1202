#include "mainsudoku.h"
#include "ui_mainsudoku.h"

#include <QTableWidgetItem>
#include <QTableWidget>
#include <QString>
#include <QFileDialog>

#include <iostream>
#include <fstream>
#include <string>
#include <stack>
#include "sudoku.h"

using namespace std;

int cellx=-1, celly=-1;
MainSudoku::MainSudoku(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainSudoku)
{
    ui->setupUi(this);
    desenha_tab();
    ui->Iteracoes->hide();
}
MainSudoku::~MainSudoku()
{
    delete ui;
}

void MainSudoku::desenha_tab(int I, int J){
    QLabel *prov;
    for(int i = 0;i<9;i++)for(int j = 0;j<9;j++){
        prov = new QLabel;
        if(!(((i/3)!=1&&(j/3)!=1)||((i/3)==1&&(j/3)==1))){
                if(Origem.get_x(i, j)!=0)
                    prov->setStyleSheet("color: red; "
                                    "background-color: #DDD");
                else
                    prov->setStyleSheet("color: black; "
                                    "background-color: #DDD");
        }
        else if(Origem.get_x(i, j)!=0)
            prov->setStyleSheet("color: red; "
                                "background-color: #EEE");
        else
            prov->setStyleSheet("background-color: #EEE");
        if(S.get_x(i, j)!=0)
            prov->setText(QString::number(S.get_x(i, j)));

        prov->setAlignment(Qt::AlignCenter);
        ui->tabuleiro->setCellWidget(i, j, prov);
    }

    if((I>=0&&I<9)&&(J>=0&&J<9)){
            prov = new QLabel;
            if(Origem.get_x(I,J)!=0)
                prov->setStyleSheet("color: red; "
                                "background-color: #FF0");
            else
                prov->setStyleSheet("color: black; "
                                "background-color: #FF0");

            if(S.get_x(I, J)!=0)
                prov->setText(QString::number(S.get_x(I, J)));
            prov->setAlignment(Qt::AlignCenter);
            ui->tabuleiro->setCellWidget(I, J, prov);
    }

}


void MainSudoku::on_tabuleiro_cellClicked(int row, int column){
    celly = column;
    cellx = row;
    QString texto;
    texto.append("X: ");
    texto.append(QString::number(celly+1));
    texto.append(" Y: ");
    texto.append(QString::number(cellx+1));

    ui->coords->setText(texto);
    Jogada X(cellx, celly, ui->SelNum->value());
    if(Origem.get_x(cellx, celly)!=0){
        ui->coords->hide();
        ui->SelNum->hide();
        ui->ok_num->hide();
    }
    else{
        ui->coords->show();
        ui->SelNum->show();
        ui->ok_num->show();
    }
    desenha_tab(cellx, celly);

}

void MainSudoku::on_SelNum_valueChanged(int arg1){
    Jogada X(cellx, celly, arg1);
    if(S.jogada_valida(X)&&(Origem.get_x(cellx, celly)==0))
        ui->ok_num->setEnabled(true);
    else
        ui->ok_num->setEnabled(false);

}

void MainSudoku::on_ok_num_clicked(){
    Jogada X(cellx, celly, ui->SelNum->value());
    S.fazer_jogada(X);
    desenha_tab();
    ui->coords->hide();
    ui->SelNum->hide();
    ui->ok_num->hide();
}

void MainSudoku::on_actionResolver_triggered(){
    //on_actionReiniciar_triggered();
    QString it;
    it.append("Nos: ");
    it.append(QString::number(S.resolver()));
    ui->Iteracoes->setText(it);
    desenha_tab();
    ui->Iteracoes->show();

}
void MainSudoku::on_actionReiniciar_triggered(){
    S.reiniciar();
    desenha_tab();
    ui->Iteracoes->hide();
}

void MainSudoku::on_actionSair_triggered(){
    this->close();
}

void MainSudoku::on_actionNovo_jogo_triggered(){
    QString fileName = QFileDialog::getOpenFileName(this,
         tr("Open Sudoku"), "/home/barbosa", tr("*.txt"));
    char *str;
    QByteArray ba;
    ba = fileName.toLatin1();
    str = ba.data();

    Origem.changesourceFile(str);
    S.reiniciar();

    QString it;
    it.append("Iteracoes: 0");
    ui->Iteracoes->setText(it);
    S.reiniciar();
    desenha_tab();
}
