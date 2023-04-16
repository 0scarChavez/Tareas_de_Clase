/*Creamos la clase Murcielago la cual es una clase hija de la clase Animal*/

#include <iostream>
#include <string>
#include "animales.cpp" //llamamos a la clase madre segun el domingo por ello "animal.cpp"

class Murcielago : Animal
{
private:
    bool domestico;
    bool pelo;
    bool alas;

public:
    Murcielago(bool _domestico, bool _pelo, bool _alas, int _orejas,
               bool _cola, int _ojos, int _num_patas, bool _dientes, string _familia)
        : Animal(_orejas, _cola, _ojos, _num_patas, _dientes, _familia)
    {
        domestico = _domestico;
        pelo = _pelo;
        alas = _alas;
    }
    void getdomestico()
    {
        if (domestico)
        {
            cout << "Si es domestico \n";
        }
        else
        {
            cout << "No es domestico \n";
        }
    }
    void setdomestico(bool _domestico)
    {
        domestico = _domestico;
    }
    void getpelo()
    {
        if (pelo)
        {
            cout << "Si tiene pelo \n";
        }
        else
        {
            cout << "No tiene pelo \n";
        }
    }
    void setpelo(bool _pelo)
    {
        pelo = _pelo;
    }
    void getalas()
    {
        if (alas)
        {
            cout << "Si tiene alas \n";
        }
        else
        {
            cout << "No tiene alas \n";
        }
    }
    void setalas(bool _alas)
    {
        alas = _alas;
    }

    void getdato()
    {
        cout << "|||LOS DATOS DE LA CLASE MADRE|||" << endl
             << "La cantidad de orejas es  " << getorejas() << "\n";
             getcola();
             cout<< "Tiene " << getojos() << " ojos \n"
             << "El numero de patas es " << getnum_patas() << "\n";
             getdientes();
             cout<< "Es de la familia " << getfamilia();
    }
};