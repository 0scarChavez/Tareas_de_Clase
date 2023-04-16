/*Creamos la clase Perro la cual es una clase hija de la clase Animal*/

#include <iostream>
#include <string>
#include "animales.cpp" //llamamos a la clase madre segun el domingo por ello "animal.cpp"

class Perro : Animal
{
private:
    bool ladra;
    bool domestico;
    bool pelo;

public:
    Perro(bool _ladra, bool _domestico, bool _pelo, int _orejas,
          bool _cola, int _ojos, int _num_patas, bool _dientes, string _familia)
        : Animal(_orejas, _cola, _ojos, _num_patas, _dientes, _familia)
    {

        ladra = _ladra;
        domestico = _domestico;
        pelo = _pelo;
    }

    void getladra()
    {
        if (ladra)
        {
            cout << "Si ladra \n";
        }
        else
        {
            cout << "No ladra \n";
        }
    }
    void setladra(bool _ladra)
    {
        ladra = _ladra;
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
    void setdomeestico(bool _domestico)
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

    void getdato()
    {
        cout << "|||LOS DATOS DE LA CLASE MADRE|||" << endl
             << "La cantidad de orejas es  " << getorejas() << "\n";
        getcola();
        cout << "Tiene " << getojos() << " ojos \n"
             << "El numero de patas es " << getnum_patas() << "\n";
        getdientes();
        cout << "Es de la familia " << getfamilia();
    }
};