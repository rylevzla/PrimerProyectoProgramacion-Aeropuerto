#include "Contrato Plazo Fijo.h"

ContratoPlazoFijo::ContratoPlazoFijo(int cod, string descripcion, double salar, int horaIn, int horaCul)
	:Contrato(cod, descripcion, salar),fechaIngreso(horaIn), fechaCulminacion(horaCul)
{
}

ContratoPlazoFijo::~ContratoPlazoFijo()
{
}

int ContratoPlazoFijo::getfechaIn()
{
	return fechaIngreso;
}

int ContratoPlazoFijo::getfechaCul()
{
	return fechaCulminacion;
}

