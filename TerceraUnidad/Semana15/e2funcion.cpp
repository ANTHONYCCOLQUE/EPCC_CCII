/*2. e2funcion.cpp.
Escriba una función de tal forma que usted pueda invocar a cualquiera de
las funciones siguientes.
float sumafi(float a, int b) {
return a + b;
}
double restalf(float a, double b) {
return a - b;
}
long multiplicaid(int a, long b) {
return a * b;
}

Forma de llamr a lafuncion
funcion(sumafi, 4.0f, 5);
funcion(restalf, 4.0f, 5.0);
funcion(multiplicaid, 4, 5L);
*/


#include <iostream>
using namespace std;

float sumafi(float a, int b){        //Funcion suma que devuelve un float
	return a + b;
}

double restalf(float a, double b){       //Funcion resta que devuelve double{
	return a - b;
}

long multiplicaid(int a, long b){        //Funcion multip que devuelve un long
	return a * b;
}

	
template<class T,class A,class B>     //Plantilla 
T funcion(T (funcion)(A,B),A a,B b)         //Funcion para llamar a otra funcion
{
	return funcion(a,b);         //Retorna funcion
}

int main()       {
	
	//Llamando a las funciones
	cout<<"Suma: "<<funcion(sumafi, 4.0f, 5)<<endl;    
	cout<<"Resta: "<<funcion(restalf, 4.0f, 5.0)<<endl;            
	
	cout<<"Multiplicacion: "<<funcion(multiplicaid, 4, 5L)<<endl;          

	return 0;
}
