#include <iostream>
#include "clase01.cpp"
using namespace std;

class ClaseAmiga
{
public:
    void imprimir(int numero)
    {
        Clase01 c;
        c.setValor(numero);
        c.imprimir();
    }
};