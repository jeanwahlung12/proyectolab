#include <iostream>
#pragma once
#include "videojuegos.h"
#include <string>
using namespace std;

class nintendojuegos: public videojuegos{
	public:
		nintendojuegos(string,int,string,int,string,int,int,double);
		~nintendojuegos();
};