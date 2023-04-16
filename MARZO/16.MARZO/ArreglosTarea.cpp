#include <iostream>
using namespace std;
///// funcion para obtener el numero menor/////
void num_menor(int a[], int tamanio)
{
    int menor = a[0];                 // asigamos la variable menor como a[0]
    for (int i = 1; i < tamanio; i++) // ponemos que el for comience en 1 porque el 0 ya lo tenemos asignado
    {
        if (a[i] < menor) // usamos el if para hacer una comparacion del primer arreglo a[1] si es "menor" que a[0] osea la variable menor
        {
            menor = a[i]; // el arreglo que cumpla esta condicion se convierte en el nuevo menor
        }
    }
    cout << "el numero menor es " << menor << endl;
}

/////funcion oara optener el numero mayor/////
void num_mayor(int a[], int tamanio)
{
    int mayor = a[0];                 // asigamos la variable mayor como a[0]
    for (int i = 1; i < tamanio; i++) // ponemos que el for comience en 1 porque el 0 ya lo tenemos asignado
    {
        if (a[i] > mayor) // usamos el if para hacer una comparacion del primer arreglo a[1] si es "mayor" que a[0] osea la variable mayor
        {
            mayor = a[i]; // el arreglo que cumpla esta condicion se convierte en el nuevo mayor
        }
    }
    cout << "el numero mayor es " << mayor << endl;
}

/////funcion para los numeros que se repiten/////
void repetidos(int a[], int tamanio)
{
    cout << "los numeros que se repiten en el arreglo son: "; // imprimimos esto para el siguiente for

    // este for lo usamos para saber que numeros se repiden en el arreglo
    for (int i = 0; i < tamanio - 1; i++)
    {
        for (int j = i + 1; j < tamanio; j++)
        {
            if (a[i] == a[j])
            {
                cout << a[i] << " ";
                break;
            }
        }
    }
}

// funcion para ordenar los numeros de menor a mayor
void menor_mayor(int a[], int tamanio)
{
    for (int i = 0; i < tamanio; i++)

    {
        for (int j = 0; j < tamanio - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int tempo = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tempo;
            }
        }
    }
    ////LO de abajo lo usamos para imprimir los numeros de menor a mayor
    cout << endl
         << "El arreglo ordenado de menor a mayor es: ";

    for (int i = 0; i < tamanio; i++)
    {
        cout << a[i] << " ";
    }
}

// funcion para ordenar los numeros de mayor a menor
void mayor_menor(int a[], int tamanio)
{
    for (int i = 0; i < tamanio; i++)
    {
        for (int j = 0; j < tamanio - 1; j++)
        {
            if (a[j] < a[j + 1])
            {
                int tempo = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tempo;
            }
        }
    }
    cout << endl
         << "El arreglo ordenado de mayor a menor es: ";
    for (int i = 0; i < tamanio; i++)
    {
        cout << a[i] << " ";
    }
}

// funcion hallar la suma de los items del arreglo
void suma(int a[], int tamanio)
{
    float suma;
    for (int i = 0; i < tamanio; i++)
    {
        suma += a[i];
    }
    cout << endl
         << "La suma de los items del arreglo son " << suma << endl;
}
// funcion para hallar el promedio
void promedio(int a[], int tamanio)
{
    float suma=0;
    for (int i = 0; i < tamanio; i++)
    {
        suma =suma + a[i];
    }
    float promedio = suma / tamanio;
    cout << "El promedio del arreglo es: " << promedio;
}
// funcion para hallar la mediana
void mediana(int a[], int tamanio)
{
    // primero tenemos que hacer el ordenamiento de menor a mayor
    for (int i = 0; i < tamanio; i++)
    {
        for (int j = 0; j < tamanio - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int tempo = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tempo;
            }
        }
    }
    int mediana;
    mediana = (tamanio - 1) / 2; // si es impar
    //imprimimos la mediana
    cout << endl<< "La mediana es: " << a[mediana];
    //hacemos el cambio de la mediana por 25
    a[mediana] = 25;
    cout << endl<< "El nuevo valor del medio es: " << a[mediana];
}
int main()
{
    int a[5];
    int tamanio = sizeof(a) / sizeof(a[0]); // creamos tamanio con el tamaño del arreglo
    // se hace un bucle para solicitar los datos y ponerlos en su respectivo arreglo
    for (int i = 0; i < tamanio; i++)
    {
        cout << "ingrese los valores del arreglo [" << i << "]" << endl;
        cin >> a[i];
    }

    cout << endl
         << "LOS DATOS: " << endl;

    num_menor(a, tamanio);
    num_mayor(a, tamanio);
    repetidos(a, tamanio);
    menor_mayor(a, tamanio);
    mayor_menor(a, tamanio);
    suma(a, tamanio);
    promedio(a, tamanio);
    mediana(a,tamanio);

    return 0;
}
