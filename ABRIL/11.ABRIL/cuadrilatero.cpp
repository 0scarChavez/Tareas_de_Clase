#include <iostream>
#include <math.h>
using namespace std;
// crear clase
class Cuadrilatero
{
    // atributos
private:
    float lado1;
    float lado2;
    float lado3;
    float lado4;
    // contructor y metodos

public:
    // contructor
    Cuadrilatero(float l1, float l2, float l3, float l4)
    {
        lado1 = l1;
        lado2 = l2;
        lado3 = l3;
        lado4 = l4;
    }

    float getlado1()
    {
        return lado1;
    }
    void setlado1(float l1)
    {
        lado1 = l1;
    }

    float getlado2()
    {
        return lado2;
    }
    void setlado2(float l2)
    {
        lado2 = l2;
    }

    float getlado3()
    {
        return lado3;
    }
    void setlado3(float l3)
    {
        lado3 = l3;
    }

    float getlado4()
    {
        return lado4;
    }
    void setlado4(float l4)
    {
        lado4 = l4;
    }

    float calcular_perimetro()
    {
        float perimetro = lado1 + lado2 + lado3 + lado4;
        return perimetro;
    }

    float calcular_area()
    {
        float area = (lado1*lado2)/2;
        return area;
    }
};

int main()
{
    Cuadrilatero cuadrilatero_1(7,3,7,3);
    Cuadrilatero cuadrilatero_2(10,5,10,5);
    Cuadrilatero cuadrilatero_3(15,2,15,2);

    cuadrilatero_1.setlado1(10);
    cuadrilatero_1.setlado3(10);
    cuadrilatero_2.setlado1(20);
    cuadrilatero_2.setlado3(20);

    cout << "El nuevo lado 1 del cuadrilatero 1 es " << cuadrilatero_1.getlado1() << endl;
    cout << "El nuevo lado 3 del cuadrilatero 1 es " << cuadrilatero_1.getlado3() << endl;

    cout << "El nuevo lado 1 del cuadrilatero 2 es " << cuadrilatero_2.getlado1() << endl;
    cout << "El nuevo lado 3 del cuadrilatero 2 es " << cuadrilatero_2.getlado3() << endl;

    cout << "la suma del primer cuadrilatero es: " << cuadrilatero_1.calcular_perimetro() << "\n"
         << "la suma del segundo cuadrilatero es: " << cuadrilatero_2.calcular_perimetro() << "\n"
         << "la suma del tercer cuadrilatero es: " << cuadrilatero_3.calcular_perimetro() << "\n";

    cout << "la suma de todos los lados es " << cuadrilatero_1.calcular_perimetro() + cuadrilatero_2.calcular_perimetro() + cuadrilatero_3.calcular_perimetro() << endl;

    cout << "El perimetro del primer cuadrilatero es: " << cuadrilatero_1.calcular_perimetro() << endl;
    cout << "El perimetro del segundo cuadrilatero es: " << cuadrilatero_2.calcular_perimetro() << endl;
    cout << "El perimetro del tercer cuadrilatero es: " << cuadrilatero_3.calcular_perimetro() << endl;

    cout << "El area del cuadrilatero 1 es: " << cuadrilatero_1.calcular_area() << endl;
    cout << "El area del cuadrilatero 2 es: " << cuadrilatero_2.calcular_area() << endl;
    cout << "El area del cuadrilatero 3 es: " << cuadrilatero_3.calcular_area() << endl;

    float suma_perimetro = cuadrilatero_1.calcular_perimetro() + cuadrilatero_2.calcular_perimetro() + cuadrilatero_3.calcular_perimetro();
    cout << "la suma de los perimetros es:  " << suma_perimetro << endl;
    float suma_area = cuadrilatero_1.calcular_area() + cuadrilatero_2.calcular_area() + cuadrilatero_3.calcular_area();
    cout << "la suma de los area es:  " << suma_area << endl;
}