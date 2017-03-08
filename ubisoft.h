#include <iostream>
#pragma once
#include "videojuegos.h"
#include <string>
using namespace std;

class ubisoft : public videojuegos{
	public:
		ubisoft(string,int,string,int,string,int,int,double);
		~ubisoft();
};