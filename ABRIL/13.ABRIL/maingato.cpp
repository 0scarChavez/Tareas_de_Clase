#include <iostream>
#include<string>
#include "gato.cpp"
using namespace std;

int main (){

    Gato gato1(true,true,true,2,true,2,4,true,"felino");

    //datos de la clase hija
    cout<<"|||DATOS DE LA CLASE HIJA|||\n";
    gato1.getmaulla();
    gato1.getdomestico();
    gato1.getpelo();
    cout<<endl;
    
    //datos de la clase madre
    gato1.getdato();
    return 0;
}   