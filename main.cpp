#include <stdio.h>      
#include <time.h> 
#include "bandai.h"
#include "consolas.h"
#include "electronicarts.h"
#include "usuario.h"
#include "usuariovendedor.h"
#include "usuarioadmin.h"
#include "ubisoft.h"
#include "videojuegos.h"
#include "venta.h"
#include "squareenix.h"
#include "sonyjuegos.h"
#include "microsoftjuegos.h"
#include "nintendojuegos.h"
#include "sega.h"
#include "nintendo.h"
#include "konami.h"
#include "sony.h"
#include "microsoft.h"
#include <iostream>	
#include <string>
#include <sstream>
#include <vector>
#include <fstream>
#include <dirent.h>
# include <stdlib.h>
# include <fstream>
# include <sys/types.h>
# include <sys/stat.h>
void creardirectorio();//crea carpeta de ventas
void creararchivo(venta*,int ,int);//crea un archivo de ventas
void escribir(string,venta*,int,int);//escribe en el archivo dentro de ventas
void creardirectorio2();// crea carpeta de usuarios
void creararchivo2(usuario*,int,int,string,string);// crea archivo de usuario
void escribir2(string,usuario*,int,int,string,string);// escribe en el archivo de usuario
string gethora();
using namespace std;

int main(){//inicio del main
	creardirectorio();
	
	vector<consolas*> consoles;

	vector <videojuegos*> videogames;
	usuario* adminuser = new usuarioadmin("jean","access");
	int contnumseriejuegos= videogames.size();
	int contnumserieconsolas= consoles.size();
	char resp='s';
	while(resp =='s'){//inicio del while del menu
		char opusuario;
		cout << "entrar como \n 1/ usuarioadmin \n 2/usuariovendedor :"<< endl;
		cin >> opusuario;
		if (opusuario=='1'){// inicio if del opusuario1
			char opaccion;
			cout << " 1/Agregar \n 2/Modificar \n 3/Eliminar" << endl;
 			cin >> opaccion;
 			if(opaccion=='1'){ //inicio de if de opaccion ==1
   				bool agregarautentic =true;
					while (agregarautentic){// inicio while agregar
						char agregar;
						cout << "1/consolas \n 2/videojuegos"<< endl;
						cin >> agregar;
						if (agregar =='1'){// inicio del if de agregar==1
							int anosalida;
							string modelo;
							char marcaconsola;
							int estado;
							int numserie;
							double precio;
							cout << "ingrese el año de salida :"<< endl;
							cin >> anosalida;
							cout << "ingrese el estado del 1-10: " << endl;
							cin >> estado;
							cout << " ingrese el precio de la consola:"<< endl;
							cin >> precio;
							numserie =contnumserieconsolas;
							contnumserieconsolas++;
							cout << "ingrese la marca \n 1/Microsft \n 2/Sony \n 3/nintendo :"<< endl;
							cin >> marcaconsola;
							if(marcaconsola=='1'){// inicio if de marca consola ==1
									cout << "ingrese el modelo 1/Xbox \n 2/Xbox360 \n 3/Xboxone" << endl;
									cin >> modelo;
									if (modelo=="1"){
										modelo= "Xbox";
									}
									else if (modelo=="2"){
										modelo = "Xbox360";
									}
									else if (modelo=="3"){
										modelo = "Xboxone";
									}

									microsoft* microsoftconsole = new microsoft(anosalida,modelo,estado,numserie,precio);
									 consoles.push_back (microsoftconsole);
									
									/*ofstream fichero ("consola.dat", ios::binary);
									 fichero.write((char*)&microsoftconsole, sizeof(microsoft));
									 fichero.close();

									 ifstream leerFichero;
									 string m;
									 leerFichero.open("consola.dat", ios::binary);
									 leerFichero.read(reinterpret_cast<char*>(&microsoftconsole), sizeof(microsoftconsole));
									 leerFichero >> m;
									 cout << "MOdelo" << m ;
									 leerFichero.close();*/

									cout << "el precio es :" << precio <<endl;
									//microsoft* microsoftconsole = new microsoft(anosalida,modelo,estado,numserie,precio);
									consoles.push_back (microsoftconsole);
							}// fin if de marca consola ==1
							else if(marcaconsola=='2'){// inicio de marca consola ==2
								cout << "ingrese el modelo 1/Play Station 1 \n 2/ Play Station \n 3/Play Station 3 \n 4/ Play Station 4\n 5/ PSP \n 6/ Psvita "<< endl;
								cin >> modelo;
								if (modelo=="1"){// inicio de if modelo ==1
									modelo = "Play Station 1";
								}// fin de if modelo ==1
								else if(modelo=="2"){//inicio de if modelo ==2
									modelo = " Play Station 2";
								}// fin de if modelo ==2
								else if(modelo=="3"){//inicio de if modelo ==3
									modelo = "Play Station 3";
								}//fin de if modelo==3
								else if(modelo == "4"){//inicio de if modelo ==4
									modelo = "Play Station 4";
								}//fin de if modelo ==4
								else if(modelo =="5"){// inicio de if modelo ==5
									modelo = "PSP";
								}// fin de if modelo==5
								else if(modelo == "6"){// inicio  de if modelo ==6
									modelo = "Psvita";
								}// fin de if modelo ==6
									sony* Sonyconsola = new sony(anosalida,modelo,estado,numserie,precio);
									consoles.push_back (Sonyconsola);
							}// fin marca consola ==2
							else if(marcaconsola=='3'){// inicio marcaconsola ==3
								cout << " ingrese el modelo 1/ Nintendo entertainment System \n2/ nintendo Wii U \n 3/nintendo Switch \n 4/ Gameboy \n 5/ Gameboy colors \n 6/Gameboy Advanced \n 7/ nintendo DS \n 8/ nintendo DSI \n 9/ nintendo 3DS \n 10/nintendo new 3DS :"<< endl;
								cin >> modelo;
								if(modelo == "1"){//inicio if modelo ==1
									modelo = "Nintendo entertainment System";
								}//fin if modelo==1
								else if(modelo =="2"){// inicio modelo ==2
									modelo = "Nintendo Wii U";
								}// fin modelo ==2
								else if(modelo == "3"){// inicio modelo ==3
									modelo = "Nintendo Switch";
								}// fin modelo == 3
								else if(modelo =="4"){// inicio modelo==4
									modelo = "Gameboy";
								}// fin modelo ==4
								else if(modelo=="5"){// inicio modelo == 5
									modelo ="Gameboy colors";
								}// fin modello ==5
								else if(modelo=="6"){// inicio modelo ==6
									modelo = "Gameboy Advanced";
								}// fin modelo ==6
								else if (modelo == "7"){//inicio modelo ==7
									modelo = "Nintendo DS";
								}// fin modelo ==7
								else if(modelo == "8"){//inicio modelo ==8
									modelo ="Nintendo DSI";
								}// fin modelo ==8
								else if(modelo=="9"){// inicio modelo ==9
									modelo = "Nintendo 3DS";
								}// fin modelo ==9
								else if(modelo == "10"){//inicio modelo ==10
									modelo = "Nintendo New 3DS";
								}// fin modelo == 10
								nintendo* nintendoconsola = new nintendo(anosalida,modelo,estado,numserie,precio);
								consoles.push_back (nintendoconsola);
							}// fin marca consola ==3

						}// fin del if de agregar ==1
						else if(agregar=='2'){//inicio del if de agregar ==2
							string  nombre;
							int ano;
							string consola;
							int numjugadores;
							string genero;
							int estado;
							int numserievideojuegos = contnumseriejuegos;
							contnumseriejuegos++;
							double precio;
							cout << "ingrese el nombre del video juego:" << endl;
							cin >> nombre;
							cout << "ingrese el año de lanzamiento: " << endl ;
							cin >> ano;
							cout << "ingrese el num de jugadores :" << endl ;
							cin >> numjugadores;
							cout << " ingrese el genero ;" << endl ;
							cin >> genero;
							cout << "ingrese el estado del 1-10 :" << endl ;
							cin >> estado;
							cout << "ingrese el precio del juego " << endl;
							cin >> precio; 
							cout << "ingrese para que compañia es el juego : \n 1/Sony \n  2/microsoft \n 3/nintendo \n 4/otras:" << endl;
							cin >>consola;
							if (consola =="1"){// inicio if de consola==1
								consola = "Sony";
								videojuegos* sonygame = new sonyjuegos(nombre,ano,consola,numjugadores,genero,estado,numserievideojuegos,precio);
								videogames.push_back (sonygame);
							}// fin if de consola ==1
							else if(consola =="2"){// inicio de if de consola ==2
								consola ="Microsoft";
								videojuegos* microsoftgame = new  microsoftjuegos(nombre,ano,consola,numjugadores,genero,estado,numserievideojuegos,precio);
								videogames.push_back(microsoftgame);
							}// inicio de if consola == 2
							else if(consola=="3"){// inicio if consola ==3
								consola = "Nintendo";
								videojuegos* nintendogame = new nintendojuegos(nombre,ano,consola,numjugadores,genero,estado,numserievideojuegos,precio);
								videogames.push_back(nintendogame);
							}// fin de if de consola==3
							else if(consola=="4"){// inicio de if consola ==4
								string companies;
								cout << " ingrese de cual compañia es el videojuego \n 1/Bandai \n 2/konami \n 3/ Square Enix \n 4/Electronic Arts \n 5/ SEGA \n 6/ Ubisoft " << endl;
								cin >> companies;
								if (companies=="1"){// inicio de if de companies==1
									cout << "ingrese para que consola es el videojuego \n 1/ microsoft \n 2/Sony \n 3/ Nintendo" << endl;
									cin >>consola;
									if(consola=="1"){
										consola="Microsoft";
									}
									else if(consola =="2"){
										consola="Sony";
									}
									else if(consola=="3"){
										consola = "Nintendo";
									} 
									videojuegos* bandaigames = new bandai(nombre,ano,consola,numjugadores,genero,estado,numserievideojuegos,precio);
									videogames.push_back(bandaigames);
								}// fin de if companies==1
								else if(companies =="2"){// inicio de if de companies ==2
									cout << "ingrese para que consola es el videojuego \n 1/ microsoft \n 2/Sony \n 3/ Nintendo" << endl;
									cin >>consola;
									if(consola=="1"){
										consola="Microsoft";
									}
									else if(consola =="2"){
										consola="Sony";
									}
									else if(consola=="3"){
										consola = "Nintendo";
									} 
									videojuegos* konamigames = new konami(nombre,ano,consola,numjugadores,genero,estado,numserievideojuegos,precio);
									videogames.push_back(konamigames);
								}// fin de companies ==2
								else if(companies=="3"){
									cout << "ingrese para que consola es el videojuego \n 1/ microsoft \n 2/Sony \n 3/ Nintendo" << endl;
									cin >>consola;
									if(consola=="1"){
										consola="Microsoft";
									}
									else if(consola =="2"){
										consola="Sony";
									}
									else if(consola=="3"){
										consola = "Nintendo";
									} 
									videojuegos* squareenixgames = new squareenix(nombre,ano,consola,numjugadores,genero,estado,numserievideojuegos,precio);
									videogames.push_back(squareenixgames);
								}	
								else if (companies=="4"){
									cout << "ingrese para que consola es el videojuego \n 1/ microsoft \n 2/Sony \n 3/ Nintendo" << endl;
									cin >>consola;
									if(consola=="1"){
										consola="Microsoft";
									}
									else if(consola =="2"){
										consola="Sony";
									}
									else if(consola=="3"){
										consola = "Nintendo";
									} 
									videojuegos* electronicartsgames = new electronicarts(nombre,ano,consola,numjugadores,genero,estado,numserievideojuegos,precio);
									videogames.push_back(electronicartsgames);
								}
								else if(companies=="5"){
									cout << "ingrese para que consola es el videojuego \n 1/ microsoft \n 2/Sony \n 3/ Nintendo" << endl;
									cin >>consola;
									if(consola=="1"){
										consola="Microsoft";
									}
									else if(consola =="2"){
										consola="Sony";
									}
									else if(consola=="3"){
										consola = "Nintendo";
									} 
									videojuegos* Segagames = new sega(nombre,ano,consola,numjugadores,genero,estado,numserievideojuegos,precio);
									videogames.push_back(Segagames);
								}
								else if(companies=="6"){
									cout << "ingrese para que consola es el videojuego \n 1/ microsoft \n 2/Sony \n 3/ Nintendo" << endl;
									cin >>consola;
									if(consola=="1"){
										consola="Microsoft";
									}
									else if(consola =="2"){
										consola="Sony";
									}
									else if(consola=="3"){
										consola = "Nintendo";
									} 
									videojuegos* ubisoftgames = new ubisoft(nombre,ano,consola,numjugadores,genero,estado,numserievideojuegos,precio);
									videogames.push_back(ubisoftgames);
								}
							}// fin de if consola ==4


						}//fin del if de agragar ==2
						cout << " desea continuar agregando? S/N :" << endl;
						string respagregar ;
						cin >> respagregar;
						if(respagregar== "N" || respagregar=="n"){
							agregarautentic = false;
						}
						
					}//fin while Agregar
 			}//fin del opaccion ==1
 			else if(opaccion=='2'){//inicio de if de opaccion==2
 				int opc,pos, newanio, newestado, newnumserie;
 				cout << "¿Que desea modificar?:\n1.Consolas\n2.Videojuegos: ";
 				cin >> opc;
 				if (opc==1){
 					for (int i = 0; i < consoles.size(); ++i){
 						cout << i << " "<< consoles[i]->getanosalida() << " " << consoles[i]->getmodelo() << " " << consoles[i]->getestado() << " " << consoles[i]->getnumserie() << endl;
 					}
 					cout<<"¿Que posición desea modificar?:";
 					cin >> pos;	
 					
 					while (pos<0 || pos>consoles.size()){

 						cout << "Posicion no existente, por favor ingrese la posicion correcta:";
 						cin >> pos;

 					}//fin condicion para la posicion a modificar

 					cout << "Ingrese el nuevo año de salida: ";
 					cin >> newanio;
 					cout << "Ingrese el nuevo estado (1-10): ";
 					cin >> newestado;


 					consoles[pos]->setestado(newestado);
 					consoles[pos]->setanosalida(newanio);

 					cout << "La consola ha sido modificada!!" << endl;
 					cout << "El producto ha quedado asi: " << consoles[pos]->getanosalida() << " " << consoles[pos]->getmodelo() << " " << consoles[pos]->getestado() << " " << consoles[pos]->getnumserie() << endl;

 				}//fin modificar consolas
 				if (opc==2){
 					//inicia modificar videojuegos
 					string newname, newconsola, newgenero;
 					int newyear, newgamers, newstatus, opc2;
 					double newprice;

 					cout << "MODIFICAR VIDEOJUEGOS" << endl;
 					
 					for (int i = 0; i < videogames.size(); ++i)
 					{
 						cout << i << ". " << videogames[i]->getnombre() << " " << videogames[i]->getano() << " " << videogames[i]->getconsola() << " " << videogames[i]->getnumjugadores() << " " << videogames[i]->getgenero() << " " << videogames[i]->getestado() << " " << videogames[i]->getnumserie() << videogames[i]->getprecio() << endl;
 					}
 					cout << "¿Que posición desea modificar?: ";
 					cin >> pos;
 					cout << "Ingrese el nuevo nombre del juego: ";
 					cin >> newname;
 					cout << "Ingrese el año: ";
 					cin >> newyear;
 					cout << "Ingrese la cantidad de jugadores: ";
 					cin >> newgamers;
 					cout << "Ingrese el genero:";
 					cin >> newgenero;
 					cout << "Ingrese el precio: ";
 					cin >> newprice;
 					cout << "Ingrese el estado(1-10): ";
 					cin >> newstatus;

 					cout << "Ingrese para que consola esta hecho: \n 1/Sony \n  2/microsoft \n 3/nintendo \n 4/otras: ";
 					cin >> opc2;
 		
 					switch (opc2){
 						case 1:
 							newconsola="Sony";
 						break;
 						case 2:
 							newconsola = "Microsoft";
 						break;
 						case 3:
 							newconsola = "Nintendo";
 						break;
 					}
 					videogames[pos]->setnombre(newname);
 					videogames[pos]->setano(newyear);
 					videogames[pos]->setnumjugadores(newgamers);
 					videogames[pos]->setgenero(newgenero);
 					videogames[pos]->setconsola(newconsola);
 					videogames[pos]->setestado(newstatus);
 					videogames[pos]->setprecio(newprice);

 					cout << "El producto ha sido modificado con exito!" << endl;
 					cout << "El producto quedo de la siguiente manera:" << endl;
 					cout << videogames[pos]->getnombre() << " " << videogames[pos]->getano() << " " << videogames[pos]->getconsola() << " " << videogames[pos]->getnumjugadores() << " " << videogames[pos]->getgenero() << " " << videogames[pos]->getestado() << " " << videogames[pos]->getnumserie() << videogames[pos]->getprecio() << endl;

 				}//fin modificar videojuegos 	

 			}// fin del opaccion ==2
 			else if(opaccion=='3'){// inicio de if de opaccion ==3
 				char opeliminar;
 				bool eliminar=true;
 				while(eliminar){
 					cout << "eliminar :\n 1/consola \n 2/videojuego :" ;
 					cin >> opeliminar;
 					cout << "" << endl;
 					if(opeliminar=='1'){
 						for (int i = 0; i < consoles.size(); ++i){
 							cout << i<<")"<<consoles[i]->getmodelo() << endl;
 						}
 						int pos;
 						cout << "ingrese la posicion que desea eliminar:"<< endl;
 						cin >> pos;
 						while(pos>consoles.size()){
 							cout << "ingrese la posicion que desea eliminar:"<< endl;
 							cin >> pos;
 						}
 						consoles.erase (consoles.begin()+(pos-1));
 					}
 					else if(opeliminar=='2'){
 						cout << "" << endl;
 						for (int i = 0; i < videogames.size(); ++i){
 							cout << i<<")"<<videogames[i]->getnombre() << endl;
 						}
 						int pos;
 						cout << "ingrese la posicion que desea eliminar:"<< endl;
 							cin >> pos;
 						while(pos>videogames.size()){
 							cout << "ingrese la posicion que desea eliminar:"<< endl;
 							cin >> pos;
 						}
 						videogames.erase (videogames.begin()+(pos-1));
 					}
 					cout << "desea continuar eliminando S/N:" << endl;
 					cin >> opeliminar;
 					if (opeliminar=='n'|| opeliminar=='N'){
 						eliminar=false;
 					}
 				}
 				
 			}// fin de if de opaccion ==3
 			

		}// fin del if de opusuario1 
		else if(opusuario=='2'){// inicio if del opusuario2
			bool opusuario2Autentic=true;
			string nombre;
			int moneycreated=0;
			string entrada = gethora();
			string salida;
			int contarticulos=0;
			cout << "ingrese su nombre: " << endl;
			cin >> nombre;
			while (opusuario2Autentic){// inicio while opusuario2autentic
				
				string horae=gethora();
				string horasalida;
				
				usuariovendedor* selluser = new usuariovendedor(nombre,horae,"");
				
				char opaccion;
				cout << "1/Agregar \n 2/Vender" << endl;
				cin >> opaccion;
				if(opaccion=='1'){// inicio if de opccion ==1
					bool agregarautentic =true;
					while (agregarautentic){// inicio while agregar
						char agregar;
						cout << "1/consolas \n 2/videojuegos"<< endl;
						cin >> agregar;
						if (agregar =='1'){// inicio del if de agregar==1
							int anosalida;
							string modelo;
							char marcaconsola;
							int estado;
							int numserie;
							double prizes;
							cout << "ingrese el precio : "<< endl;
							cin >> prizes;
							cout << "ingrese el año de salida :"<< endl;
							cin >> anosalida;
							cout << "ingrese el estado del 1-10: " << endl;
							cin >> estado;
							numserie =contnumserieconsolas;
							contnumserieconsolas++;
							cout << "ingrese la marca \n 1/Microsft \n 2/Sony \n 3/nintendo :"<< endl;
							cin >> marcaconsola;

							if(marcaconsola=='1'){// inicio if de marca consola ==1
									cout << "ingrese el modelo 1/Xbox \n 2/Xbox360 \n 3/Xboxone" << endl;
									cin >> modelo;
									if (modelo=="1"){
										modelo= "Xbox";
									}
									else if (modelo=="2"){
										modelo = "Xbox360";
									}
									else if (modelo=="3"){
										modelo = "Xboxone";
									}
									microsoft* microsoftconsole = new microsoft(anosalida,modelo,estado,numserie,prizes);
									 consoles.push_back (microsoftconsole);
							}// fin if de marca consola ==1
							else if(marcaconsola=='2'){// inicio de marca consola ==2
								cout << "ingrese el modelo 1/Play Station 1 \n 2/ Play Station \n 3/Play Station 3 \n 4/ Play Station 4\n 5/ PSP \n 6/ Psvita "<< endl;
								cin >> modelo;
								if (modelo=="1"){// inicio de if modelo ==1
									modelo = "Play Station 1";
								}// fin de if modelo ==1
								else if(modelo=="2"){//inicio de if modelo ==2
									modelo = " Play Station 2";
								}// fin de if modelo ==2
								else if(modelo=="3"){//inicio de if modelo ==3
									modelo = "Play Station 3";
								}//fin de if modelo==3
								else if(modelo == "4"){//inicio de if modelo ==4
									modelo = "Play Station 4";
								}//fin de if modelo ==4
								else if(modelo =="5"){// inicio de if modelo ==5
									modelo = "PSP";
								}// fin de if modelo==5
								else if(modelo == "6"){// inicio  de if modelo ==6
									modelo = "Psvita";
								}// fin de if modelo ==6
									sony* Sonyconsola = new sony(anosalida,modelo,estado,numserie,prizes);
									consoles.push_back (Sonyconsola);
							}// fin marca consola ==2
							else if(marcaconsola=='3'){// inicio marcaconsola ==3
								cout << " ingrese el modelo 1/ Nintendo entertainment System \n2/ nintendo Wii U \n 3/nintendo Switch \n 4/ Gameboy \n 5/ Gameboy colors \n 6/Gameboy Advanced \n 7/ nintendo DS \n 8/ nintendo DSI \n 9/ nintendo 3DS \n 10/nintendo new 3DS :"<< endl;
								cin >> modelo;
								if(modelo == "1"){//inicio if modelo ==1
									modelo = "Nintendo entertainment System";
								}//fin if modelo==1
								else if(modelo =="2"){// inicio modelo ==2
									modelo = "Nintendo Wii U";
								}// fin modelo ==2
								else if(modelo == "3"){// inicio modelo ==3
									modelo = "Nintendo Switch";
								}// fin modelo == 3
								else if(modelo =="4"){// inicio modelo==4
									modelo = "Gameboy";
								}// fin modelo ==4
								else if(modelo=="5"){// inicio modelo == 5
									modelo ="Gameboy colors";
								}// fin modello ==5
								else if(modelo=="6"){// inicio modelo ==6
									modelo = "Gameboy Advanced";
								}// fin modelo ==6
								else if (modelo == "7"){//inicio modelo ==7
									modelo = "Nintendo DS";
								}// fin modelo ==7
								else if(modelo == "8"){//inicio modelo ==8
									modelo ="Nintendo DSI";
								}// fin modelo ==8
								else if(modelo=="9"){// inicio modelo ==9
									modelo = "Nintendo 3DS";
								}// fin modelo ==9
								else if(modelo == "10"){//inicio modelo ==10
									modelo = "Nintendo New 3DS";
								}// fin modelo == 10
								nintendo* nintendoconsola = new nintendo(anosalida,modelo,estado,numserie,prizes);
								consoles.push_back (nintendoconsola);
							}// fin marca consola ==3

						}// fin del if de agregar ==1
						else if(agregar=='2'){//inicio del if de agregar ==2
							string  nombre;
							int ano;
							string consola;
							int numjugadores;
							string genero;
							int estado;
							int numserievideojuegos = contnumseriejuegos;
							contnumseriejuegos++;
							double precio;
							cout << "ingrese el nombre del video juego:" << endl;
							cin >> nombre;
							cout << "ingrese el año de lanzamiento: " << endl ;
							cin >> ano;
							cout << "ingrese el num de jugadores :" << endl ;
							cin >> numjugadores;
							cout << " ingrese el genero ;" << endl ;
							cin >> genero;
							cout << "ingrese el estado del 1-10 :" << endl ;
							cin >> estado;
							cout << "ingrese el precio del juego " << endl;
							cin >> precio; 
							cout << "ingrese para de que compañia es el juego : \n 1/Sony \n  2/microsoft \n 3/nintendo \n 4/otras:" << endl;
							cin >>consola;
							if (consola =="1"){// inicio if de consola==1
								consola = "Sony";
								videojuegos* sonygame = new sonyjuegos(nombre,ano,consola,numjugadores,genero,estado,numserievideojuegos,precio);
								videogames.push_back (sonygame);
							}// fin if de consola ==1
							else if(consola =="2"){// inicio de if de consola ==2
								consola ="Microsoft";
								videojuegos* microsoftgame = new  microsoftjuegos(nombre,ano,consola,numjugadores,genero,estado,numserievideojuegos,precio);
								videogames.push_back(microsoftgame);
							}// inicio de if consola == 2
							else if(consola=="3"){// inicio if consola ==3
								consola = "Nintendo";
								videojuegos* nintendogame = new nintendojuegos(nombre,ano,consola,numjugadores,genero,estado,numserievideojuegos,precio);
								videogames.push_back(nintendogame);
							}// fin de if de consola==3
							else if(consola=="4"){// inicio de if consola ==4
								string companies;
								cout << " ingrese de cual compañia es el videojuego \n 1/Bandai \n 2/konami \n 3/ Square Enix \n 4/Electronic Arts \n 5/ SEGA \n 6/ Ubisoft " << endl;
								cin >> companies;
								if (companies=="1"){// inicio de if de companies==1
									cout << "ingrese para que consola es el videojuego \n 1/ microsoft \n 2/Sony \n 3/ Nintendo" << endl;
									cin >>consola;
									if(consola=="1"){
										consola="Microsoft";
									}
									else if(consola =="2"){
										consola="Sony";
									}
									else if(consola=="3"){
										consola = "Nintendo";
									} 
									videojuegos* bandaigames = new bandai(nombre,ano,consola,numjugadores,genero,estado,numserievideojuegos,precio);
									videogames.push_back(bandaigames);
								}// fin de if companies==1
								else if(companies =="2"){// inicio de if de companies ==2
									cout << "ingrese para que consola es el videojuego \n 1/ microsoft \n 2/Sony \n 3/ Nintendo" << endl;
									cin >>consola;
									if(consola=="1"){
										consola="Microsoft";
									}
									else if(consola =="2"){
										consola="Sony";
									}
									else if(consola=="3"){
										consola = "Nintendo";
									} 
									videojuegos* konamigames = new konami(nombre,ano,consola,numjugadores,genero,estado,numserievideojuegos,precio);
									videogames.push_back(konamigames);
								}// fin de companies ==2
								else if(companies=="3"){
									cout << "ingrese para que consola es el videojuego \n 1/ microsoft \n 2/Sony \n 3/ Nintendo" << endl;
									cin >>consola;
									if(consola=="1"){
										consola="Microsoft";
									}
									else if(consola =="2"){
										consola="Sony";
									}
									else if(consola=="3"){
										consola = "Nintendo";
									} 
									videojuegos* squareenixgames = new squareenix(nombre,ano,consola,numjugadores,genero,estado,numserievideojuegos,precio);
									videogames.push_back(squareenixgames);
								}	
								else if (companies=="4"){
									cout << "ingrese para que consola es el videojuego \n 1/ microsoft \n 2/Sony \n 3/ Nintendo" << endl;
									cin >>consola;
									if(consola=="1"){
										consola="Microsoft";
									}
									else if(consola =="2"){
										consola="Sony";
									}
									else if(consola=="3"){
										consola = "Nintendo";
									} 
									videojuegos* electronicartsgames = new electronicarts(nombre,ano,consola,numjugadores,genero,estado,numserievideojuegos,precio);
									videogames.push_back(electronicartsgames);
								}
								else if(companies=="5"){
									cout << "ingrese para que consola es el videojuego \n 1/ microsoft \n 2/Sony \n 3/ Nintendo" << endl;
									cin >>consola;
									if(consola=="1"){
										consola="Microsoft";
									}
									else if(consola =="2"){
										consola="Sony";
									}
									else if(consola=="3"){
										consola = "Nintendo";
									} 
									videojuegos* Segagames = new sega(nombre,ano,consola,numjugadores,genero,estado,numserievideojuegos,precio);
									videogames.push_back(Segagames);
								}
								else if(companies=="6"){
									cout << "ingrese para que consola es el videojuego \n 1/ microsoft \n 2/Sony \n 3/ Nintendo" << endl;
									cin >>consola;
									if(consola=="1"){
										consola="Microsoft";
									}
									else if(consola =="2"){
										consola="Sony";
									}
									else if(consola=="3"){
										consola = "Nintendo";
									} 
									videojuegos* ubisoftgames = new ubisoft(nombre,ano,consola,numjugadores,genero,estado,numserievideojuegos,precio);
									videogames.push_back(ubisoftgames);
								}
							}// fin de if consola ==4


						}//fin del if de agragar ==2
						cout << " desea continuar agregando? S/N :" << endl;
						string respagregar ;
						cin >> respagregar;
						if(respagregar== "N" || respagregar=="n"){
							agregarautentic = false;
						}
						
					}//fin while Agregar

				}// fin if de opaccion ==1
				else if (opaccion=='2'){// inicio if de opaccion==2
					vector<consolas*> vconsolas;
					vector <videojuegos*> vvideojuegos;
					string nombrecliente;
					bool validateventa = true;
					cout << "ingrese el nombre del cliente: "<< endl;
						cin >> nombrecliente;
					while(validateventa){// inicio while validate ventas
						
						string nomusuario= selluser->getnombre();
						
						double subtotal=0;
						
						string tipocompra;
						cout << "compra de : \n 1/consolas \n 2/videojuegos"<< endl;
						cin >>tipocompra;
						if(tipocompra=="1"){
							cout << "---------- Las Consolas de venta son--------"<< endl;
							for (int i = 0; i < consoles.size(); ++i){
								cout << i<<") " << consoles[i]->getmodelo() << endl;
							}
							int position;

							cout << "ingrese la posicion en la que se encuetra el articulo que quiere comprar:"<< endl;
							cin >> position;
							while (position>consoles.size()){
								cout << "la posicion tiene que ser valida ingresela de nuevo: "<< endl;
								cin >>position;
							}
							vconsolas.push_back(consoles[position]);
							consoles.erase (consoles.begin()+ (position-1));

						}
						else if(tipocompra=="2"){
							cout << "---------- Los Juegos de Venta son ---------" << endl;
							for (int i = 0; i < videogames.size(); ++i){
								cout << i<< ") " << videogames[i]->getnombre() << endl;
							}
							cout << " ingrese la posicion en la que se encuentra el articulo que quiere comprar: "<< endl;
							int position;
							cin>> position;
							while(position>videogames.size()){
								cout << " la posicion tiene que ser valilda ingrese de nuevo: "<< endl;
								cin >>position;	
							}
							vvideojuegos.push_back(videogames[position]);
							videogames.erase (videogames.begin()+ (position-1));
						}
						string articulo;
						cout << "desea comprar otro articulo: S/N"<< endl;
						cin >> articulo;
						if(articulo=="n" || articulo=="N"){
							validateventa = false;
							venta* sell = new venta();
							sell->setnombrecliente(nombrecliente);
							sell->setuser(selluser->getnombre());
							sell->sethorafinalizada(gethora());
							int contconsolas=0;
							int contvideojuegos=0;
							
							for (int i = 0; i < vvideojuegos.size(); ++i){
								subtotal+=vvideojuegos[i]->getprecio();
								
								contarticulos++;
								sell->setvideogames(vvideojuegos[i]);
								contvideojuegos++;
								
							}
							
							
							for (int i = 0; i < vconsolas.size(); ++i){
								subtotal+=vconsolas[i]->getprecio();
								
								contarticulos++;
								sell->setconsoles(vconsolas[i]);
								contconsolas++;
							}
							moneycreated=subtotal;
							sell->setsubtotal(subtotal);
							
							creararchivo(sell,contconsolas,contvideojuegos);


						}

					}// fin del while validate ventas

				}//fin if de opaccion==2
				string finalize;
				cout << "Desea Finalizar sesion : S/N :";
				cin >> finalize;
				if (finalize=="s"|| finalize=="S"){
					opusuario2Autentic=false;
					selluser->sethorasalida(gethora());
					creardirectorio2();
					creararchivo2(selluser, moneycreated,contarticulos, entrada, gethora());

				}
				
				
			}// fin while opusuario2autentic
		}// fin del if de opusuario2
		else
			main();

	}// fin del while del menu
}//fin del main


