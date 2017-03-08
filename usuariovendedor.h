#include <iostream>
#include "usuario.h"
#pragma once
#include <string>

using namespace std;

class usuariovendedor : public usuario{
	private:
		string horaentrada;
		string horasalida;
	public:
		usuariovendedor();
		usuariovendedor(string,string,string);
		~usuariovendedor();
		void sethorasalida(string);
		void sethoraentrada(string);
		string gethorasalida();
		string gethoraentrada();	

};