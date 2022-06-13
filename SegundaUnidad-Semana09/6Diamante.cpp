/*6. diamante.cpp
El programa diamante toma como entrada una letra y la muestra en forma
de diamante. Dada una letra, imprime un diamante que comienza con 'A',
con la letra proporcionada en el punto más ancho.
Requisitos
* La primera fila contiene una 'A'.
* La última fila contiene una 'A'.
* Todas las filas, excepto la primera y la última, tienen exactamente dos
letras idénticas.
* Todas las filas tienen tantos espacios finales como espacios iniciales. (Esto
podría ser 0).
* El diamante es simétrico horizontalmente.
* El diamante es verticalmente simétrico.

* El diamante tiene una forma cuadrada (el ancho es igual a la altura).
* Las letras forman una forma de diamante.
* La mitad superior tiene las letras en orden ascendente.
* La mitad inferior tiene las letras en orden descendente.
* Las cuatro esquinas (que contienen los espacios) son triángulos.
En los ejemplos, los espacios se indican mediante ·.
Diamante para la letra 'A':
A
Diamante para la letra 'C':
··A··
·B·B·
C···C
·B·B·
··A··
Diamante para la letra 'E':
····A····
···B·B···
··C···C··
·D·····D·
E·······E
·D·····D·
··C···C··
···B·B···
····A····
Utilice la cabecera <sstream> para crear el diamante, luego utilice una
función adicional para mostrar el diamante.*/
#include <iostream>
#include<sstream>
#include<string>
using namespace std;

class Diamante{
	
private:
	char letra;
		
public:
	Diamante();
	Diamante(char _letra)
	{letra=_letra;
	}
	~Diamante();
	string generarDiamante();
};

Diamante::Diamante(){
	letra = 'A';
}

Diamante::~Diamante(){
}

string Diamante::generarDiamante(){
	string figura;
	stringstream ss;
	int ast = letra - 65;
	int medio = 0;
	
	char i = 65;
	
	while (i <= letra)
	{ 
		for (int j = 0; j < ast; j++)
			ss << "*";
		if (medio > 0)
		{
			ss << i;
			for (int j = 0; j < medio; j++)
				ss << "*";
			ss << i;
			medio++;
		}
		else
			ss << i;
		for (int j = 0; j < ast; j++)
			ss << "*";
		
		ss<<"\n";
		ast--;medio++;i++;
	}
	
	i -= 2;
	ast = 1;
	medio -= 4;
	
	while (i >= 'A')
	{
		for (int j = 0; j < ast; j++)
			ss << "*";
		if (medio > 0)
		{
			ss << i;
			for (int j = 0; j < medio; j++)
				ss << "*";
			
			ss<<i;
			medio--;
		}
		else
			ss << i;
		for (int j = 0; j < ast; j++)
			ss << "*";
		
		ss<<"\n";
		ast++;medio--;i--;
	}
	figura = ss.str();
	return figura;
}


int main(int argc, char *argv[]) {
	
	Diamante d1('D');
	cout<<d1.generarDiamante();
	
	
	return 0;
}

