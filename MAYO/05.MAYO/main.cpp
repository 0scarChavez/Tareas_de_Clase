#include <iostream>
#include <string>

#include "estudianteempleado.cpp"

using namespace std;

int main()
{
    EstudianteEmpleado e;
    e.setNombre("Jose");
    e.setApellidos("Jimenez");
    e.setEdad(14);
    cout<< e.getDataPersona();
    return 0;
}