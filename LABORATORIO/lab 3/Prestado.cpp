#include <iostream>
#include "Libro.cpp"
using namespace std;

class Prestado
{
private:
    string prestado;
    Libro libro[5];
    int numLibro = 0;

public:
    Prestado(string _prestado = "")
    {
        prestado = _prestado;
    }
    string getPrestado()
    {
        return prestado;
    }
    void setPrestado(string _prestado)
    {
        prestado = _prestado;
    }
    Libro getlibro(int id)
    {
        return libro[id];
    }

    void AgregarLibro(Libro libr)
    {
        if (numLibro < 5)
        {
            libro[numLibro] = libr;
            numLibro++;
        }
    }
    string MostrarLibro(int a)
    {
        if (sizeof(libro) / sizeof(libro[0]) != 0)
        {
            for (int i = 0; i < a; i++)
            {
                return libro[i].MostrarLibro() + "\n";
            }
        }
    }
};