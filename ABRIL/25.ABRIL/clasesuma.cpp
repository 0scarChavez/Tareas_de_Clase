#include<iostream>
using namespace std;

class Suma {
private: 
int A;
int B;

public: 
Suma(int _A = 0 ,int _B=0){
    A = _A;
    B = _B;
}

int getA(){
    return A;
}

void setA(int _A){
    A = _A;
}
int getB(){
    return B;
}

void setB(int _B){
    B = _B; 
}

void Imprimir(){
    cout<< " La suma es : " + to_string(A+B);
}



};