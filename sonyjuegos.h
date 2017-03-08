#include <iostream>
#pragma once
#include "videojuegos.h"
#include <string>
using namespace std;

class sonyjuegos : public videojuegos{
	public:
		sonyjuegos(string,int,string,int,string,int,int,double);
		~sonyjuegos();
};