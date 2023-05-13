#include <iostream>
using namespace std;

class Empleado {
    protected:
    string puesto;
    float salario;

    public:
    Empleado(string _puesto = "", float _salario = 0){
        puesto = _puesto;
        salario = _salario; 
    }

    string getPuesto(){
        return puesto; 
    }

    void setPuesto(string _puesto){
        puesto = _puesto;
    }

    float getSalario(){
        return salario;
    }
    void setSalario(float _salario ){
        salario = _salario;
    }

    string getDataEmpleado(){
        return "puesto : " + puesto + ",  salario: " + to_string(salario);
    }
};