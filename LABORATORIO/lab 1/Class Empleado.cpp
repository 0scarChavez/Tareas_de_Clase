#include <iostream>
#include <string>
#include "Class Persona.cpp"
using namespace std;

class Empleado : public Persona
{
protected:
string puesto;
int sueldo;
int antiguedad;

public:
Empleado(string _puesto = "",int _sueldo = 0 ,int _antiguedad = 0,string _nombre = "",string _apellidos = "",string _dni = "",string _fecha_de_nacimiento = "", int _edad = 0 ) : Persona (_nombre,_apellidos,_dni,_fecha_de_nacimiento,_edad){
    puesto = _puesto;
    sueldo = _sueldo;
    antiguedad = _antiguedad;
}

string getPuesto(){
    return puesto;
}
void setPuesto(string _puesto){
    puesto = _puesto;
}

int getSueldo(){
    return sueldo; 
}
void setSueldo(int _sueldo){
    sueldo = _sueldo;
}

int getAntiguedad(){
    return antiguedad;
}
void setAntiguedad(int _antiguedad)
{
    antiguedad = _antiguedad;
}

string DatosEmpelado(){
    string data = "Puesto: " + getPuesto() + " Sueldo: " + to_string(sueldo) + " Antiguedad: " + to_string(antiguedad) + " anios";
    return data;
}
};