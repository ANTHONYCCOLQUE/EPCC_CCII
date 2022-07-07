/*6. sumarango.cpp. Escriba una función template que tome un único
parámetro de tipo T y que acepte cuatro argumentos: un array de tipo T,
un índice de inicio, un índice de finalización (inclusivo) y un valor inicial
opcional. La función debe devolver la suma de todos los elementos del
array en el rango especificado y el valor inicial.*/

#include <iostream>
#include <vector>
using namespace std;

template<typename T>

T SRango(vector<T> Vec, int ini, int fin, T val = 0){
	
	T Suma = Vec[ini] + val;
	
	
	for(int i = ini + 1; i <= fin; i++){
		Suma += Vec[i];
	}
	
	return Suma;
	
}
	
int main(int argc, char *argv[]) {
		

	vector<int> A = {1,3,5,7,9,11};
	
	cout<<"Suma de 1 a 5: "<<SRango(A,1,5);
	
	
	
	return 0;
	}
