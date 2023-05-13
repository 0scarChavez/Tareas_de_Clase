//1. Implemente una clase persona que contenga como atributos nombres, apellidos, dni, fecha nacimiento, edad. asi mismo

#include <iostream>
using namespace std;

class Persona 
{
protected:
string nombre;
string apellidos;
string dni;
string fecha_de_nacimiento;
int edad;
public:
Persona(string _nombre= "",string _apellidos= "",string _dni = "",string _fecha_de_nacimiento= "", int _edad= 0){
    nombre = _nombre;
    apellidos = _apellidos;
    dni = _dni;
    fecha_de_nacimiento = _fecha_de_nacimiento;
    edad = _edad;
}

string getNombre(){
    return nombre;
}
void setNombre(string _nombre){
    nombre = _nombre;
}

string getApellidos(){
    return apellidos;
}
void setApellidos(string _apellidos){
    apellidos = _apellidos;
}

string getDni(){
    return dni;
}
void setDni(string _dni){
    dni = _dni;
}

string getFecha_de_nacimiento(){
    return fecha_de_nacimiento;
}
void setFecha_de_nacimiento(string _fecha_de_nacimiento){
    fecha_de_nacimiento = _fecha_de_nacimiento;
}

int getEdad(){
    return edad;
}
void setEdad(int _edad){
    edad = _edad;
}

string ImprimirPersona(){
    return "Nombre y Apellido: " + nombre + " " + apellidos + " DNI : " + dni + " Fecha de nacimiento : " + fecha_de_nacimiento + " Edad : "  + to_string(edad);  
}

};