#include <iostream>
#include <string>
#include "usuario.h"

usuario::usuario(){
	nombre="";
}

usuario:usuario(string nom){
	nombre=nom;
}
void usuario::setnombre(string nom){
	nombre=nom;
}
string usuario:: getnombre(){
	return nombre;
}

usuario::~usuario(){
	
}

