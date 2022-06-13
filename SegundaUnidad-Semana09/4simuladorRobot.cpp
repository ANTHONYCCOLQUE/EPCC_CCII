/*4. simuladorRobot.cpp
Escribir un simulador de robot.
Una fábrica de robots necesita un programa para verificar los movimientos
de sus robots.
Los robots tienen tres posibles movimientos:
* (D) Girar a la derecha
* (I) Girar a la izquierda
* (A) Avanzar una posición
Los robots se colocan en un plano cartesiano infinito (hipotético), mirando en
una dirección particular (norte, este, sur u oeste) en un punto {x, y}.
Luego, el robot recibe una serie de instrucciones
La cadena de letras "DAAIAI" significa:
* Gire a la derecha

* Avanzar dos veces
* Gire a la izquierda
* Avanzar una vez
* Gire a la izquierda una vez más
Digamos que un robot comienza en {7, 3} mirando hacia el norte. Luego de
ejecutar este flujo de instrucciones debería dejarlo en {9, 4} mirando al oeste.
Cree una clase robot con los atributos y métodos adecuados.*/
#include <iostream>
#include <math.h>
using namespace std;

class Robot
{
public:
	int x, y;
	string letras, direccion ;
	
public:
	Robot(int, int,string, string);
	bool verificar();
	void ejecutar();
	void mostrar();

};


Robot::Robot(int _x, int _y,string _direccion, string _letras )
{
	x = _x;
	y = _y;
	letras = _letras;
	direccion = _direccion;
	
}


void Robot::ejecutar()
{
int a=0;
while (letras[a]){
	switch(letras[a]){
	case 'D':
		if (direccion == "norte")
			direccion = "este"; 
		else if (direccion == "este")
			direccion = "sur";
		else if (direccion == "sur")
			direccion = "oeste";
		else if (direccion == "oeste")
			direccion = "norte";
		break;
	case 'I':
		if (direccion == "norte")
			direccion = "oeste";
		else if (direccion == "oeste")
			direccion = "sur";
		else if (direccion == "sur")
			direccion = "este";
		else if (direccion == "este")
			direccion = "norte";
		break;
	case 'A':
		if (direccion == "norte")
			y++;
		if (direccion == "sur")
			y--;
		if (direccion == "este")
			x++;
		if (direccion == "sur")
			x--;
		break;
	}
	a++;	
}
cout<<"el valor de 'x' "<<x<<endl;
}
	
void Robot::mostrar()
{
	ejecutar( );
	cout<< " ( " << x << " , " << y << " ) " << endl
		<< "Mirando al "<<direccion <<endl;
	
	
}

int main()
{	
	
	Robot robot(7, 3,"norte", "DAAIAI");
	robot.mostrar();
	
	
	
}
