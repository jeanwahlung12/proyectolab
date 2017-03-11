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
#include <vector>
#include <fstream>
string gethora();
using namespace std;

int main(){//inicio del main
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
									microsoft* microsoftconsole = new microsoft(anosalida,modelo,estado,numserie);
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
									sony* Sonyconsola = new sony(anosalida,modelo,estado,numserie);
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
								nintendo* nintendoconsola = new nintendo(anosalida,modelo,estado,numserie);
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
 					//cout << "Ingrese el nuevo numero de serie: "
 					/*cin >> newnumserie;
 					for (int i = 0; i < consoles.size(); ++i)
 					{
 						while (newnumserie==consoles[i]->getnumserie()) 
 					}*/

 					consoles[pos]->setestado(newestado);
 					consoles[pos]->setanosalida(newanio);

 					cout << "La consola ha sido modificada!!" << endl;
 					cout << "El producto ha quedado asi: " << consoles[pos]->getanosalida() << " " << consoles[pos]->getmodelo() << " " << consoles[pos]->getestado() << " " << consoles[pos]->getnumserie() << endl;

 				}//fin modificar consolas
 				if (opc==2){
 					//inicia modificar videojuegos
 					string newname, newconsola, newgenero;
 					int newyear, newgamers, newstatus, newprice, opc2;

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

 			}// fin de if de opaccion ==3
 			

		}// fin del if de opusuario1 
		else if(opusuario=='2'){// inicio if del opusuario2
			bool opusuario2Autentic=true;
			while (opusuario2Autentic){// inicio while opusuario2autentic
				string nombre;
				string horae=gethora();
				string horasalida;
				cout << "ingrese su nombre: "<< endl;
				cin >> nombre;

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
									microsoft* microsoftconsole = new microsoft(anosalida,modelo,estado,numserie);
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
									sony* Sonyconsola = new sony(anosalida,modelo,estado,numserie);
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
								nintendo* nintendoconsola = new nintendo(anosalida,modelo,estado,numserie);
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


				}//fin if de opaccion==2
				string finalize;
				cout << "Desea Finalizar sesion : S/N :";
				cin >> finalize;
				if (finalize=="s"|| finalize=="S"){
					opusuario2Autentic=false;
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


