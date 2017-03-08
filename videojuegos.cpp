#include "videojuegos.h"
#include <iostream>
#include <string>

videojuegos::videojuegos(){
	nombre="";
	ano=0;
	consola="";
	numjugadores=0;
	genero="";
	estado=0;
	numserie=0;
	precio=0.0;
}

videojuegos::videojuegos(string nom,int anio,string con,int numj,string gen,int estad, int nums,double prize ){
	ano=anio;
	nombre=nom;
	consola=con;
	numjugadores= numj;
	genero=gen;
	estado=estad;
	numserie=nums;
	precio=prize;
}

videojuegos::~videojuegos(){

}

void videojuegos:: setnombre(string nom){
	nombre = nom;
}

void videojuegos::setano(int anio){
	while(anio<0){
		cout << "Error tiene que ser mayor a 0" << endl;
		cout << " ingrese el año :";
		cin >> anio;
	}
	ano=anio;
}

void videojuegos::setconsola(string console){
	consola = console;

}

void videojuegos::setnumjugadores(int numj){
	numjugadores= numj;
}

void videojuegos::setgenero(string gen){
	genero=gen;
}

void videojuegos::setestado(int estad){
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

void videojuegos::setnumserie(int nums){
	numserie= nums;
}

void videojuegos::setprecio(double prize){
	precio=prize;
}

string videojuegos::getnombre(){
	return nombre;
}

int videojuegos::getano(){
	return ano;
}

string videojuegos:: getconsola(){
	return consola;
}

int videojuegos:: getnumjugadores(){
	return numjugadores;
}

string videojuegos::getgenero(){
	return genero;

}

int videojuegos:: getestado(){
	return estado;
}

int videojuegos::getnumserie(){
	return numserie;
}

double videojuegos::getprecio(){
	return precio;
}