/* Suma de 2 numeros

Entrada  {8,4,7,5,1,9}
Objetivo 11

Salida posicion [1 , 3]
*/

#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(int argc, char *argv[]) {
	vector <int> p={1,2,7,9,11,15};
	
	sort(p.begin(),p.end());
	cout<<p.back()<<endl;
	
	for ( auto v : p ) {
		cout<<v<<" ";
	}cout<<endl<<endl;
	
	 int *i = &p[0];
	 int *d = &p[5];
	 
	 int suma = 0;
	
	int obj = 5, izq=0, der=5;
	while ( suma != obj ){
		suma = *i + *d;
		
		if ( suma < obj ){
			i++;
			izq++;
		}
		else if ( suma > obj ){
			d--;
			der--;
		}
	 }
	cout<<"posicion es: "<<izq<<" -- "<<der<<endl;
	
	return 0;
}

