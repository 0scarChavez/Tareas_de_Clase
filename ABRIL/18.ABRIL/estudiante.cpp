#include <iostream>
#include<string>
#include <ctime>
#include "Persona.cpp"

using namespace std;
class Estudiante : Persona
{
private:
    string codigo_estudiante;
    string facultad;
    string correo;

public:
    //Automovil(int numRuedas, int numPuertas) : Vehiculo(numRuedas), numPuertas_(numPuertas) {}

    Estudiante(string _codigo, string _facultad, string _correo, string _apellido, string _nombre, string _dni,string _direccion) : Persona(_apellido, _nombre, _dni,_direccion)
    {
        codigo_estudiante = _codigo;
        facultad = _facultad;
        correo = _correo;
    }
    // getter an setter
    string getCodigo()
    {
        return codigo_estudiante;
    }
    void setCodigo(string _codigo)
    {
        codigo_estudiante = _codigo;
    }
    string getFacultad()
    {
        return facultad;
    }
    void setFacultad(string _facultad)
    {
        facultad = _facultad;
    }
    string getCorreo()
    {
        return correo;
    }
    void setCorreo(string _correo)
    {
        correo = _correo;
    }
    void getdato(){
        cout<<"los datos del estudiantes son: " <<getnombre()<<" , "<< getapellido()<<" , "<<getdni()<<" , "<<getdireccion()<<endl;
    }
};