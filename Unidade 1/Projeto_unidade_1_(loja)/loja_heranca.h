 #ifndef _LOJA_H_
#define _LOJA_H_

#include <iostream>
#include <string>
#include <limits>
#include <fstream>
#include <stdlib.h>

using namespace std;
/***************************************************************************/
class Produto
{
private:
    string nome;
    unsigned preco;
public:
    inline Produto(const char *N="", unsigned P=0): nome(N), preco(P) {}
    istream &digitar(istream &I);
    ostream &imprimir(ostream &O) const;
    istream &ler(istream &I);
    inline ostream &salvar(ostream &O) const {return imprimir(O);}
    
    inline string getNome(){return nome;}
    inline unsigned getPreco(){return preco;}
    inline void setNome(string N){nome=N;}
    inline void setPreco(unsigned P){preco=P;}
};


// =========================================
//                  Produtos
// =========================================

/***************************************************************************/
class Livro : public Produto{
private:
    string autor;
public:
    inline Livro(const char *nome="", unsigned P=0, const char *A=""): Produto(nome, P), autor(A){}
    ostream &imprimir(ostream &O)const;
    istream &digitar(istream &I);
    inline void setAutor(const char *A){autor=A;}
    inline string getAutor(){return autor;}
    istream &ler(istream &I);
    inline ostream &salvar(ostream &O) const {return imprimir(O);}
};
/***************************************************************************/
class CD : public Produto{
private:
    unsigned NFaixas;
public:
    inline CD(const char *nome="", unsigned P=0, unsigned NF=0): Produto(nome, P), NFaixas(NF){};
    ostream &imprimir(ostream &O)const;
    istream &digitar(istream &I);
    inline void setNF(unsigned NF){NFaixas=NF;}
    inline unsigned getNF(){return NFaixas;}
    istream &ler(istream &I);
    inline ostream &salvar(ostream &O) const {return imprimir(O);}
};

/***************************************************************************/
class DVD : public Produto{
private:
    unsigned Duracao;
public:
    inline DVD(const char *nome="", unsigned P=0, unsigned D=0): Produto(nome, P), Duracao(D){}
    ostream &imprimir(ostream &O)const;
    istream &digitar(istream &I);
    inline void setDuracao(unsigned D){Duracao=D;}
    inline unsigned getDuracao(){return Duracao;}
    istream &ler(istream &I);
    inline ostream &salvar(ostream &O) const {return imprimir(O);}
};

// =========================================
//                  Listas
// =========================================

class ListaLivro
{
private:
    Livro *x;
    unsigned N;
public:
    inline ListaLivro():x(NULL),N(0){}
    inline ~ListaLivro(){delete[] x; N=0;}
    void incluir(const Livro &L);
    void excluir(unsigned id);
    void imprimir() const;
    void ler(istream &I);
    void salvar(ostream &O) const;
};


class ListaCD
{
private:
    CD *x;
    unsigned N;
public:
    inline ListaCD():x(NULL),N(0){}
    inline ~ListaCD(){delete[] x; N=0;}
    void incluir(const CD &L);
    void excluir(unsigned id);
    void imprimir() const;
    void ler(istream &I);
    void salvar(ostream &O) const;
};

class ListaDVD
{
private:
    DVD *x;
    unsigned N;
public:
    inline ListaDVD():x(NULL),N(0){}
    inline ~ListaDVD(){delete[] x; N=0;}
    // Inclua os construtores, destrutor e operadores necessarios
    void incluir(const DVD &L);
    void excluir(unsigned id);
    void imprimir() const;
    void ler(istream &I);
    void salvar(ostream &O) const;
};

class Loja
{
private:
    ListaLivro LL;
    ListaCD LC;
    ListaDVD LD;
public:
    inline Loja(): LL(), LC(), LD() {}
    inline void incluirLivro(const Livro &X) {LL.incluir(X);}
    inline void excluirLivro(unsigned id) {LL.excluir(id);}
    inline void incluirDVD(const DVD &X) {LD.incluir(X);}
    inline void excluirDVD(unsigned id) {LD.excluir(id);}
    inline void incluirCD(const CD &X) {LC.incluir(X);}
    inline void excluirCD(unsigned id) {LC.excluir(id);}
    void imprimir() const;
    void ler(const char* arq);
    void salvar(const char* arq) const;
};
//------------------------------------------------------- V Separar arquivo V -------------------------------------------------------
//--------------------- imprimir terminal--------------------------------------
inline ostream &operator<<(ostream &O, Livro &X) {return X.imprimir(O);}
inline ostream &operator<<(ostream &O, CD &X) {return X.imprimir(O);}
inline ostream &operator<<(ostream &O, DVD &X) {return X.imprimir(O);}

