#include "venta.h"
#include <string>
#include <vector>
#include "consolas.h"
#include "videojuegos.h"
#include "usuario.h"

venta::venta(){
	nombrecliente="";
	horafinalizada="";
	subtotal=0.0;
}

void venta::setnombrecliente(string nom){
	nombrecliente=nom;
}
void venta::setvideogames(videojuegos* video){
	 videogames.push_back(video);

}
void venta::setconsoles(consolas* con){
	 consoles.push_back(con);

}
void venta::setuser(string use){
	user=use;
}
void venta::sethorafinalizada(string hora){
	horafinalizada=hora;

}
void venta::setsubtotal(double sub){
	subtotal=sub;
}

string venta::getnombrecliente(){
	return nombrecliente;

}


videojuegos* venta::getvideogames(int num){
	return videogames[num];
}
consolas* venta::getconsoles(int num){
	return consoles[num];
}
string venta::getuser(){
	return user;
}
string venta:: gethorafinalizada(){
	return horafinalizada;
}
double venta:: getsubtotal(){
	return subtotal;
}

venta::~venta(){
	
}