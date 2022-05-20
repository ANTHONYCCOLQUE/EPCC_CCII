/*Ejercicio

Producto máximo de dos números en una secuencia
• Dada una secuencia de n números no negativos y mayores que
cero. • El objetivo es encontrar el mayor número que se pueda obtener
multiplicando dos números.

		Entrada: 					Entrada:
		3							10
		1 2 3 						8 1 6 3 4 10 3 9 14 2
		
		Salida: 					Salida:
		6							140   */
#include <iostream>
#include<algorithm>
#include<conio.h>

using namespace std;

int main(int argc, char *argv[]) {
	int numeros[99];
	int n;
	
	
	cout<<"Digite cantidad de numeros: ";
	cin>>n;
	
	for ( int i = 0; i < n; i++ ){
		cout<<"Digite numero: ";
		cin>>numeros[i];
	}
	
	sort(numeros,numeros+n);
	
	
	int a=1;
	for ( int i = n-1; i>= n-2; i-- ){
		a*= numeros[i];
	}
	cout<<"\nEl mayor numero numero de la multiplicacion de dos numeros es "<<a<<endl;
	
	getch();
	return 0;
}

