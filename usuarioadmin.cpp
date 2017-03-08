#include <iostream>
#include "usuarioadmin.h"
#include "usuario.h"
usuarioadmin::usuarioadmin(string nombre , string password) : usuario(nombre){
	contra=password;

}

usuarioadmin::usuarioadmin():usuario(nombre){
	contra="";
}
void usuarioadmin::setcontra(string password){
	contra=password;
}

string usuarioadmin::getcontra(){
	return contra;
}

usuarioadmin::~usuarioadmin(){

}