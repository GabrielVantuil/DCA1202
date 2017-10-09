//Gabriel Teixeira Vantuil - 2015083925
#include <iostream>
#include <string>
#include "prova.h"

using namespace std;

int main()
{
	Voo A;
	A.setAeroOrigem("NAT");
	A.setAeroDestino("GRU");
	A.setPartida(1234);
	A.setChegada(0021);
	A.setNumero(1002);
	Voo B(A);
	cout<<A;
	//A.printVoo();





}