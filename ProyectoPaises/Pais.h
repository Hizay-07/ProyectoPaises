#ifndef PAIS_H
#define PAIS_H
#include <string>
using namespace std;
class Pais {
public:
	Pais();
	~Pais();
	Pais(string nomb,string cont, string cap, string mon, string idiom, string pob, string tam);
	string getNombre();
	void setNombre(string nomb);
	string getContinente();
	void setContinente(string cont);
	string getCapital();
	void setCapital(string cap);
	string getMoneda();
	void setMoneda(string mon);
	string getIdioma();
	void setIdioma(string idiom);
	string getPoblacion();
	void setPoblacion(string pob);
	string getTamano();
	void setTamano(string tam);
	
private:
	string nombre;
	string continente;
	string capital;
	string moneda;
	string idioma;
	string poblacion;
	string tamano;
};

#endif

