#include <iostream>
#include <string>
#include <fstream>
#include "estudiante.cpp"

using namespace std;

int main()
{

    // crear Facultades
    Facultad facu1("001", "Facultad de Ingenieria en Informatica y Sistemas", "FIIS");
    Facultad facu2("002", "Facultad de Zootecnia", "FZ");

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

    // agregando cursos para est1
    est1.agregarCurso(curs_1);
    est1.agregarCurso(curs_2);
    est1.agregarCurso(curs_3);
    est1.agregarCurso(curs_4);
    est1.agregarCurso(curs_5);
    /////
    // est1.ingresarNotas();
    // est1.mostrarCursos();

    est5.agregarCurso(curs_6);
    est5.agregarCurso(curs_7);
    est5.agregarCurso(curs_8);
    est5.agregarCurso(curs_9);
    est5.agregarCurso(curs_10);

    // mostrar los cursos registrados al est1
    // est5.ingresarNotas();
    // est5.mostrarCursos();

    Estudiante listaEstudiantes[] = {est1, est2, est3, est4, est5, est6, est7, est8};
    Estudiante Estudiante2[2];

    string _codigo, _correo, _apellidos, _nombres, _dni;
    int opcion;
    int valor = sizeof(Estudiante2) / sizeof(Estudiante2[0]);
    for (int i = 0; i < valor; i++)
    {
        string _codigo = "";
        string _correo = "";
        string _apellidos = "";
        string _nombres = "";
        string _dni = "";
        cout << "Ingrese los datos del estudiante (codigo, apellidos, nombres, dni, correo) \n";
        cin >> _codigo;
        cin >> _apellidos;
        cin >> _nombres;
        cin >> _dni;
        cin >> _correo;
        Estudiante2[i] = Estudiante(_codigo, _correo, _apellidos, _nombres, _dni);
        cout << "selecione un facultad: \n";
        cout << "1: FIIS \n";
        cout << "2: ZOO \n";
        cin >> opcion;
        if (opcion == 1)
        { // FIIS
            Estudiante2[i].setFacultad(facu1);
        }
        if (opcion == 2)
        { // ZOO
            Estudiante2[i].setFacultad(facu2);
        }
    }

    for (int i = 0; i < valor; i++)
    {
        // agregar los cursos
        if (Estudiante2[i].getFacultad().getSigla() == "FIIS")
        {
            Estudiante2[i].agregarCurso(curs_1);
            Estudiante2[i].agregarCurso(curs_2);
            Estudiante2[i].agregarCurso(curs_3);
            Estudiante2[i].agregarCurso(curs_4);
            Estudiante2[i].agregarCurso(curs_5);
        }
        if (Estudiante2[i].getFacultad().getSigla() == "FZ")
        {
            Estudiante2[i].agregarCurso(curs_6);
            Estudiante2[i].agregarCurso(curs_7);
            Estudiante2[i].agregarCurso(curs_8);
            Estudiante2[i].agregarCurso(curs_9);
            Estudiante2[i].agregarCurso(curs_10);
        }
        Estudiante2[i].getFacultad().imprimir();
        cout << "***************************\n";
        Estudiante2[i].getDatos();
        cout << "****Datos del Curso*******\n";
        Estudiante2[i].mostrarCursos();
        cout << "***************************\n";
    }

    return 0;
}
