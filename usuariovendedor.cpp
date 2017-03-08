#include <iostream>
#include "usuariovendedor.h"
#include "usuario.h"
usuariovendedor::usuariovendedor(string nombre , string horae, string horas) : usuario(nombre){
	horaentrada=horae;
	horasalida=horas;

}

usuariovendedor::usuariovendedor():usuario(nombre){
	horaentrada="";
	horasalida="";
}
void usuariovendedor::sethorasalida(string horas){
	horasalida=horas;
}

string usuariovendedor::gethoraentrada(){
	return horaentrada;
}

void usuariovendedor::sethoraentrada(string horae){
	horaentrada=horae;
}

string usuariovendedor::gethorasalida(){
	return horasalida;
}
usuariovendedor::~usuariovendedor(){

}