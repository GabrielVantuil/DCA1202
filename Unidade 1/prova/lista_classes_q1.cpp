#include <iostream>
using namespace std;
class Ponto{
public:
    float x;
    float y;

    inline Ponto():x(0.0), y(0.0){};
    Ponto(float n1, float n2);
    friend ostream &operator<<(ostream &X, const Ponto &N);
    Ponto operator +(const Ponto &a);
    Ponto operator -(const Ponto &a);
    Ponto operator -();
    inline void imprimir() const {cout<<"("<<x<<","<<y<<")"<<endl;};

};
class Retangulo{
public:
    Ponto P1;
    Ponto P2;
    inline Retangulo():P1(0,0), P2(0,0){};
    Retangulo(Ponto pt1, Ponto pt2);
    Retangulo(float c1, float c2, float c3, float c4);
    inline void imprimir() const {cout<<"("<<P1.x<<","<<P1.y<<"), ("<<P2.x<<","<<P2.y<<")"<<endl;};
    friend ostream &operator<<(ostream &X, const Retangulo &ret);
};
Retangulo::Retangulo(Ponto pt1, Ponto pt2){
    P1.x=pt1.x;
    P1.y=pt1.y;
    P2.x=pt2.x;
    P2.y=pt2.y;
}
Retangulo::Retangulo(float c1, float c2, float c3, float c4){
    P1.x=c1;
    P1.y=c2;
    P2.x=c3;
    P2.y=c4;
}
ostream &operator<<(ostream &X, const Retangulo &ret){
    X<<"("<<ret.P1.x<<","<<ret.P1.y<<"), ("<<ret.P2.x<<","<<ret.P2.y<<")";
    return X;
}

Ponto Ponto::operator +(const Ponto &a){
    Ponto resp;
    resp.x = a.x+x;
    resp.y = a.y+y;
    return resp;
}
Ponto Ponto::operator -(const Ponto &a){
    Ponto resp;
    resp.x = a.x-x;
    resp.y = a.y-y;
    return resp;
}
Ponto Ponto::operator -(){
    Ponto resp;
    resp.x = -x;
    resp.y = -y;
    return resp;
}
Ponto::Ponto(float n1, float n2){
    x=n1;
    y=n2;
}
ostream &operator<<(ostream &X, const Ponto &N){
    X<<"("<<N.x<<","<<N.y<<")";
    return X;
}

int main(){
    Ponto bla(1.2,2.5);
    Ponto asa(2,2);
    Ponto c;
    Retangulo ret(bla,asa), ret2(1,2,3,4);

    cout<<ret;
}
