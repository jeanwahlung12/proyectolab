#include <iostream>
#pragma once
#include "videojuegos.h"
#include <string>
using namespace std;

class konami : public videojuegos{
	public:
		konami(string,int,string,int,string,int,int,double);
		~konami();
};