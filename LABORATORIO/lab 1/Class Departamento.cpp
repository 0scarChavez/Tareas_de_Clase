#include <iostream>
#include "Class Empleado.cpp"
using namespace std;

class Departamento{
private:
string nombre_departamento;
string siglas;
Empleado empleado[10];

public:
Departamento(string _nombre_departamento,string _siglas){
    nombre_departamento = _nombre_departamento;
    siglas = _siglas;
}

string getNombre_departamento(){
    return nombre_departamento;
}
void setNombre_departamento(string _nombre_departamento){
    nombre_departamento = _nombre_departamento;
}

string getSiglas(){
    return siglas;
}

void setSiglas(string _siglas){
    siglas = _siglas;
}

Empleado getEmpleado(int id){
    return empleado[id];
}

string ImprimirDepartamento(){
    return  nombre_departamento ;
}



};