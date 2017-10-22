#include "circuito.h"
#include <iostream>

using namespace std;
void Circuito::alocar(unsigned NI, unsigned NO, unsigned NP){
    inputs.resize(NI);
    id_out.resize(NO);
    portas.resize(NP);
}

void Circuito::limpar(){
    inputs.clear();
    id_out.clear();
    portas.clear();
}
void Circuito::digitar(){
    cout<<"Quantidade de entradas: ";
    cin>>Nin;
    cout<<"Quantidade de saidas: ";
    cin>>Nout;
    cout<<"Quantidade de portas: ";
    cin>>Nportas;

    limpar();
    alocar(Nin,Nout,Nportas);

    
    
}
