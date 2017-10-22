#ifndef MAINCIRCUITO_H
#define MAINCIRCUITO_H

#include <QMainWindow>
#include <QLabel>

namespace Ui {
class MainCircuito;
}

class MainCircuito : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainCircuito(QWidget *parent = 0);
    ~MainCircuito();
    void redimensiona_tabelas();

private slots:
    void on_actionSair_triggered();

private:
    Ui::MainCircuito *ui;
    QLabel NumIn;     // Exibe o numero de entradas do circuito
    QLabel NumOut;    // Exibe o numero de saidas do circuito
    QLabel NumPortas; // Exibe o numero de portas do circuito
};

#endif // MAINCIRCUITO_H
