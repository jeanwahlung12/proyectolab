#include <iostream>
#include <dirent.h>
# include <stdlib.h>
# include <stdio.h>
# include <fstream>
# include <sys/types.h>
# include <sys/stat.h>
using namespace std;

void creardirectorio(){
	cout << "1 crear carpeta\n 2 crear archivo";
	string opcion;
	cin >> opcion;
	if (opcion=="1")
	{

	
	cout << "Ruta " << endl;
		string ruta;
		cin >> ruta;
		cout << "Nombre de la carpeta: ";
		string carpeta;
		cin >> carpeta;
		string rutatotal= ruta+carpeta;
		if (mkdir(rutatotal.c_str(),0777) ==0)
			cout << " la carpeta a sido creada correctamente " << endl;
		else
			cout << "a ocurrnido un error " << endl;
		creardirectorio();
	}
	else if(opcion =="2"){
		cout << "Ruta:" << endl;	
				string ruta;
		cin >> ruta;
		cout << " ingrese el nombre del archivo :";
		string archivo;
		cin >> archivo;
		string rutatotal;
		rutatotal=ruta+archivo+".txt";
		FILE* arch;
		
		if(arch = fopen(rutatotal.c_str(),"a"))
			cout << " el archivo a sido creado correctamente" << endl;
		else
			cout << "a ocurrido un error" << endl;
		creardirectorio();

	}
	

	
	else{
		creardirectorio();
	}


}
void escribir(){
	ofstream archivo;
	archivo.open("prueba.txt",ios::out);


	if(archivo.fail()){
		cout << " no se pudo abrir " << endl;
		exit(1);
	}
	archivo << " 			hello world		" << endl;
	archivo << " nombre: ";
}

int main()
{
//creardirectorio();
	escribir();
	return 0;
}