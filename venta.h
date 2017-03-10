#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "consolas.h"
#include "videojuegos.h"
#include "usuario.h"
using namespace std;

class venta{
	private:
		string nombrecliente;
		vector<videojuegos*> videogames;
		vector<consolas*> consoles;
		string user;
		string horafinalizada;
		double subtotal;
	public:
		venta();
	
		string getnombrecliente();
		videojuegos* getvideogames(int);
		consolas* getconsoles(int);
		string getuser();
		string gethorafinalizada();
		double getsubtotal();


		void setnombrecliente(string);
		void setvideogames(videojuegos*);
		void setconsoles(consolas*);
		void setuser(string);
		void sethorafinalizada(string);
		void setsubtotal(double);
		
		~venta();

};