#include <iostream>
#include <string>
#pragma once
using namespace std;
class consolas{
		private:
			int anosalida;
			string modelo;
			int estado;
			int numserie;
		public :
			consolas();
			consolas(int,string,int,int);//constructor sobrecargado
			//setters
			void setanosalida(int);
			void setmodelo(string);
			void setestado(int);
			void setnumserie(int);
			//getters
			int getanosalida();
			string getmodelo();
			int getestado();
			int getnumserie();
};
