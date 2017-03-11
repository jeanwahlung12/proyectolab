#include <vector>
#include <iostream>
using namespace std;

int main(){

vector<int> numeritos;

int cont=0;

for (int i = 0; i < 10; ++i)
{
	cont++;
	numeritos.push_back(cont);
}
cout << "Numeros agregados";

for (int i = 0; i < numeritos.size()-1; ++i)
{
	cout << numeritos[i] << endl;
}

	numeritos[3]=150;

	cout << "Este el es nuevo valor del indice 3:" << numeritos[3];
return 0;
}
