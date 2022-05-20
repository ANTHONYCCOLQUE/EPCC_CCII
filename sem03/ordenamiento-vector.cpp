/*Your job is to write a program that reads integers from
the standard input, sorts them into ascending order, and
then prints the sorted numbers, one per line.*/
#include <iostream>
#include<algorithm>
using namespace std;

int main(int argc, char *argv[]) {
	//creamos un arreglo de enteros y una variable entera 
	int m[999], n; 
	
	//definimos tamaño del vector
	cout<<"Digite cantidad de numeros: ";
	cin>>n;
	
	for ( int i =0 ; i < n ; i++ ){
		cout<<"Digite numero: ";
		cin>>m[i];  // guardamos los numeros en el vector
	}
	
	sort (m, m+n);  // uso de la funcion sort para ordenar los numeros
	
	cout<<"Numeros ordenados ascendentemente: "<<endl;
	for ( int i = 0 ; i < n ; i++ ){
		cout<<m[i]<<endl; //mostramos los numeros ordenados
	}						//en diferentes lineas
	
	return 0;
}