string gethora(){
	time_t rawtime;

	time (&rawtime);
	string hora = ctime(&rawtime);
 	
 	return hora;


}



 

void creararchivo(venta* sell,int contador, int contador2){
	

	
	string ruta = "log_ventas/";
		
		
		string archivo = gethora()+".log";
		
		string rutatotal= ruta+archivo;
		FILE* arch;
		
		if(arch = fopen(rutatotal.c_str(),"a"))
			cout << " el archivo a sido creado correctamente" << endl;
		escribir(archivo, sell,contador,contador2);	

		

}

void creardirectorio2(){
	
	string ruta="";
	string carpeta ="Usuarios_log";
	string rutatotal;
	rutatotal=ruta+carpeta;
	if (mkdir(rutatotal.c_str(),0777) ==0)
		cout << " la carpeta a sido creada correctamente " << endl;
	
}

void creardirectorio(){
	
	string ruta="";
	string carpeta ="log_ventas";
	string rutatotal;
	rutatotal=ruta+carpeta;
	if (mkdir(rutatotal.c_str(),0777) ==0)
		cout << " la carpeta a sido creada correctamente " << endl;
	
	
}

void creararchivo2(usuario* user,int money,int contarticulos,string entrada, string salida){
	

	
	
		string ruta = "Usuarios_log/";
		
		
		string archivo = user->getnombre()+"_"+gethora()+".log";
		
		string rutatotal= ruta+archivo;
		FILE* arch;
		
		if(arch = fopen(rutatotal.c_str(),"a"))
			cout << " el archivo a sido creado correctamente" << endl;
		
		escribir2(archivo,user,money,contarticulos,entrada,salida);	
		
		

}
	

