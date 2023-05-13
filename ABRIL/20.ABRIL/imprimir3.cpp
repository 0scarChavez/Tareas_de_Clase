#include <iostream>
#include <string>
#include <fstream>
#include "estudiante.cpp"
using namespace std;

int main()
{
    Facultad facu1("001", "Facultad de Ingenieria en Informatica y Sistemas", "FIIS");
    Facultad facu2("002", "Facultad de Zootecnia", "FZ");

    // estudiantes de FIIs
    // estudiantes de FIIs
    Estudiante est1("2023000001", "juanito.perez@unas.edu.pe", "perez", "juanito", "44444444");
    est1.setFacultad(facu1);
    Estudiante est2("20220456", "jose.caldas@unas.edu.pe", " jose", "caldas", "234567");
    est2.setFacultad(facu1);
    Estudiante est3("20223457", "carlos.solar@unas.edu.pe", " carlos", "solar", "345678");
    est3.setFacultad(facu1);
    Estudiante est4("20223412", "marco.palacios@unas.edu.pe", "marco", "palacios", "3457177");
    est4.setFacultad(facu1);

    // Estudiantes de ZOOTECNIA
    Estudiante est5("2020007", "manuel.lopez@unas.edu.pe", "lopez", "manuel", "20458771");
    est5.setFacultad(facu2);
    Estudiante est6("2000485", "therry.exaltacion@unas.edu.pe", "exaltacion", "therry", "2024575");
    est6.setFacultad(facu2);
    Estudiante est7("20220050", "krystal.exaltacion@unas.edu.pe", "exaltacion", "krystal", "87541558");
    est7.setFacultad(facu2);
    Estudiante est8("2022002", "jose.martinez@unas.edu.pe", "mantinez", "jose", "73463283");
    est8.setFacultad(facu2);

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

    est1.agregarCurso(curs_1);
    est1.agregarCurso(curs_2);
    est1.agregarCurso(curs_3);
    est1.agregarCurso(curs_4);
    est1.agregarCurso(curs_5);

    est5.agregarCurso(curs_6);
    est5.agregarCurso(curs_7);
    est5.agregarCurso(curs_8);
    est5.agregarCurso(curs_9);
    est5.agregarCurso(curs_10);

    Estudiante Estudiante2[2]{est1, est5};

    Facultad facu[] = {facu1, facu2};

    ofstream archivo("estudiante.txt");

    if (!archivo.is_open())
    {
        cout << "Error al abrir el archivo" << endl;
        return 1;
    }

    archivo << "Datos de los estudiantes \n";

    archivo << facu[0].toString() << endl;

    archivo << "|||||||||||||||||||||||" << endl
            << Estudiante2[0].to_string();

    archivo << endl
            << "LOS CURSOS SON: \n";
    Estudiante2[0].ingresarNotas();

    for (int i = 0; i < 5; i++)
    {
        archivo << Estudiante2[0].getCurso(i).toString() << endl;
    }

    archivo << endl
            << facu[1].toString() << endl;

    archivo << "|||||||||||||||||||||||" << endl
            << Estudiante2[1].to_string();
    archivo <<endl<< "LOS CURSOS SON: \n";
    Estudiante2[1].ingresarNotas();

    for (int i = 0; i < 5; i++)
    {
        archivo << Estudiante2[1].getCurso(i).toString() << endl;
    }

    archivo.close();
}