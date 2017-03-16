#include <iostream>
#include <string>
#include "consolas.h"

consolas:: consolas(){
	anosalida=0;
	modelo="";
	estado=0;
	numserie=0;
	precio =0;
}

consolas:: consolas(int ano, string model,int estad,int num,double prize){
	anosalida=ano;
	modelo=model;
	estado = estad;
	numserie = num;
	precio = prize;
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
 void consolas::write(ofstream& out){
	out.write(reinterpret_cast<char*>(&anosalida), sizeof(anosalida));
	out.write(reinterpret_cast<char*>(&modelo) , sizeof(modelo));
	out.write(reinterpret_cast<char*>(&estado), sizeof(estado));
	out.write(reinterpret_cast<char*>(&numserie), sizeof(numserie));
	out.write(reinterpret_cast<char*>(&precio), sizeof(precio));

}
 void consolas::read(ifstream& in){
	in.read(reinterpret_cast<char*>(&anosalida), sizeof(anosalida));
	in.read(reinterpret_cast<char*>(&modelo) , sizeof(modelo));
	in.read(reinterpret_cast<char*>(&estado), sizeof(estado));
	in.read(reinterpret_cast<char*>(&numserie), sizeof(numserie));
	in.read(reinterpret_cast<char*>(&precio), sizeof(precio));

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

void consolas::setprecio(double num){
	precio = num;
}

double consolas::getprecio(){
	return precio;
}
	


