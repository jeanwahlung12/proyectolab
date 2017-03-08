#include <iostream>
#pragma once
#include "videojuegos.h"
#include <string>
using namespace std;

class bandai : public videojuegos{
	public:
		bandai(string,int,string,int,string,int,int,double);
		~bandai();
};