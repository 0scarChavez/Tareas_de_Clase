#include <iostream>
using namespace std;

//  funcion sumatoria
int suma_matriz(int matriz_suma[5][4], int fila, int columna)
{
    int suma = 0;
    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {                              //[0][0]=2               2 +  [0][1]+3
            suma += matriz_suma[i][j]; // suma = suma + matriz_suma[i][j];
        }
    }
    return suma;
}
// funcion para mostrar matriz
void imprimir_matriz(int matriz_mostrar[5][4], int filas, int columnas)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << "\t" << matriz_mostrar[i][j];
        }
        cout << endl;
    }
}
// funcion para sumar las filas
void suma_filas(int matriz_suma[5][4], int fila, int columna)
{
    int sum_fila;
    for (int i = 0; i < fila; i++)
    {
        sum_fila = 0;
        for (int j = 0; j < columna; j++)
        {
            sum_fila += matriz_suma[i][j]; // suma = suma + matriz_suma[i][j];
        }
        cout << "la suma de la fila [" << i << "] es :" << sum_fila << endl;
    }
    // return sum_fila;
}
// funcion para sumas columnas
void sumar_columnas(int matriz_suma[5][4], int fila, int columna)
{
    int sum_columna;
    for (int i = 0; i < columna; i++)
    {
        sum_columna = 0;
        for (int j = 0; j < fila; j++)
        {
            sum_columna += matriz_suma[j][i]; // suma = suma + matriz_suma[i][j];
            // cout << matriz_suma[j][i] << "\n";
        }
        // cout << ".....";
        cout << "la suma de la columna [" << i << "] es :" << sum_columna << endl;
    }
}

// funcion para hallar el maximo valor de la matriz
void maximo(int matriz_maxima[5][4], int fila, int columna)
{

    int valor_maximo = matriz_maxima[0][0];

    for (int x = 0; x < fila; x++)
    {
        for (int y = 1; y < columna; y++)
        { // 2
            if (matriz_maxima[x][y] > valor_maximo)
            {
                valor_maximo = matriz_maxima[x][y];
            }
        }
    }
    cout << "El valor maximo es: " << valor_maximo;
}
// funcion para hallar el minimo valor de la matriz
void minimo(int matriz_minimo[5][4], int fila, int columna)
{

    int valor_minimo = matriz_minimo[0][0];

    for (int x = 0; x < fila; x++)
    {
        for (int y = 1; y < columna; y++)
        { // 2
            if (matriz_minimo[x][y] < valor_minimo)
            {
                valor_minimo = matriz_minimo[x][y];
            }
        }
    }
    cout << "El valor minimo es: " << valor_minimo;
}

// funcion para hallar el promedio de la matriz
void promedio_matriz(int matriz_suma[5][4], int fila, int columna)
{
    float cant_matriz = fila * columna; //=20
    float suma = suma_matriz(matriz_suma, 5, 4);
    float promedio = suma / cant_matriz;
    cout << "El promedio de la matriz es " << promedio;
}
// funcion para hallar el promedio de la fila
void promedio_fila(int matriz_suma[5][4], int fila, int columna)
{
    float sum_fila;
    for (int i = 0; i < fila; i++)
    {
        sum_fila = 0;
        for (int j = 0; j < columna; j++)
        {
            sum_fila += matriz_suma[i][j];
        }
        float promedio = sum_fila / columna;
        cout << "El promedio de la fila [" << i << "] es: " << promedio << endl;
    }
}
// funcion para hallar el promedio de la columna
void promedio_columna(int matriz_suma[5][4], int fila, int columna)
{
    float sum_columna;
    for (int i = 0; i < columna; i++)
    {
        sum_columna = 0;
        for (int j = 0; j < fila; j++)
        {
            sum_columna += matriz_suma[j][i];
        }
        float promedio = sum_columna / fila;
        cout << "El promedio de la columna [" << i << "] es: " << promedio << endl;
    }
}
// funcion para invertir la matriz
void invertir_matriz(int matriz[5][4], int fila, int columna)
{
    int nueva_matriz[4][5];
    for (int x = 0; x < fila; x++)
    {
        for (int y = 0; y < columna; y++)
        {
            nueva_matriz[y][x] = matriz[x][y];
        }
    }

    cout << "la nueva matriz es:" << endl;
    for (int i = 0; i < columna; i++)
    {
        for (int j = 0; j < fila; j++)
        {
            cout << "\t" << nueva_matriz[i][j];
        }
        cout << endl;
    }
}


int main()
{

    int matriz[5][4] = {{2, 3, 4, 5}, {6, 7, 8, 9}, {10, 11, 12, 13}, {14, 15, 16, 17}, {18, 19, 20, 21}};
    cout << matriz[2][4];
    cout << endl;
    cout << matriz[3][0];
    cout << endl;


    imprimir_matriz(matriz, 5, 4);
    int sum = suma_matriz(matriz, 5, 4);
    cout << "la suma es:" << sum;
    cout << endl;
    suma_filas(matriz, 5, 4);
    cout << endl;
    sumar_columnas(matriz, 5, 4);
    cout << endl;
    maximo(matriz, 5, 4);
    cout << endl;
    minimo(matriz, 5, 4);
    cout << endl;
    promedio_matriz(matriz, 5, 4);
    cout << endl;
    promedio_fila(matriz, 5, 4);
    cout << endl;
    promedio_columna(matriz, 5, 4);
    cout << endl;
    invertir_matriz(matriz, 5, 4);
    return 0;
}