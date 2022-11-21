#include<iostream>
#include <string>
#include<stdlib.h>
#include "Pais.h"
#include "VectorPais.h"
using namespace std;
void consultaPorContinente(VectorPais mundo, int contador){
	string continente;
	cout<<"---<Consulta por continente>---\n";
	cout<<"[continente a consultar]: "; cin.ignore(256,'\n'); getline(cin,continente);
	for(int i=0;i<contador;i++){
		if(mundo.getPais(i).getContinente()==continente){
			cout<<"-"<<mundo.getPais(i).getNombre()<<endl;
		}
	}
}
int buscar(VectorPais planeta, int contador){
	string buscar;
	int pos=-1;
	cin.ignore(256,'\n'); getline(cin, buscar);
	for(int i=0;i<contador;i++){
		if(buscar==planeta.getPais(i).getNombre()){
			pos=i;
		}
	}
	return (pos);
}
void mostrarData(VectorPais mundo, int pos){
	cout<<"---<"<<mundo.getPais(pos).getNombre()<<">---"<<endl;
	cout<<"Se encuentra en " <<mundo.getPais(pos).getContinente()<<"."<<endl;
	cout<<"Su capital es " <<mundo.getPais(pos).getCapital()<<"."<<endl;
	cout<<"Su moneda es "<<mundo.getPais(pos).getMoneda()<<"."<<endl;
	cout<<"Se habla "<<mundo.getPais(pos).getIdioma()<<"."<<endl;
	cout<<"Tiene "<<mundo.getPais(pos).getPoblacion()<<" habitantes."<<endl;
	cout<<"Su extension es de "<<mundo.getPais(pos).getTamano()<<" km2."<<endl;
}
void modificar(VectorPais planeta, int contador, int pos){
	int op;
	string opciones[6]={"Continente", "Capital", "Moneda", "Idioma", "Poblacion", "Tamano"};
	string modificacion;
	cout<<"\nDato a modificar: "<<endl;
	for(int i=0; i<6;i++){
		cout<<"["<<i+1<<"]"<<opciones[i]<<". "<<endl;
	}
	cout<<"[Opcion]: "; cin>>op;
	cout<<opciones[op-1]<<" modificacion: "; cin.ignore(256,'\n'); getline(cin,modificacion);
	if(op>0&&op<=6){
		switch(op){
		case 1: planeta.getPais(pos).setContinente(modificacion);
			break;
		}
	}
}
Pais agregarUnPais(){
	string nombre, continente, capital, moneda, idioma, poblacion, tamano;
	cout<<"Nombre: "; cin.ignore(256,'\n'); getline(cin,nombre);
	cout<<"Continente: "; getline(cin,continente);
	cout<<"Capital: "; getline(cin,capital);
	cout<<"Moneda: "; getline(cin, moneda);
	cout<<"Idioma: "; getline(cin, idioma);
	cout<<"Poblacion: "; getline(cin, poblacion);
	cout<<"Tamano(km2): "; getline(cin, tamano);
	Pais nPais(nombre,continente,capital,moneda,idioma,poblacion,tamano);
	return nPais;
}
int volverAMenu(){
	int op=0;
	cout<<"\n[1]Menu Principal. [2] Salir. ";
	do{ cin>>op; } while(op!=2 && op!=1);
	
	if(op==2){
		op=op+6;
	}
	return op;
}
void mostrarMenu(){
	cout<<"[1] Agregar un pais."<<endl;
	cout<<"[2] Modifcar una caracteristica."<<endl;
	cout<<"[3] Eliminar un pais."<<endl;
	cout<<"[4] Buscar un pais."<<endl;
	cout<<"[5] Consulta por continente."<<endl;
	cout<<"[6] ."<<endl;
	cout<<"[7] ."<<endl;
	cout<<"[8] Salir."<<endl;
}
void mostrarLista(int contador, VectorPais planeta){
	if(contador==0){
		cout<<"\n*Nuesta lista de paises esta vacia. Agregue un pais*\n";
	}else{
	cout<<"\n---<De momento esta es nuesta lista de paises>---"<<endl;
	for(int i=0;i<contador;i++){
		cout<<"-"<<planeta.getPais(i).getNombre()<<endl;
	}
	}
}
Pais paisesPredeterminados(int cont){
	string nombre[2]={"Mexico","Argentina"};
	string continente[2]={"America","America"};
	string capital[2]={"Ciudad de Mexico","Buenos Aires"};
	string moneda[2]={"Peso mexicano","Peso argentino"};
	string idioma[2]={"Espanol","Espanol"};
	string poblacion[2]={"10","12"};
	string tamano[2]={"23","24"};
	Pais paisesCero(nombre[cont],continente[cont],capital[cont],moneda[cont],idioma[cont],poblacion[cont],tamano[cont]); 
	
	return paisesCero;
}
int main (int argc, char *argv[]) {
	int cont=0, opcion=8, posicion;
	VectorPais mundo(50);
	Pais nuevoPais;
	for(int j=0; j<2;j++){
		nuevoPais=paisesPredeterminados(j);
		mundo.agregarPais(nuevoPais);
		cont++;
	}
	do{
		system("cls");
		cout<<"\t---<Bienvenido>---\n";
		mostrarMenu();
		mostrarLista(cont,mundo);
		cout<<"\n[Elige una opcion]: "; cin>>opcion;
		switch(opcion){
		case 1:
			system("cls");
			cout<<"\t---<Bien, agreguemos un pais>---"<<endl;
			nuevoPais=agregarUnPais();
			mundo.agregarPais(nuevoPais);
			cout<<"\n*El pais fue agregado*"<<endl;
			opcion=volverAMenu();
			cont++;
		break;
		case 2:
			system("cls");
			cout<<"---<Modifiquemos>---"<<endl;
			cout<<"Pais a modificar: ";
			posicion=buscar(mundo, cont);
			if(posicion>=0){
				mostrarData(mundo,posicion);
			}else{
				cout<<"\n<Ese pais aun no se encuentra en la lista>\n";
			}
			modificar(mundo, cont, posicion);
			opcion=volverAMenu();
		break;
		case 3:
			system("cls");
			opcion=volverAMenu();
		break;
		case 4:
			system("cls");
			cout<<"---<Buscar>---"<<endl;
			cout<<"Escribe el pais que buscas: "; 
			posicion=buscar(mundo, cont);
			if(posicion>=0){
				mostrarData(mundo,posicion);
			}else{
				cout<<"\n<Ese pais aun no se encuentra en la lista>\n";
			}
			opcion=volverAMenu();
		break;
		case 5:
			system("cls");
			consultaPorContinente(mundo, cont);
			opcion=volverAMenu();
		break;
		case 6:
			system("cls");
			opcion=volverAMenu();
		break;
		case 7:
			system("cls");
			opcion=volverAMenu();
		break;
		}
		}while(opcion!=8);
	system("cls");
	cout<<"\n--Adios--"<<endl;
	return 0;
}

