#include "ContratoTiempoIndefinido.h"

ContratoTiempoIndefinido::ContratoTiempoIndefinido(int cod, string descripcion, double salario, string codPlaza, string nomPuesto)
	:Contrato(cod, descripcion, salario), Plaza(codPlaza, nomPuesto)
{}

ContratoTiempoIndefinido::~ContratoTiempoIndefinido()
{
}
