#include "prova.h"



void Imagem::criar(unsigned lin, unsigned col){
	if(lin==0||col==0){
		NLin=Ncol=0;
		X = NULL;
		return;
	}
	NLin=lin;
	Ncol=col;
	X = new unsigned char*[lin];
	for(unsigned i = 0; i<lin; i++)
		X[i]=new unsigned char[col];
}
void Imagem::copiar(const Imagem &A){
	limpar();
	criar(A.NLin,A.Ncol);
	for(int i=0;i<A.NLin;i++)
		for(int j=0;j<A.Ncol;j++)
			X[i][j]=A.X[i][j];
}
void Imagem::limpar(){
	if(X!=NULL){
		for(unsigned i=0;i<NLin;i++) delete[] X[i];
		delete[] X;
	}
	NLin=Ncol=0;
	X=NULL;
}
unsigned Imagem::getPixel(unsigned x, unsigned y){
	if(x<NLin && y<Ncol)	return X[x][y];
	cerr<<"coordenadas invalidas"<<endl;
}


void Imagem::setPixel(unsigned x, unsigned y, unsigned char cor){
	if(x<NLin && y<Ncol) X[x][y]= cor;
	else	cerr<<"coordenadas invalidas"<<endl;
}

void Imagem::paintRectangle(unsigned x1, unsigned y1, unsigned x2, unsigned y2, unsigned char cor){
	for(int i=x1; i<x2; i++)
		for(int j=y1; j<y2; j++)
			X[i][j]=cor;

}