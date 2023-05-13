#include <iostream>

using namespace std;

class Persona
{
protected:
    string apellido;
    string nombre;
    string dni;
    string direccion;
    string telefono;
    string correo;

public:
    Persona(string _apellido="", string _nombre="", string _dni="",string _direccion="",string _telefono="",string _correo="")
    {
        apellido = _apellido;
        nombre = _nombre;
        dni = _dni;
        direccion = _direccion;
        telefono = _telefono;
        correo = _correo;

    }
    // metodos de getter an setter
    string getApellido()
    {
        return apellido;
    }

    void setApellido(string _apellido)
    {
        apellido = _apellido;
    }

    string getNombre()
    {
        return nombre;
    }

    void setNombre(string _nombre)
    {
        nombre = _nombre;
    }

    string getDNI()
    {
        return dni;
    }

    void setDNI(string _dni)
    {
        dni = _dni;
    }
    string getDireccion()
    {
        return direccion;
    }

    void setDireccion(string _direccion)
    {
        direccion = _direccion;
    }
    string getTelefono()
    {
        return telefono;
    }

    void setTelefono(string _telefono)
    {
        telefono = _telefono;
    }
    string getCorreo()
    {
        return correo;
    }

    void setCorreo(string _correo)
    {
        correo = _correo;
    }
    

};