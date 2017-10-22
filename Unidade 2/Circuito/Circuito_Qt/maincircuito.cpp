#include "maincircuito.h"
#include "ui_maincircuito.h"
#include <QStringList>
#include <QString>
#include <time.h>
#include <vector>

MainCircuito::MainCircuito(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainCircuito)
{
    ui->setupUi(this);

    // Cabecalhos das tabelas
    ui->tablePortas->setHorizontalHeaderLabels(QStringList() << "TIPO" << "Nº\nENTR"
                                               << "ENTR\n1" << "ENTR\n2" << "ENTR\n3" << "ENTR\n4");
    ui->tableSaidas->setHorizontalHeaderLabels(QStringList() << "ORIG\nSAÍDA");

    // Insere os widgets da barra de status
    statusBar()->insertWidget(0,new QLabel("Nº entradas: "));
    statusBar()->insertWidget(1,&NumIn);
    statusBar()->insertWidget(2,new QLabel("   Nº saídas: "));
    statusBar()->insertWidget(3,&NumOut);
    statusBar()->insertWidget(4,new QLabel("   Nº portas: "));
    statusBar()->insertWidget(5,&NumPortas);

    // Redimensiona todas as tabelas e reexibe os valores da barra de status
    // Essa funcao deve ser chamada sempre que mudar o circuito
    redimensiona_tabelas();

}

MainCircuito::~MainCircuito()
{
    delete ui;
}