void escribir2(string ruta, usuario* user,int money,int contarticulos,string entrada, string salida){
	ofstream archivo;
	stringstream stringStream;
	string myString;
	stringStream << "./Usuarios_log/" << ruta;
	myString = stringStream.str();
	archivo.open(myString.c_str());


	if(archivo.fail()){
		cout << " no se pudo abrir " << endl;
		exit(1);
	}
	archivo << " 			Abby & Jean GameStore	" << endl << endl;
	archivo << "Nombre : "<< user->getnombre() << endl;
	archivo << "Hora Entrada:" << entrada<< endl;
	archivo << "Hora Salida: " << salida << endl << endl;
	
	
	archivo << "Cantidad de Articulos vendidos :" << contarticulos << endl;
	archivo << "Dinero Generado :" << money << endl;
	

	archivo.close();


}




void escribir(string ruta, venta* sell,int cont,int cont2){
	ofstream archivo;
	stringstream stringStream;
	string myString;
	stringStream << "./log_ventas/" << ruta;
	myString = stringStream.str();
	archivo.open(myString.c_str());


	if(archivo.fail()){
		cout << " no se pudo abrir " << endl;
		exit(1);
	}
	archivo << " 			Abby & Jean GameStore	" << endl << endl;
	archivo << "Fecha y Hora : "<< sell->gethorafinalizada() << endl;
	archivo << "Usuario:" << sell->getuser() << endl;
	archivo << "Nombre cliente: " << sell->getnombrecliente()<< endl << endl;
	archivo << "Cantidad de articulos :" << cont+cont2 << endl;
	for (int i = 0; i < cont; ++i){

		archivo << " Nombre De Articulo :" << i << sell->getconsoles(i)->getmodelo() << "      Precio: "<< sell->getconsoles(i)->getprecio() << endl;

	}

	for (int i = 0; i < cont2; ++i){

		archivo << " Nombre De Articulo :" << i << sell->getvideogames(i)->getnombre() << "      Precio: "<< sell->getvideogames(i)->getprecio() << endl ;




	}
	double total = (sell->getsubtotal() *0.15) + sell->getsubtotal();
	archivo << " " << endl;
	archivo << "Subtotal : " << sell->getsubtotal()<< endl;
	archivo << "Impuesto (15) porciento "<< endl;
	archivo << "total : " << total << endl;
	

	archivo.close();


}


