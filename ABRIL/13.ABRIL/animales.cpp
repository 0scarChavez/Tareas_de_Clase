/*Creamos la clase Animal la cual crearemos sus clases hijas*/

#include <iostream>
using namespace std;

class Animal
{
protected:
    int orejas;
    bool cola;
    int ojos;
    int num_patas;
    bool dientes;
    string familia;
public:
    Animal(int _orejas, bool _cola, int _ojos, int _num_patas, bool _dientes, string _familia)
    {
        orejas = _orejas;
        cola = _cola;
        ojos = _ojos;
        num_patas = _num_patas;
        dientes = _dientes;
        familia = _familia;
    }
    int getorejas()
    {
        return orejas;
    }
    void setorejas(int _orejas)
    {
        orejas = _orejas;
    }
    void getcola()
    {
        if (cola)
        {
            cout << "Si tiene cola \n";
        }
        else
        {
            cout << "No tiene cola \n";
        }
    }
    void setcola(bool _cola)
    {
        cola = _cola;
    }

    int getojos()
    {
        return ojos;
    }
    void setojos(int _ojos)
    {
        ojos = _ojos;
    }

    int getnum_patas()
    {
        return num_patas;
    }
    void setnum_patas(int _num_patas)
    {
        num_patas = _num_patas;
    }

    void getdientes()
    {
        if (dientes)
        {
            cout << "Si tiene dientes \n";
        }
        else
        {
            cout << "No tiene dientes \n";
        }
    }
    void setdientes(bool _dientes)
    {
        dientes = _dientes;
    }

    string getfamilia()
    {
        return familia;
    }
    void setfamilia(string _familia)
    {
        familia = _familia;
    }
};
