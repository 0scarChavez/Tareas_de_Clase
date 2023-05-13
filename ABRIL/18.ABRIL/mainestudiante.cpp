#include <iostream>
#include <string>
#include "Estudiante.cpp"

using namespace std;

int main (){
    Estudiante est("20220149","FIIS","oscar.chavez@unas.edu.pe","Chavez","Oscar","76251308","brisas");
    Estudiante est2("20220150","Zootecnia","axel.acharte@unas.edu.pe","Axel","Acharte","873624","castillo");
    Estudiante est3("20210435","Administracion","jose.reyes@unas.edu.pe","Jose","Reyes","7663524","supte");
    Estudiante est4("20210321","Mecanica","haryy.gonzales@unas.edu.pe","Harry","Gonzales","7262534","paez");

    cout<<"Estudiantes : \n";
    est.getdato();



}