#include <iostream>
#include "Biblioteca.cpp"
#include "Persona.cpp"
#include "Prestado.cpp"
using namespace std;

class Bibliotecario : Persona
{
private:
    string codigo_bibliotecario;
    Biblioteca biblioteca;

public:
    Bibliotecario(string _codigo_bibliotecario = "", string _apellido = "", string _nombre = "", string _dni = "", string _direccion = "", string _telefono = "", string _correo = "") : Persona(_apellido, _nombre, _dni, _direccion, _telefono, _correo)
    {
        codigo_bibliotecario = _codigo_bibliotecario;
    }
    string getCodigoBibliotecario()
    {
        return codigo_bibliotecario;
    }
    void setCodigoBibliotecario(string _codigo_bibliotecario)
    {
        codigo_bibliotecario = _codigo_bibliotecario;
    }

    Biblioteca getBiblioteca()
    {
        return biblioteca;
    }
    void setBiblioteca(string _biblioteca)
    {
        biblioteca = _biblioteca;
    }
    string getDatosBibliotecario()
    {
        return " Apellidos: " + apellido + " Nombre: " + nombre + " DNI:" + dni + " Correo: " + correo;
    }
};

class Usuario : Persona
{
private:
    string codigo_usuario;
    Prestado prestado;

public:
    Usuario(string _codigo_usuario, string _apellido = "", string _nombre = "", string _dni = "", string _direccion = "", string _telefono = "", string _correo = "") : Persona(_apellido, _nombre, _dni, _direccion, _telefono, _correo)
    {
        codigo_usuario = _codigo_usuario;
    }
    string getCodigoUsuario()
    {
        return codigo_usuario;
    }
    void setCodigoUsuario(string _codigo_usuario)
    {
        codigo_usuario = _codigo_usuario;
    }
    Prestado getPrestado()
    {
        return prestado;
    }
    void setPrestado(Prestado _prestado)
    {
        prestado = _prestado;
    }
    string getDatosUsuario()
    {
        return "Nombre y Apellido" + nombre + " " + apellido + " DNI:" + dni + " Direccion: " + direccion;
    }
};
