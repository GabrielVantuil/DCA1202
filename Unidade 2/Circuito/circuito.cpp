#include <iostream>
#include "circuito.h"
using namespace std;

void Porta::setSaida(bool_3S s){
    saida = s;
}

void Porta::digitar(){
    cout << "Quantidade de  entradas: ";
    cin >> Nin;
    if(Nin >= 2 &&  Nin <= 4){
        for (unsigned i =0; i<Nin; i++){
            cout << "Id da entrada " << i +1 << ": ";
            cin >> id_in[i];
        }
    }
    else{
        cerr << "quantidade errada de entradas";
    }
    saida = UNDEF_3S;
}
void Porta_NOT::digitar(){
    cout<<"ID entrada: ";
    cin >> id_in[0];
    saida = UNDEF_3S;
}
bool Porta::ler(istream &I)
{
    I >> Nin;
    I.ignore(255,' ');
    for (unsigned i =0; i<Nin; i++){
        I >> this->id_in[i];
    }
    saida = UNDEF_3S;
    return true;
}


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
