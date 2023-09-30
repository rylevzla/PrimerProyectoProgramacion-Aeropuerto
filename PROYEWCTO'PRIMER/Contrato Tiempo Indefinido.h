
#include "Plaza.h"
#include "Contrato.h"


class ContratoTiempoIndefinido : public Contrato {
private:

    Contrato* conPtr;
    Plaza* plazaPtr;

public:

    ContratoTiempoindefinido(int cod, string descripcion, double salario);



    virtual ~ContratoTiempoIndefinido();
    

   

};