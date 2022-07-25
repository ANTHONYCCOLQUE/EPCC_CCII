/*1. e1multiplicar.cpp.
Implemente una funci�n que reciba dos par�metros, una matriz "x" y un
valor, que multiplique los elementos de dicha matriz por ese valor.

La implementaci�n debe funcionar para cualquier tama�o de matriz
tridimensional.
La implementaci�n debe deducir el tama�o para cada dimensi�n.
Forma de llamar a la funci�n multiplicar(x, 4); significa que cada
elemento de la matriz se multiplicar� por 4.
Implemente adem�s una funci�n para imprimir la matriz tridimensional.*/
#include <iostream>
using namespace std;

template<size_t I,size_t J,size_t K>    //plantilla valor integrad en tama�o dematriz
void mostrar(int (&matriz)[I][J][K]){
	for (size_t i = 0; i<I; i++){    // mostrar datos
		for (size_t j = 0; j < J; j++){	
			for (size_t k = 0; k < K; k++){
				cout<<matriz[i][j][k]<<" ";        
			}   
		}
	}
	
}

template<size_t I,size_t J,size_t K>        
void multiplicar(int (&matriz)[I][J][K], int dat){
	for (size_t i = 0; i<I; i++){           
		for (size_t j = 0; j < J; j++){
			for (size_t k = 0; k < K; k++){
				matriz[i][j][k] *= dat;       // multiplicar
			}   
		}
	}
}

int main(){
	int x[3][4][2] = {{{1,2},{4,5},{7,8},{1,2}},
					 {{10,11},{13,14},{16,17},{1,2}},
					 {{19,20},{22,23},{25,26},{1,2}}};
	cout<<"Matriz: "<<endl;
	mostrar(x);
	multiplicar(x,4);
	cout<<"\nMatriz multiplicada: "<<endl;
	mostrar(x);
	
	return 0;
}
