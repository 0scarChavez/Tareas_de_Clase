#include <iostream>
using namespace std;

class Vehiculo
{
protected:
    int cilindrada_motor;
    int numero_asientos;
    int numero_ruedas;
    int numero_puertas;
    int certificacion_segur;

public:
    Vehiculo(int _cilindrada_motor = 0, int _numero_asientos = 0, int _numero_ruedas = 0, int _numero_puertas = 0, int _certificacion_segur = 0)
    {
        cilindrada_motor = _cilindrada_motor;
        numero_asientos = _numero_asientos;
        numero_ruedas = _numero_ruedas;
        numero_puertas = _numero_puertas;
        certificacion_segur = _certificacion_segur;
    }

    int getCilindradamotor()
    {
        return cilindrada_motor;
    }

    void setCilindradamotor(int _cilindrada_motor)
    {
        cilindrada_motor = _cilindrada_motor;
    }

    int getNumeroasientos()
    {
        return numero_asientos;
    }

    void setNumeroasientos(int _numero_asientos)
    {
        numero_asientos = _numero_asientos;
    }

    int getNumeroruedas()
    {
        return numero_ruedas;
    }

    void setNumeroruedas(int _numero_ruedas)
    {
        numero_ruedas = _numero_ruedas;
    }

    int getNumeropuertas()
    {
        return numero_puertas;
    }

    void setNumeropuertas(int _numero_puertas)
    {
        numero_puertas = _numero_puertas;
    }

    int getCertificacionsegu()
    {
        return certificacion_segur;
    }

    void setCertificacionsegu(int _certificacion_segur)
    {
        certificacion_segur = _certificacion_segur;
    }
};