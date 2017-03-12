#include <iostream>
#pragma once
#include "consolas.h"
using namespace std;

class sony : public consolas{
	public:
		sony(int,string,int,int,double);
		~sony();
};