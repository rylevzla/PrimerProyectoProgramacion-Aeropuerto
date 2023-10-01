

#pragma once
#include "Contrato.h"
#include"Plaza.h"
#include"Fecha.h"

class ContratoTiempoIndefinido : public Contrato {
private:

    Fecha* fechaIngreso;
    Fecha* fechaCese;
    Contrato* conPtr;
    Plaza* plazaPtr;

public:

    ContratoTiempoIndefinido(int cod, string descripcion, double salario, string codPlaza, string nomPuesto);



    virtual ~ContratoTiempoIndefinido();




};