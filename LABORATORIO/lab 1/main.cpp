#include <iostream>
#include "Class Departamento.cpp"
#include <fstream>
using namespace std;

int main()
{
    Departamento depart("Redes y Soporte", "RS");

    Empleado emp1("Jefe", 2000, 7, "Sofia", "Itusaca", "12848", "29 de abril 1990", 33);
    Empleado emp2("Soporte", 1550, 4, "Jose", "Quintana", "23425", "04 de noviembre 2000", 23);
    Empleado emp3("Soporte", 1550, 3, "Manuel", "Rojas", "14512", "23 de marzo 2003", 20);
    Empleado emp4("Redes", 1600, 5, "Karla", "Makein", "53368", "13 de mayo 1990", 33);
    Empleado emp5("Redes", 1600, 5, "Jean", "Martinez", "65735", "15 de febrero 1995", 28);
    Empleado emp6("Administracion", 1500, 4, "Harry", "Carhua", "86865", "27 de setiembre 2000", 23);
    Empleado emp7("Administracion", 1500, 3, "Alexis", "Perez", "57435", "29 de abril 2000", 23);
    Empleado emp8("Soporte", 1550, 5, "Axel", "Acharte", "95844", "29 de abril 1995", 28);
    Empleado emp9("Redes", 1600, 7, "Angel", "Rosales", "11424", "29 de abril 1994", 29);
    Empleado emp10("Jefe de marketing", 1700, 5, "Lucila", "Gomez", "55674", "05 de enero 2000", 23);

    Empleado empleados[10] = {emp1, emp2, emp3, emp4, emp5, emp6, emp7, emp8, emp9, emp10};

    ofstream archivo("Reporte.txt");

    if (!archivo.is_open())
    {
        cout << "Error al abrir el archivo" << endl;
        return 1;
    }

    archivo << "\t" << depart.ImprimirDepartamento() << "\n";
    archivo << " ************************************\n";

    archivo << "Jefe: \n";
    for (int i = 0; i < 10; i++)
    {
        if ("Jefe" == empleados[i].getPuesto())
        {
            archivo << empleados[i].ImprimirPersona() << "\n"
                    << empleados[i].DatosEmpelado()<<"\n";
        }
        
    }



    archivo << "\n\nSoporte: \n";
    for (int i = 0; i < 10; i++)
    {
        if ("Soporte" == empleados[i].getPuesto())
        {
            archivo << empleados[i].ImprimirPersona() << "\n"
                    << empleados[i].DatosEmpelado()<<"\n\n";
        }
  
    }


    archivo << "\n\nRedes: \n";
    for (int i = 0; i < 10; i++)
    {
        if ("Redes" == empleados[i].getPuesto())
        {
            archivo << empleados[i].ImprimirPersona() << "\n"
                    << empleados[i].DatosEmpelado()<<"\n\n";
        }

    }

    archivo << "\n\nAdministracion: \n";
    for (int i = 0; i < 10; i++)
    {
        if ("Administracion" == empleados[i].getPuesto())
        {
            archivo << empleados[i].ImprimirPersona() << "\n"
                    << empleados[i].DatosEmpelado()<<"\n\n";
        }

    }

    archivo << "\n\nJefe de marketing: \n";
    for (int i = 0; i < 10; i++)
    {
        if ("Jefe de marketing" == empleados[i].getPuesto())
        {
            archivo << empleados[i].ImprimirPersona() << "\n"
                    << empleados[i].DatosEmpelado()<<"\n\n";
        }

    }
    archivo.close();

    return 0;
}