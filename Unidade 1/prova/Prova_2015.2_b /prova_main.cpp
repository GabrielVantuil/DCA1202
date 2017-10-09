#include <iostream>
#include "prova.h"

using namespace std;


int main(){
	Imagem C(320,240);
	C.setPixel(2,1,9);
	C.paintRectangle(0,0,3,3,6);
	cout<<C.getPixel(2,1)<<endl;

	cout<<"It's alive!"<<endl;
}
