#include <iostream>
#include "clasesuma.cpp"

using namespace std;

class Operacion
{
public:
void imprimir(int _A,int _B){
    Suma s;
    s.setA(_A);
    s.setB(_B);
    s.Imprimir();
}

};