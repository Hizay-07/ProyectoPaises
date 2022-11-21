#include "VectorPais.h"

VectorPais::VectorPais() {
	this->posFinal=0;
	this->tamano=0;
}
VectorPais::~VectorPais() {
	
}
VectorPais::VectorPais(int tam){
	this->posFinal=0;
	this->tamano=tam;
}
int VectorPais::getTamano(){
	return this->tamano;
}
void VectorPais::setTamano(int tam){
	this->tamano=tam;
}
int VectorPais::getPosFinal(){
	return this->posFinal;
}
void VectorPais::setPosFinal(int pf){
	this->posFinal=pf;
}
Pais VectorPais::getPais(int i){
	return this->paises[i];
}
void VectorPais::setPais(int i, Pais ps){
	this->paises[i]=ps;
}
void VectorPais::agregarPais(Pais ps){
	this->paises[this->posFinal]=ps;
	this->posFinal=this->posFinal+1;
}

