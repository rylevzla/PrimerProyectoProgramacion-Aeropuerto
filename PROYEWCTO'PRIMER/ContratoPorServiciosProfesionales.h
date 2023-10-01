#pragma once
#include "Contrato.h"

class ContratoServicioProfecional: public Contrato{
private:

    Contrato* conPtr;
    int horaInicio;
    int horaFinal;
    string tipoSerivicio;

public:

    ContratoServicioProfecional(int cod, string descripcion, double salario, int horaIn, int horaF, string tipoSer);

    virtual ~ContratoServicioProfecional();

    int getHoraI();

    int getHoraF();
   
    string getiposer();

    };