#ifndef VECTORPAIS_H
#define VECTORPAIS_H
#include "Pais.h"
class VectorPais {
public:
	VectorPais();
	~VectorPais();
	VectorPais(int tam);
	int getTamano();
	void setTamano(int tam);
	int getPosFinal();
	void setPosFinal(int pf);
	Pais getPais(int i);
	void setPais(int i, Pais ps);
	void agregarPais(Pais ps);
	
private:
	int tamano;
	int posFinal;
	Pais paises[50];
};

#endif

