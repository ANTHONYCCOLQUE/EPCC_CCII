#include<iostream>
#include "LinkedList.h"
     
using namespace std;


int main()          {
	LinkedList Lista1;  //Lista 1    
	
	for (int i = 1, a = 2; i < 11; i++, a+=2)   {
		Lista1.insert(a);
	}
	cout<<"Mostrando Lista 1: ";
	Lista1.mostrar();         
	
	LinkedList Lista2;      //Lista 2
	
	for (int i = 10, a = 3; i <21; i++, a+=2)       
	{
		Lista2.insert(a);
	}
	cout<<"Mostrando Lista 2: ";
	Lista2.mostrar();         
	
	Lista1=Lista2;          //asignando
	cout<<"Asignacionm: ";
	Lista1.mostrar();          
	
	return 0;
}
