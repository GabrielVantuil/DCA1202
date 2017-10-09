#include <iostream>
using namespace std;
class Imagem{
private:
	unsigned NLin, Ncol; 
	unsigned char **X;
	void criar(unsigned lin, unsigned col);
	void copiar(const Imagem &A);
	void limpar();
public:
	inline Imagem():NLin(0), Ncol(0), X(NULL){};								//Defaut
	inline Imagem(unsigned linhas, unsigned colunas){criar(linhas, colunas);};	//Eespecifico
	inline Imagem(const Imagem &A){copiar(A);};									//Copia
	inline ~Imagem(){limpar();};												//destrutor
	inline unsigned lenghtLin(){return NLin;};
	inline unsigned lenghtCol(){return Ncol;};
	unsigned getPixel(unsigned x, unsigned y);
	void setPixel(unsigned x, unsigned y, unsigned char cor);
	void paintRectangle(unsigned x1, unsigned y1, unsigned x2, unsigned y2, unsigned char cor);
};