#include "NodoContrato.h"

NodoContrato::NodoContrato():contratoPtr(nullptr), nodoContratoPtr(nullptr)
{

}

NodoContrato::NodoContrato(Contrato* conPtr, NodoContrato* nodoPtr):contratoPtr(conPtr), nodoContratoPtr(nodoPtr)
{
}

NodoContrato::~NodoContrato()
{
	if(this->contratoPtr != nullptr) delete this->contratoPtr;
}

void NodoContrato::setContrato(Contrato* conPtr)
{
	contratoPtr = conPtr;
}

void NodoContrato::setNodoContrato(NodoContrato* nodoPtr)
{
	nodoContratoPtr = nodoPtr;
}

Contrato* NodoContrato::getContrato()
{
	return contratoPtr;
}

NodoContrato* NodoContrato::getNodoContrato()
{
	return nodoContratoPtr;
}

NodoContrato* NodoContrato::getSiguiente()
{
	return this->nodoContratoPtr;
}

void NodoContrato::setSiguiente(NodoContrato*siguiente)
{
	this->nodoContratoPtr = siguiente;
}
  
