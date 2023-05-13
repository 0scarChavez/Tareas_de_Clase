#include <iostream>
#include "vehiculo.cpp"
using namespace std;

class Movilidad : public Vehiculo
{

protected:
    string color;
    string marca;

public:
    Movilidad(string _color="", string _marca="", int _cilindrada_motor=0, int _numero_asientos=0, int _numero_ruedas=0, int _numero_puertas=0, int _certificacion_segur=0):Vehiculo(_cilindrada_motor, _numero_asientos, _numero_ruedas, _numero_puertas,_certificacion_segur){
        color=_color;
        marca=_marca;
    }

    string getColor(){
        return color;
    }

    void setColor(string _color){
        color=_color;
    }

    string getMarca(){
        return marca;
    }

    void setMarca(string _marca){
        marca=_marca;
    }

    string Imprimir(){
        return marca + " color: " + color + " Cilindraje: " + to_string(getCilindradamotor()) + " Asientos: " + to_string(getNumeroasientos()) + " Ruedas: " + to_string(getNumeroruedas()) + " Puertas: " + to_string(getNumeropuertas()) + " Certificacion: " + to_string(getCertificacionsegu());
    }
};