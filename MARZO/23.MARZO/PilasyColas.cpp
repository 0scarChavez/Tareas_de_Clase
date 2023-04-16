#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main()
{   
    // Declaración de la pila y la cola
    stack<int> pila;
    queue<int> cola;
    // damos valoress a las pilas
    pila.push(1);
    pila.push(2);
    pila.push(3);
    pila.push(4);
    pila.push(5);

    int tempo;
    // la transferencia de pila a cola
    while(!pila.empty()){
        // el ultimo elemento .top() los asignamos a tempo
        (pila.top());
        pila.pop();//con esto sacamos el ultimo elemento

        cola.push(tempo);//esto es para que cada que sale el ultimo elemento de la pila y asignada a tempo, se coloque en las pilas
    }

    cout<<"los elementos de cola son : ";
    while (!cola.empty()){
        cout<<cola.front()<<" ";//imprimir la cola del frente
        cola.pop();//esto para que cada que se ponga la cola del frente, se quite 
    } 
    return 0;
}