inline istream &operator>>(istream &I, Produto &X) {return X.digitar(I);}
ostream &Produto::imprimir(ostream &O)const {
    O<<"\""<<nome<<"\";$";
    O<<preco/100<<".";
    O<<(preco%100)/10<<preco%10;
    return O;
}
ostream &Livro::imprimir(ostream &O)const{
    Produto::imprimir(O);
    O<<";\""<<autor<<"\""<<endl;
}
ostream &CD::imprimir(ostream &O)const{
    Produto::imprimir(O);
    O<<";"<<NFaixas<<endl;
    return O;
}
ostream &DVD::imprimir(ostream &O)const{
    Produto::imprimir(O);
    O<<";"<<Duracao<<endl;
    return O;
}
void ListaLivro::imprimir()const{
    cout<<"LISTALIVRO "<<N<<endl;
    for(unsigned i=0;i<N;i++)
        cout<<i+1<<") L: "<<x[i];
}
void ListaCD::imprimir()const{
    cout<<"LISTACD "<<N<<endl;
    for(unsigned i=0;i<N;i++)
        cout<<i+1<<") C: "<<x[i];
}
void ListaDVD::imprimir()const{
    cout<<"LISTADVD "<<N<<endl;
    for(unsigned i=0;i<N;i++)
        cout<<i+1<<") D: "<<x[i];
}
void Loja::imprimir() const{
    LL.imprimir();
    LC.imprimir();
    LD.imprimir();   
}

//------------------------------------------------------------------------------
//--------------------- entrada terminal--------------------------------------
inline ostream &operator<<(ostream &O, Produto &X) {return X.imprimir(O);}
inline istream &operator>>(istream &I, Livro &X) {return X.digitar(I);}
inline istream &operator>>(istream &I, CD &X) {return X.digitar(I);}
inline istream &operator>>(istream &I, DVD &X) {return X.digitar(I);}

istream &Produto::digitar(istream &I){
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    do{
        cout<<"Nome: ";
        getline(I,nome,'\n');
    }while(nome=="");
    float P;
    do{ 
        cout<<"Preco: ";
        I>>P;
    }while(P<0);
    preco=P*100;
}
istream &Livro::digitar(istream &I){
    Produto::digitar(I);
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    do{
        cout<<"Autor: ";
        getline(I,autor,'\n');
    }while(autor=="");
    return I;
}
istream &CD::digitar(istream &I){
    Produto::digitar(I);
    do{
        cout<<"Nº Faixas: ";
        I>>NFaixas;
    }while(NFaixas<0);
    return I;
}
istream &DVD::digitar(istream &I){
    Produto::digitar(I);
    do{
        cout<<"Duracao: ";
        I>>Duracao;
    }while(Duracao<0);
    return I;
}

//------------------------------------------------------------------------------
//--------------------- incluir/excluir--------------------------------------
void ListaLivro::incluir(const Livro &L){
    Livro *prov = new Livro[N+1];
    for(unsigned i=0;i<N;i++)
        prov[i]=x[i];
    prov[N]=L;
    delete[] x;
    x=prov;
    N++;
}
void ListaLivro::excluir(unsigned id){
    id--;
    Livro *prov = new Livro[N-1];
    for(unsigned i=0;i<id;i++)
        prov[i]=x[i];
    for(unsigned i=id;i<N-1;i++)
        prov[i]=x[i+1];
    delete[] x;
    x=prov;
    N--;
}

void ListaCD::incluir(const CD &L){
    CD *prov = new CD[N+1];
    for(unsigned i=0;i<N;i++)
        prov[i]=x[i];
    prov[N]=L;
    delete[] x;
    x=prov;
    N++;
}
void ListaCD::excluir(unsigned id){
    id--;
    CD *prov = new CD[N-1];
    for(unsigned i=0;i<id;i++)
        prov[i]=x[i];
    for(unsigned i=id;i<N-1;i++)
        prov[i]=x[i+1];
    delete[] x;
    x=prov;
    N--;
}

