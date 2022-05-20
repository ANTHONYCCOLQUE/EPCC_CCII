/*Exercise 2. convertSeconds.cpp

• Write a program that converts a total number of
seconds to hours, minutes, and seconds. • It should (1) prompt the user for 
input, (2) read an integer from the keyboard, (3) calculate the result, and
(4) use std::cout to display the output. Enter the number of seconds to 
convert: 5000     5000 seconds = 1 hours, 23 minutes, and 20 seconds*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int n;				// creamos la variable entera n;
	int h=0, m=0, s=0;//  creamos variables con valor 0;
	cout<<"Introduzca el numero de segundos a convertir. ";
	cin>>n; 		// pedimos segunds y guardamos en variable n;
	
	cout<<n<<" segundos = ";
	
	if ( n >= 3600 ){  // si entran al bucle se hace dicha operacion
		h = n/3600;		// caso contrario las 'h' valdran 0
		n = n%3600;
	}
	if ( n >= 60 && n <= 3599 ){   // si entran al bucle se hace dicha operacion
		m = n/60;				// caso contrario los 'm' valdran 0
		n = n%60;
	}
	if ( n >= 0 && n <= 59 ){	// si entran al bucle se hace dicha operacion
		s = n;			// caso contrario los 's' valdran 0
		
	}
	
	
	cout<<h<<" horas "<<m<<" minutos "<<s<<" segundos. "<<endl;
	
	return 0;
}

