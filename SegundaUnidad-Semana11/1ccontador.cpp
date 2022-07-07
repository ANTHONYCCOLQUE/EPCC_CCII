/*1. contador.cpp. Implemente una clase Contador que represente un
contador de enteros simple. La clase debe satisfacer los siguientes
requisitos:
a) Proporcione un constructor que tome un solo argumento int que se
use para inicializar el valor del contador. El argumento debe ser cero
por defecto.
b) Sobrecarge los operadores de incremento prefijo y de incremento
posfijo para proporcionar un medio por el cual incrementar el valor
del contador.
c) Proporcione una función miembro valor() que devuelva el valor actual
del contador.
d) Además, la clase debe saber cuántos objetos Contador existen
actualmente. Proporcione una interfaz para consultar este valor. El
código no debe utilizar ninguna variable global. Use miembros
estáticos.*/

#include <iostream>
using namespace std;

class Contador{
private:
	int val;
	
	int nContador;
	static int CContador;
public:
	Contador(int _val=0){
		val = _val;
		//nCont = ++CCont;
	}
		
	~Contador(){}
		
	Contador operator++(){
		val++;
		return *this;
		}
	
	
	Contador operator++(int){
		Contador t = *this;
		++*this;
		return t;
		}
		
	int valor(){
		return val;
	}
	int cantCont(){
		return CContador;
	}
};

int Contador::CContador;
int main(){
	Contador cont=1;
	cont++;
	cont++;
	Contador cont2=3;//0
	cout <<"valort de contador: "<<cont.valor()<<endl;
	cout <<"Cantidad de contador: "<<cont.cantCont()<<endl;
	cont++;
	
	return 0;
}