void ListaDVD::incluir(const DVD &L){
    DVD *prov = new DVD[N+1];
    for(unsigned i=0;i<N;i++)
        prov[i]=x[i];
    prov[N]=L;
    delete[] x;
    x=prov;
    N++;
}
void ListaDVD::excluir(unsigned id){
    id--;
    DVD *prov = new DVD[N-1];
    for(unsigned i=0;i<id;i++)
        prov[i]=x[i];
    for(unsigned i=id;i<N-1;i++)
        prov[i]=x[i+1];
    delete[] x;
    x=prov;
    N--;
}


//------------------------------------------------------------------------------
//--------------------- Salvar/ler--------------------------------------
void erro(char C=' ', int L = -1){//erro de leitura
    cout<<"ERRO de leitura";
    switch(C){
    case 'L':
        cout<<" em ListaLivro ";
        if(L!=-1) cout<<"linha "<<L;
    break;
    case 'C':
        cout<<" em ListaCD ";
        if(L!=-1) cout<<"linha "<<L;
    break;
    case 'D':
        cout<<" em ListaDVD ";
        if(L!=-1) cout<<"linha "<<L;
    break;
    }
    cout<<endl;
    exit(true);
}
void ListaLivro::salvar(ostream &O) const{
    O<<"LISTALIVRO "<<N<<endl;
    for(unsigned i=0;i<N;i++){    
        O<<"L: ";
        O<<x[i];
    }
}
void ListaCD::salvar(ostream &O) const{
    O<<"LISTACD "<<N<<endl;
    for(unsigned i=0;i<N;i++){    
        O<<"C: ";
        O<<x[i];
    }
}
void ListaDVD::salvar(ostream &O) const{
    O<<"LISTADVD "<<N<<endl;
    for(unsigned i=0;i<N;i++){    
        O<<"D: ";
        O<<x[i];
    }
}
void Loja::salvar(const char* arq) const{
    ofstream arquivo(arq); //,ofstream::out|ofstream::app
    LL.salvar(arquivo);
    LC.salvar(arquivo);
    LD.salvar(arquivo);
    arquivo.close();
}


istream &Produto::ler(istream &I){
    I.ignore(numeric_limits<streamsize>::max(), '"');
    getline(I,nome,'"');
    if(nome=="") erro();
    I.ignore(numeric_limits<streamsize>::max(), '$');
    unsigned unid,cent;
    I>>unid;
    if(unid<0) erro();
    I.ignore(numeric_limits<streamsize>::max(), '.');
    I>>cent;
    if(cent<0) erro();
    preco=unid*100+cent;
    I.ignore(numeric_limits<streamsize>::max(), ';');
}
istream &Livro::ler(istream &I){
    Produto::ler(I);
    I.ignore(numeric_limits<streamsize>::max(), '"');
    getline(I,autor,'"');
    if(autor=="") erro();
}
istream &CD::ler(istream &I){
    Produto::ler(I);
    I>>NFaixas;
    if(NFaixas<=0) erro();
}
istream &DVD::ler(istream &I){
    Produto::ler(I);
    I>>Duracao;
    if(Duracao<=0) erro();
}


void ListaLivro::ler(istream &I){
    Livro Lido;
    Lido.ler(I);
    incluir(Lido);
}
void ListaCD::ler(istream &I){
    CD Lido;
    Lido.ler(I);
    incluir(Lido);
}
void ListaDVD::ler(istream &I){
    DVD Lido;
    Lido.ler(I);
    incluir(Lido);
}
void Loja::ler(const char* arq){
    ifstream arquivo(arq); //,ofstream::out|ofstream::app
    string prov;
    unsigned tam;
    arquivo>>prov>>tam;
    if(prov=="LISTALIVRO" && tam>=0)    
        for(unsigned i=0;i<tam;i++)
            LL.ler(arquivo);
    else erro('L');

    arquivo>>prov>>tam;
    if(prov=="LISTACD" && tam>=0)
        for(unsigned i=0;i<tam;i++)
            LC.ler(arquivo);
    else erro('C');
    
    arquivo>>prov>>tam;
    if(prov=="LISTADVD" && tam>=0)
        for(unsigned i=0;i<tam;i++)
            LD.ler(arquivo);
    
    else erro('D');
}





#endif // _LOJA_H_




//g++ -o loja loja_heranca-main.cpp && ./loja