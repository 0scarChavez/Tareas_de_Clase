#include <iostream>
#include <fstream>
#include "Bibliotecario_Usuario.cpp"

using namespace std;

int main()
{
    int elegir;

    Biblioteca biblio("202301", "La Florarida", "Alameda Peru, cuadra 5", "987657253");

    Bibliotecario bibliotecario("202201", "Ramos", "Sergio", "2405100", "Av. Ucayali", "987527465", "sergio04@gmail.com");

    Usuario usuario1("01", "Garcia", "Daniel", "8746275", "Castillo Grande", "98376545", "danielgracia@gmail.com");

    Libro libr1("202301", "Gallinazos sin Plumas", "Novela", "Carlos Rojas");
    Libro libr2("202302", "Don Quijote de la Mancha", "Novela", "Miguel de Cervantes");
    Libro libr3("202303", "Nostromo", "Novela", "Joseph Conrad");
    Libro libr4("202304", "El Principito", "Cuento", "Antoine de Saint-Exupery");
    Libro libr5("202306", "Saltamonte va de Viaje", "Cuento", "Arnold Lobel");

    Prestado pres1("");

    cout << "Bienvenido \n";
    cout << "\nMENU\n"
         << "Que libro necesitas \n";
    cout << "1. Gallinazos sin Plumas\n"
         << "2. Don Quijote de la Mancha\n"
         << "3. Nostromo\n"
         << "4. El Principito\n"
         << "5. Saltamonte va de Viaje\n";
    cin >> elegir;
    while (elegir > 5)
    {
        system("cls");
        cout << "Opcion incorrecta, Ingresa otro numero entre el 1 - 5\n";
        cout << "\nMENU\n"
             << "Que libro necesitas \n";
        cout << "1. Gallinazos sin Plumas\n"
             << "2. Don Quijote de la Mancha\n"
             << "3. Nostromo\n"
             << "4. El Principito\n"
             << "5. Saltamonte va de Viaje\n";
        cin >> elegir;
    }

    if (elegir == 1)
    {
        pres1.AgregarLibro(libr1);
        cout << usuario1.getDatosUsuario();
        cout << "\nUsted a elegido el libro \n";
        cout << pres1.MostrarLibro(1);
    }
    if (elegir == 2)
    {
        pres1.AgregarLibro(libr2);
        cout << usuario1.getDatosUsuario();
        cout << "\nUsted a elegido el libro \n";
        cout << pres1.MostrarLibro(1);
    }
    if (elegir == 3)
    {
        pres1.AgregarLibro(libr3);
        cout << usuario1.getDatosUsuario();
        cout << "\nUsted a elegido el libro \n";
        cout << pres1.MostrarLibro(1);
    }
    if (elegir == 4)
    {
        pres1.AgregarLibro(libr4);
        cout << usuario1.getDatosUsuario();
        cout << "\nUsted a elegido el libro \n";
        cout << pres1.MostrarLibro(1);
    }
    if (elegir == 5)
    {
        pres1.AgregarLibro(libr5);
        
        cout << usuario1.getDatosUsuario();
        cout << "\nUsted a elegido el libro \n";
        cout << pres1.MostrarLibro(1);
    }

    ofstream archivo("reporte.txt");

    if (!archivo.is_open())
    {
        cout << "Error al abrir el archivo" << endl;
        return 1;
    }

    archivo << biblio.getNombre();
    archivo << "\n******************\n\n";

    archivo<<"BIBLIOTECARIO: "<<bibliotecario.getDatosBibliotecario()<<"\n\n";
    archivo << pres1.MostrarLibro(1)<<"\n";
    archivo<<usuario1.getDatosUsuario();
    archivo.close();

    return 0;
}