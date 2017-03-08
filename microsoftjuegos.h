#include <iostream>
#pragma once
#include "videojuegos.h"
#include <string>
using namespace std;

class microsoftjuegos : public videojuegos{
	public:
		microsoftjuegos(string,int,string,int,string,int,int,double);
		~microsoftjuegos();
};