// Redimensiona todas as tabelas e reexibe todos os valores da barra de status
// Essa funcao deve ser chamada sempre que mudar o circuito (digitar ou ler de arquivo)
void MainCircuito::redimensiona_tabelas()
{
    int numInputs, numOutputs, numPortas;
    QString texto;
    int numInputsPorta, idInputPorta, idOutput;
    QLabel *prov;
    int i,j;

    // Esses numeros devem ser lidos a partir de metodos de consulta da classe Circuito
    // Para fazer um teste, vamos atribuir quantidades aleatorias
    srand(time(NULL));
    numInputs = 2+rand()%5;
    numOutputs = 2+rand()%5;
    numPortas = 4+rand()%10;

    // Ajusta os valores da barra de status
    NumIn.setNum(numInputs);
    NumOut.setNum(numOutputs);
    NumPortas.setNum(numPortas);

    // Redimensiona a tabela das portas e conexoes
    ui->tablePortas->clearContents();
    ui->tablePortas->setRowCount(numPortas);
    for (i=0; i<numPortas; i++)
    {
        // Esses valores devem ser lidos a partir de metodos de consulta da classe Circuito
        // Para fazer um teste, vamos atribuir quantidades aleatorias
        switch (rand()%7)
        {
        case 0:
            texto = "NOT";
            break;
        case 1:
            texto = "AND";
            break;
        case 2:
            texto = "NAND";
            break;
        case 3:
            texto = "OR";
            break;
        case 4:
            texto = "NOR";
            break;
        case 5:
            texto = "XOR";
            break;
        case 6:
            texto = "NXOR";
            break;
        }
        numInputsPorta = 2+rand()%3;

        // Cria os widgets das celulas da tabela de portas
        // Coluna 0
        ui->tablePortas->setCellWidget(i,0,new QLabel(texto));
        // Coluna 1
        prov = new QLabel;
        prov->setAlignment(Qt::AlignCenter);
        prov->setNum(numInputsPorta);
        ui->tablePortas->setCellWidget(i,1,prov);

        // As entradas de cada porta
        for (j=0; j<numInputsPorta; j++)
        {
            // Esses valores devem ser lidos a partir de metodos de consulta da classe Circuito
            // Para fazer um teste, vamos atribuir quantidades aleatorias
            if (rand()%3 == 0)
            {
                idInputPorta = -(1+rand()%numInputs);
            }
            else
            {
                idInputPorta = 1+rand()%numPortas;
            }

            // Cria os widgets das celulas da tabela de portas
            // Coluna 2 em diante
            prov = new QLabel;
            prov->setAlignment(Qt::AlignCenter);
            prov->setNum(idInputPorta);
            ui->tablePortas->setCellWidget(i,2+j,prov);
        }

    }

    // Redimensiona a tabela de saidas
    ui->tableSaidas->clearContents();
    ui->tableSaidas->setRowCount(numOutputs);
    for (i=0; i<numOutputs; i++)
    {
        // Esses valores devem ser lidos a partir de metodos de consulta da classe Circuito
        // Para fazer um teste, vamos atribuir quantidades aleatorias
        if (rand()%3 == 0)
        {
            idOutput = -(1+rand()%numInputs);
        }
        else
        {
            idOutput = 1+rand()%numPortas;
        }

        // Cria os widgets das celulas da tabela de saidas
        // Coluna 0 (unica)
        prov = new QLabel;
        prov->setAlignment(Qt::AlignCenter);
        prov->setNum(idOutput);
        ui->tableSaidas->setCellWidget(i,0,prov);
    }

    // Tabela verdade eh nao selecionavel
    ui->tableTabelaVerdade->setSelectionMode(QAbstractItemView::NoSelection);
    ui->tableTabelaVerdade->setTabKeyNavigation(false);

    // Redimensiona a tabela verdade
    ui->tableTabelaVerdade->clearContents();
    ui->tableTabelaVerdade->setColumnCount(numInputs+numOutputs);
    int numPossiveisInputs = round(pow(3,numInputs));
    ui->tableTabelaVerdade->setRowCount(1+numPossiveisInputs); // 1 linha a mais para cabecalho

    // Cria os cabecalhos na primeira linha
    // Entradas
    ui->tableTabelaVerdade->setSpan(0,0,1,numInputs);
    prov = new QLabel("ENTRADAS");
    prov->setAlignment(Qt::AlignCenter);
    prov->setStyleSheet("font-weight: bold");
    ui->tableTabelaVerdade->setCellWidget(0,0,prov);
    // Saidas
    ui->tableTabelaVerdade->setSpan(0,numInputs,1,numOutputs);
    prov = new QLabel("SAÍDAS");
    prov->setAlignment(Qt::AlignCenter);
    prov->setStyleSheet("font-weight: bold");
    ui->tableTabelaVerdade->setCellWidget(0,numInputs,prov);

    // Exibe as possibilidades de combinacao das entradas

    // Inicializa com todas as entradas UNDEF
    std::vector<int> inputs(numInputs);  // -1=UNDEF; 0=FALSE; 1=TRUE
    for (i=0; i<numInputs; i++) inputs[i] = -1;

    // Gera todas as linhas da tabela verdade
    for (j=0; j<numPossiveisInputs; j++)
    {
        // Exibe a j-esima combinação de entrada
        for (i=0; i<numInputs; i++)
        {
            switch (inputs[i])
            {
            default:
            case -1:
                texto="X";
                break;
            case 0:
                texto="F";
                break;
            case 1:
                texto="T";
                break;
            }
            prov = new QLabel(texto);
            prov->setAlignment(Qt::AlignCenter);
            ui->tableTabelaVerdade->setCellWidget(1+j,i,prov);
        }

        // Determina qual entrada deve ser incrementada na proxima linha
        // Incrementa a ultima possivel que nao for TRUE
        // Senao, faz essa ser UNDEF e tenta incrementar a anterior
        i = numInputs-1;
        while (inputs[i]==1 && i>=0) // inputs[i]==TRUE && i>=0
        {
          inputs[i] = -1;  // UNDEF
          i--;
        };
        // Incrementa a input selecionada
        if (i>=0) inputs[i] += 1;

        // Gera os labels da j-esima saida
        for (i=0; i<numOutputs; i++)
        {
            prov = new QLabel("?");
            prov->setAlignment(Qt::AlignCenter);
            ui->tableTabelaVerdade->setCellWidget(1+j,numInputs+i,prov);
        }
    }

}

void MainCircuito::on_actionSair_triggered()
{
    QCoreApplication::quit();
}
