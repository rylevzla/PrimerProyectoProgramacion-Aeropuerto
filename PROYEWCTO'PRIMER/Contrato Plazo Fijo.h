#pragma once
#include "Contrato.h"

class ContratoPlazoFijo : public Contrato {
private:

    Contrato* conPtr;
    int fechaIngreso;
    int fechaCulminacion;


public:

    ContratoPlazoFijo(int cod, string descripcion, double salario, int fechaIn, int fechaCul);

    virtual ~ContratoPlazoFijo();

    int getfechaIn();

    int getfechaCul();

   

};