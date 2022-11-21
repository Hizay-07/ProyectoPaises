#include "Pais.h"

Pais::Pais() {
	
}
Pais::~Pais(){
	
}
Pais::Pais(string nomb,string cont, string cap, string mon, string idiom, string pob, string tam){
	this->nombre=nomb;
	this->continente=cont;
	this->capital=cap;
	this->moneda=mon;
	this->idioma=idiom;
	this->poblacion=pob;
	this->tamano=tam;
}
string Pais::getNombre(){
	return this->nombre;
}
void Pais::setNombre(string nomb){
	this->nombre=nomb;
}
string Pais::getContinente(){
	return this->continente;
}
void Pais::setContinente(string cont){
	this->continente=cont;
}
string Pais::getCapital(){
	return this->capital;
}
void Pais::setCapital(string cap){
	this->capital=cap;
}
string Pais::getMoneda(){
	return this->moneda;
}
void Pais::setMoneda(string mon){
	this->moneda=mon;
}
string Pais::getIdioma(){
	return this->idioma;
}
void Pais::setIdioma(string idiom){
	this->idioma=idiom;
}
string Pais::getPoblacion(){
	return this->poblacion;
}
void Pais::setPoblacion(string pob){
	this->poblacion=pob;
}
string Pais::getTamano(){
	return this->tamano;
}
void Pais::setTamano(string tam){
	this->tamano=tam;
}

