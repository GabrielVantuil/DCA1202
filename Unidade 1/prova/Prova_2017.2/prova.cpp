#include "prova.h"
#include <iostream>
#include <string>
void Voo::criar(unsigned N, string AO, string AD, unsigned P, unsigned C){
	if(N>=1000 && N<=9999 && AO.length()==3 && AD.length()==3 && P>=0 && P<=2359 && C>=0 &&C<=2359){
		cerr<<"Entradas invalidas";
		return;
	}
	Nvoo = N;
	AeroOrigem = AO;
	AeroDestino = AD;
	partida = P;
	chegada = C;
}
void Voo::copiar(const Voo &A){
	Nvoo = A.Nvoo;
	AeroOrigem = A.AeroOrigem;
	AeroDestino = A.AeroDestino;
	partida = A.partida;
	chegada = A.chegada;


}


void Voo::printVoo(){
	cout<<" "<<getAeroOrigem()<<endl;
	cout<<" "<<getAeroDestino()<<endl;
	cout<<" "<<getPartida()<<endl;
	cout<<" "<<getChegada()<<endl;
	cout<<" "<<getNumero()<<endl;
}
ostream &operator<<(ostream &X, const Voo &V)
{
    X << "Voo nº" << V.Nvoo <<endl;
    X << "De: " << V.AeroOrigem << " a " << V.AeroDestino <<endl;
    X << "Partida: " << V.partida << ", Chegada: " << V.chegada<<endl;
    return X;
}

void ListaVoos::inserir(const Voo &V)
{
  Voo *prov = new Voo[tam+1];
  for (unsigned i=0; i<tam; i++) prov[i] = x[i];
  prov[tam] = V;
  delete[] x;
  x = prov;
  tam++;
}

void ListaVoos::criar(unsigned T){
	tam = T;
	x = new Voo;
}


ListaVoos::ListaVoos()
{
  tam = 0;
  x = NULL;
}

ListaVoos::~ListaVoos(void)
{
  if (x!=NULL) delete[] x;
}









/*
istream &operator>>(istream &X, const Voo &V)
{
	X>>V.Nvoo;
	while(V.Nvoo<1000||V.Nvoo>9999)
		X>>V.Nvoo;

	X>>V.AeroOrigem;
	while(V.AeroOrigem.length()==3)
		X>>V.AeroOrigem;

	X>>V.AeroDestino;
	while(V.AeroDestino.length()==3)
		X>>V.AeroDestino;

	X>>V.partida;
	while(V.partida<0||V.partida>2359)
		X>>V.partida;

	X>>V.chegada;
	while(V.chegada<0||V.chegada>2359)
		X>>V.chegada;

    return X;
}
*/