// libreria
#include <string>
#include <iostream>
using namespace std;
class Curso
{
private:
    // artributos
    string nombre;
    int creditos;
    int practica_01;
    int practica_02;
    int medio_curso;
    int peso;
    //datetime fecha_nacimiento;

    // metodos y funciones
public:
    // constructor
    Curso()
    {
    }
    Curso(string _nombre, int _creditos, int _practica_01 ,int _practica_02, int _medio_curso,int _peso)
    {
        //this el nombre de la clase
        nombre = _nombre;
        creditos = _creditos;
        practica_01 = _practica_01;
        practica_02 = _practica_02;
        medio_curso = _medio_curso;
        peso = _peso;
    }
    //
    string getnombre()
    {
        return nombre;
    }

    int getcreditos()
    {
        return creditos;
    }

    int getpractica_01()
    {
        return practica_01;
    }

    int getpractica_02()
    {
        return practica_02;
    }

    int getmedio_curso(){
        return medio_curso;
    }

     int getpeso(){
        return peso;
    }
    
    // set para setear
    void setnombre(string _nombre)
    {
        nombre = _nombre;
    }
    void setcreditos(int _creditos)
    {
        nombre = _creditos;
    }
    void setpractica_01(int _practica_01)
    {
        practica_01 = _practica_01;
    }
     void setpractica_02(int _practica_02)
    {
        practica_02 = _practica_02;
    }
    void setmedio__curso(int _medio_curso)
    {
        medio_curso = _medio_curso;
    }
    void setpeso(int _peso){
        peso = _peso;
    }   
};