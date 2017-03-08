#include <iostream>
#pragma once
#include "videojuegos.h"
#include <string>
using namespace std;

class electronicarts : public videojuegos{
	public:
		electronicarts(string,int,string,int,string,int,int,double);
		~electronicarts();
};