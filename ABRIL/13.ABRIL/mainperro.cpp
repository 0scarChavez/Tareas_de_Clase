#include <iostream>
#include <string>
#include "perro.cpp"
using namespace std;

int main()
{

    Perro perro1(true, true, true, 2, true, 2, 4, true, "canina");

    // datos de la clase hija
    cout << "|||DATOS DE LA CLASE HIJA|||\n";
    perro1.getladra();
    perro1.getdomestico();
    perro1.getpelo();
    cout<<endl;
    
    // datos de la clase madre
    perro1.getdato();
    return 0;
}