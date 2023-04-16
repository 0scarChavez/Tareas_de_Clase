// declara un arreglo con el precio de 5 productos
// los precios son agregados por teclado
// imprime el arreglo
// imprimir el valor maximo del arreglo
// imprimir el valor maximo del indice del arreglo

#include <iostream>
using namespace std;

int main()
{
  string productos[] = {"Lapiz", "Cuaderno", "Libro", "lapicero", "borrado"};//creamos un arreglo de 5 productos
  int precio[5];//creamos un arreglo precio
  int tamanio = sizeof(precio) / sizeof(precio[0]);//creamos este sizeof para saber el tamaño del arreglo precio
//creamos un for para solicitar los precios de cada producto
  for (int i = 0; i < tamanio; i++)
  {
    cout << "Ingrese el precio de " << productos[i] << endl;
    cin >> precio[i];
  }
  //este for es para imprimir el arreglo
  for (int i = 0;i<tamanio;i++){

    cout<<"Los valores del arreglo ["<<i<<"] son: "<<productos[i]<<" = "<<precio[i]<<endl;
  }
  int mayor=0;//creamos la variable int mayor para poder hacer la comparacion de cual es el precio mayor
  for(int i=0;i<tamanio;i++){
    if(mayor<precio[i]){ //hacemos la compracion que si mayor que es igual a 0 es menor que precio[i] osea el primer precio
    mayor = precio[i];//si esto es verdadero el precio[i] se convierte en la variable mayor
    }
  }
  cout<<endl<<"El valor maximo del arreglo es :"<<mayor<<endl;//imprimimos el precio mayor
  cout<<endl<<"El valor maximo del indice del arreglo es: "<<tamanio-1;//imprimimos el indice del arrego

  


return 0;
}