#include <iostream>
using namespace std;

class Estudiante {
    protected:
    string codigo;
    string carrera;

    public:
    Estudiante(string _codigo = "", string _carrera = ""){
        codigo = _codigo;
        carrera = _carrera; 
    }

    string getCodigo(){
        return codigo;
    }
    void setCodigo(string _codigo){
        codigo = _codigo;
    }
    string getCarrera (){
        return carrera;
    }
    void setCarrera(string _carrera){
        carrera = _carrera;
    }

    string getDataEstudiante(){
        return "codigo de estudiante: " + codigo + ", carrera: " + carrera;
    }
};