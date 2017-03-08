#include <iostream>
#include <string>
#pragma once

using namespace std;

class usuario{
	protected:
		string nombre;
	public :
		usuario();
		usuario(string);
		void setnombre(string);
		string getnombre();
		~usuario();


};