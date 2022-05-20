/*Exercise 1. convertTemperature.cpp

• Write a program that converts a temperature from Celsius
to Fahrenheit. • It should (1) prompt the user for input, (2) read a double
value from the keyboard, (3) calculate the result, and (4)
format the output to one decimal place. When it’s finished,
it should work like this:
Enter a temperature in Celsius: 24
24.0 C = 75.2 F

• Formula to do the conversion:

F = C × 9 / 5 + 32*/


#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	
	double tempC, f;  // creamos variable de tipo double
	
	cout<<"Digite temperatura en Celsius. ";
	cin>>tempC;  //pedimos temperatura y guardamos en variable tempC
	
	
	
	f = ((tempC * 9)/5 ) + 32;  //usamos la formula para convertir a faren...
	
	cout<<tempC<<".0 C = "<<f<<" F."<<endl;  // mostramos en pantalla el rstd.
	
	
	
	return 0;
}

