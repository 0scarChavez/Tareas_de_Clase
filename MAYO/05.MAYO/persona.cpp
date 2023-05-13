#include <iostream>
using namespace std;

class Persona
{
protected:
    string nombre;
    string apellido;
    int edad;

public:
    Persona( string _nombre = "",string _apellido= "", int _edad= 0)
    {
        nombre = _nombre;
        apellido = _apellido;
        edad = _edad;
    }
    // metodos de getter an setter
    string getNombres()
    {
        return nombre;
    }

    void setNombre(string _nombre)
    {
        nombre = _nombre;
    }
    string getApellidos()
    {
        return apellido;
    }

    void setApellidos(string _apellido)
    {
        apellido = _apellido;
    }

    int getEdad()
    {
        return edad;
    }

    void setEdad(int _edad)
    {
        edad = _edad; 
    }

    void setDatosPersona(string _nombre, string _apellido, int _edad){
        nombre = _nombre;
        apellido = _apellido;
        edad = _edad;
    }

    string getDataPersona(){
        return "apellidos y nombre : " + apellido + "  " + nombre + "\t edad : " + to_string(edad);
    }
};