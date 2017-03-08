#include <iostream>
#include <string>
#include "consolas.h"

consolas:: consolas(){
	anosalida=0;
	modelo="";
	estado=0;
	numserie=0;
}

consolas:: consolas(int ano, string model,int estad,int num){
	anosalida=ano;
	modelo=model;
	estado = estad;
	numserie = num;
}

void consolas::setanosalida(int anio){
	while(anio<0){
		cout << "Error tiene que ser mayor a 0" << endl;
		cout << " ingrese el año :";
		cin >> anio;
	}
	anosalida=anio;
}

void consolas::setmodelo(string model){
	modelo=model;
}

void consolas::setestado(int estad){
	if (estad <= 0){
		cout <<" esta demasiado dañada no queremos cosas dañadas en nuestra tienda" << endl;
		estad=0;	
	}
	while (estad>10){
		cout << " el estado se mide del 1-10"<< endl;
		cin >> estad;
	}
	estado=estad;
	
}

void consolas:: setnumserie(int num){
	numserie=num;
}

int consolas:: getanosalida(){
	return anosalida;
}

string consolas:: getmodelo(){
	return modelo;
}

int consolas::getestado(){
	return estado;
}
int consolas::getnumserie(){
	return numserie;
}

	
