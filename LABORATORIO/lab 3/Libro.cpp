#include <iostream>
using namespace std;

class Libro{
private: 
string codigo_libro;
string titulo;
string categoria;
string autor;

public:
Libro(string _codigo_ibro="",string _titulo="",string _categoria="",string _autor=""){
    codigo_libro = _codigo_ibro;
    titulo = _titulo;
    categoria = _categoria;
    autor = _autor;
}

string getCodigoLibro(){
    return codigo_libro;
}
void setCodigoLibro(string _codigo_libro){
    codigo_libro = _codigo_libro;
}
string getTitulo(){
    return titulo;
}
void setTitulo(string _titulo){
    titulo = _titulo;
}
string getCategoria(){
    return categoria;
}
void setCategoria(string _categoria){
    categoria = _categoria;
}
string getAutor(){
    return autor;
}
void setAutor(string _autor){
    autor = _autor;
}

string MostrarLibro(){
    return "Titulo: " + titulo + " Autor: " + autor;
}



};