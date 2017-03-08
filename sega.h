#include <iostream>
#pragma once
#include "videojuegos.h"
#include <string>
using namespace std;

class sega : public videojuegos{
	public:
		sega(string,int,string,int,string,int,int,double);
		~sega();
};