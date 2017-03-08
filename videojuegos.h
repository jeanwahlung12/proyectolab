#pragma once
#include <string>
#include <iostream>
using namespace std;

class videojuegos{
	private:
		string nombre;
		int ano;
		string consola;
		int numjugadores;
		string genero;
		int estado;
		int numserie;
		double precio;
	public:
		videojuegos();
		videojuegos(string,int,string,int,string,int,int,double);//constructor sobrecargado
		~videojuegos();
		//setters
		void setnombre(string);
		void setano(int);
		void setconsola(string);
		void setnumjugadores(int);
		void setgenero(string);
		void setestado(int);
		void setnumserie(int);
		void setprecio(double);
		//getters
		string getnombre();
		int getano();
		string getconsola();
		int getnumjugadores();
		string getgenero();
		int getestado();
		int getnumserie();
		double getprecio();


};