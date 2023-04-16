/*Creamos la clase Gato la cual es una clase hija de la clase Animal*/

#include <iostream>
#include <string>
#include "animales.cpp" //llamamos a la clase madre segun el domingo por ello "animal.cpp"

class Gato : Animal
{
private:
    bool maulla;
    bool domestico;
    bool pelo;

public:
    Gato(bool _maulla, bool _domestico, bool _pelo, int _orejas,
         bool _cola, int _ojos, int _num_patas, bool _dientes, string _familia)
        : Animal(_orejas, _cola, _ojos, _num_patas, _dientes, _familia)
    {
        maulla = _maulla;
        domestico = _domestico;
        pelo = _pelo;
    }
    void getmaulla()
    {
        if (maulla)
        {
            cout << "Si maulla \n";
        }
        else
        {
            cout << "No maulla \n";
        }
    }
    void setmaulla(bool _maulla)
    {
        maulla = _maulla;
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