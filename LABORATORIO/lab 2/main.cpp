#include <iostream>
#include <fstream>
#include "tienda.cpp"

using namespace std;

int main()
{
    Tienda tienda("Autoland");

    Movilidad movil1("negro", "Ford Mustang", 255, 4, 4, 4, 1);
    Movilidad movil2("gris", "Chevrolet Camaro", 300, 4, 4, 4, 2);
    Movilidad movil3("blanco", "Honda Civic ", 150, 4, 4, 4, 3);
    Movilidad movil4("rojo", "Toyota Corolla", 200, 4, 4, 4, 4);
    Movilidad movil5("negro", "Volkswagen Golf", 250, 4, 4, 4, 5);
    Movilidad movil6("negro", "Mercedes-Benz S-Class", 1, 4, 4, 4, 1);
    Movilidad movil7("blanco", "BMW 3 Series", 150, 4, 4, 4, 1);
    Movilidad movil8("rojo", "Porsche 911", 250, 4, 4, 4, 1);
    Movilidad movil9("rojo", "Tesla Model S", 200, 4, 4, 4, 1);
    Movilidad movil10("blanco", "Mercedes-Benz", 150, 4, 4, 4, 1);
    Movilidad movil11("azul", "Ducati Panigale V4", 120, 1, 2, 0, 2);
    Movilidad movil12("blanco", "Honda Civic", 200, 1, 2, 0, 3);
    Movilidad movil13("rojo", "Honda Gold Wing ", 100, 1, 2, 0, 4);
    Movilidad movil14("azul", "Yamaha YZF-R1", 150, 1, 2, 0, 5);
    Movilidad movil15("verde", "Triumph Bonneville T120", 115, 1, 2, 0, 6);

    Movilidad moviles[15] = {movil1,movil2,movil3,movil4,movil5,movil6,movil7,movil8,movil9,movil10,movil11,movil12,movil13,movil14,movil15};

    ofstream archivo("IMPORT2.txt");

    if (!archivo.is_open())
    {
        cout << "Error al abrir el archivo" << endl;
        return 1;
    }

    archivo<< tienda.getNombre() << "\n\n";

    archivo <<"Autos:\n\n";
    for (int i = 0; i < 15; i++)
    {
        if(moviles[i].getNumeroruedas()==4){
        archivo << moviles[i].Imprimir() << "\n\n";
        }
    }

    archivo << "\nMotos:\n\n";
    for (int i = 0; i < 15; i++)
    {
        if(moviles[i].getNumeroruedas()==2){
        archivo << moviles[i].Imprimir() << "\n\n";
        }
    }

    archivo.close();

    return 0;
}