#include <iostream>
#include "movilidad.cpp"

class Tienda{
private: 
string nombre;
Movilidad moviles[15];


public:
Tienda(string _nombre){
    nombre = _nombre;
}

string getNombre(){
    return nombre;
}
void setNombre(string _nombre){
    nombre = _nombre;
}

Movilidad getAutos(int id){
    return moviles[id];

}
};