#include <iostream>
#include <cmath>
#include "complexo.h"

using namespace std;

// Tipo Complexo

void ler(Complexo &C)
{
    cout << "R? ";
    cin >> C.real;
    cout << "I? ";
    cin >> C.imag;
}

void imprimir(Complexo C)
{
    cout << C.real << (C.imag<0.0 ? '-' : '+') << 'j' << abs(C.imag);
}

Complexo soma(Complexo C1, Complexo C2)
{
    Complexo prov;
    prov.real = C1.real+C2.real;
    prov.imag = C1.imag+C2.imag;
    return prov;
}

Complexo produto(Complexo C1, Complexo C2)
{
    Complexo prov;
    prov.real = C1.real*C2.real - C1.imag*C2.imag;
    prov.imag = C1.real*C2.imag + C2.real*C1.imag;
    return prov;
}


