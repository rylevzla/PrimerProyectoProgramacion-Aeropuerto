
#pragma once
#include "Contrato.h"


class ContratoTiempoindefinido : public Contrato {
private:

    Contrato* conPtr;
    Plaza* plazaPtr;

public:

    ContratoTiempoindefinido(int cod, string descripcion, double salario);



    virtual ~ContratoTiempoindefinido();
    


 
    cout << "mamon";


};