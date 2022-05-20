#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//definimos una matriz de tamaño 20x20
	
	int m[20][20];
	
	
	cout<<"*|\t";
	for ( int i=1; i<=10 ; i++){
		cout<<i<<"\t";  // mostramos 'i' con un tabulador
		
	}
	cout<<"\n----------------------------------------------------------------------------------\n";
	for ( int i=1,a=1 ; i<=10; i++, a++ ){
		cout<<a<<"|\t";   //primer ciclo 
		for ( int j=1; j<=10; j++){
							//segundo ciclo 
			m[i][j] = i*j;	// se guarda la multiplicaion en dicha matriz
			cout<<m[i][j]<<"\t";//mostramos en pantalla
			
		cout<<endl;
	}
	return 0;
}
