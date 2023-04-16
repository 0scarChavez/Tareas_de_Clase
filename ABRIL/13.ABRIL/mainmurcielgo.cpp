#include <iostream>
#include <string>
#include "murcielago.cpp"
using namespace std;

int main()
{

    Murcielago murcielago1(false, false, true, 2, true, 2, 4, true, "chiroptera");

    // datos de la clase hija
    cout << "|||DATOS DE LA CLASE HIJA|||\n";
    murcielago1.getdomestico();
    murcielago1.getpelo();
    murcielago1.getalas();
    cout<<endl;
    
    // datos de la classe madre
    murcielago1.getdato();
    return 0;
}