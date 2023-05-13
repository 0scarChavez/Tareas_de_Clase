#include <iostream>
#include <string>
using namespace std;

class Persona
{
protected:
    string apellido;
    string nombre;
    string dni;
    string direccion;


public:
    Persona(string _apellido, string _nombre, string _dni,string _direccion)
    {
        apellido = _apellido;
        nombre = _nombre;
        dni = _dni;
        direccion = _direccion;
    }

    string getapellido()
    {
        return apellido;
    }
    void setapellido(string _apellido)
    {
        apellido = _apellido;
    }
    string getnombre()
    {
        return nombre;
    }
    void setnombre(string _nombre)
    {
        nombre = _nombre;
    }

    string getdni()
    {
        return dni;
    }
    void setdni(string _dni)
    {
        dni = _dni;
    }

     string getdireccion()
    {
        return direccion;
    }
    void setdireccion(string _direccion)
    {
        direccion = _direccion;
    }
};