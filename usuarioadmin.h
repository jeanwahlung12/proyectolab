#include <iostream>
#include "usuario.h"
#pragma once
#include <string>

using namespace std;

class usuarioadmin : public usuario{
	private:
		string contra;
	public:
		usuarioadmin();
		usuarioadmin(string,string);
		~usuarioadmin();
		void setcontra(string);
		string getcontra();	

};