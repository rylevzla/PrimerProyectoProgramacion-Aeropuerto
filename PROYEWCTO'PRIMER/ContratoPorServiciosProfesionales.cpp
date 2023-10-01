#include "Contrato Por Servicios Profesionales.h"



ContratoServicioProfecional::ContratoServicioProfecional(int cod, string descripcion, double salar, int horaIn, int horaF, string tipoSer)
	:Contrato(cod,descripcion,salar),horaInicio(horaIn),horaFinal(horaF),tipoSerivicio(tipoSer)
{
}

ContratoServicioProfecional::~ContratoServicioProfecional()
{

}

int ContratoServicioProfecional::getHoraI()
{
	return horaInicio;
}

int ContratoServicioProfecional::getHoraF()
{
	return horaFinal;
}

string ContratoServicioProfecional::getiposer()
{
	return  tipoSerivicio;
}
