#include <iostream>
#include <string>
#include <fstream>

#pragma once
using namespace std;
class consolas{
		private:
			int anosalida;
			string modelo;
			int estado;
			int numserie;
			double precio;
		public :
			consolas();
			consolas(int,string,int,int,double);//constructor sobrecargado
			//setters
			void setprecio(double);
			void setanosalida(int);
			void setmodelo(string);
			void setestado(int);
			void setnumserie(int);
			//getters
			double getprecio();
			int getanosalida();
			string getmodelo();
			int getestado();
			int getnumserie();
			void write(ofstream&);
			void read(ifstream&);
};
