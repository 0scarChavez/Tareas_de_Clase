#include <iostream>
#include <string>
#include <fstream>
#include "estudiante.cpp"
using namespace std;

int main()
{
    // crear curso
    Curso curs_1("0001", "Programacion Basica", 4);
    Curso curs_2("0002", "Diseño de BD", 3);
    Curso curs_3("0003", "Sotfware I", 3);
    Curso curs_4("0004", "Sotfware II", 4);
    Curso curs_5("0005", "Gestion de procesos", 4);

    // curso zootecnia
    Curso curs_6("0006", "Zoologia", 5);
    Curso curs_7("0007", "Supervivencia", 4);
    Curso curs_8("0008", "Ecosistema", 4);
    Curso curs_9("0009", "Fisiologia Animal", 6);
    Curso curs_10("0010", "Botanica General", 5);

    Curso cursos[] = {curs_1, curs_2, curs_3, curs_4, curs_5, curs_6, curs_7, curs_8, curs_9, curs_10};
    int valor = sizeof(cursos) / sizeof(cursos[0]);

    ofstream archivo("cursos.txt");

    if (!archivo.is_open())
    {
        cout << "Error al abrir el archivo" << endl;
        return 1;
    }
    archivo << "Datos de cursos \n";
    for (int i = 0; i < valor; i++)
    {
        archivo << cursos[i].toString() << "\n";
    }
    archivo.close();

    return 0;
}