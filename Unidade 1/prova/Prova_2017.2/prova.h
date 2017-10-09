#include <iostream>
#include <string>
using namespace std;
class Voo{
private:
	unsigned Nvoo;
	string AeroOrigem;
	string AeroDestino;
	unsigned partida;
	unsigned chegada;
	void criar(unsigned N, string AO, string AD, unsigned P, unsigned C);
	void copiar(const Voo &A);

public:
	inline Voo(){criar(0,"   ","   ",0,0);};								//Defaut
	inline Voo(unsigned N, string AO, string AD, unsigned P, unsigned C){criar(N,AO,AD,P,C);};	//Eespecifico
	inline Voo(const Voo &A){copiar(A);};									//Copia

    friend ostream &operator<<(ostream &X, const Voo &V);
    friend istream &operator>>(istream &X, const Voo &V);

	inline unsigned getNumero(){return Nvoo;};
	inline string getAeroOrigem(){return AeroOrigem;};
	inline string getAeroDestino(){return AeroDestino;};
	inline unsigned getPartida(){return partida;};
	inline unsigned getChegada(){return chegada;};	
	
	void printVoo();
	
	inline void setNumero(unsigned N){if(N>=1000&& N<=9999) Nvoo = N; else cerr<<"Valor incorreto";};
	inline void setAeroOrigem(string Aero){if(Aero.length()==3) AeroOrigem = Aero; else cerr<<"Valor incorreto";};
	inline void setAeroDestino(string Aero){if(Aero.length()==3) AeroDestino = Aero; else cerr<<"Valor incorreto";};
	inline void setPartida(unsigned P){if(P>=0&&P<=2359) partida = P; else cerr<<"Valor incorreto";};
	inline void setChegada(unsigned C){if(C>=0&&C<=2359) chegada = C; else cerr<<"Valor incorreto";};	
};

class ListaVoos{
private:
	unsigned tam;
	Voo *x;
	void criar(unsigned T);
	void inserir(const Voo &V);

public:
	ListaVoos();
	inline ListaVoos(unsigned T){criar(T);};
	~ListaVoos();
	//ListaVoos(Voo A);


};




