#include <iostream>
#pragma once
#include "videojuegos.h"
#include <string>
using namespace std;

class squareenix : public videojuegos{
	public:
		squareenix(string,int,string,int,string,int,int,double);
		~squareenix();
};