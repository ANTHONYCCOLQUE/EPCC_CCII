/*5. cuadrático.cpp. Desarrolle una clase Cuadrática que represente una
función de la forma f(x) = ax2 + bx + c, donde x es un variable real
y a, b, c son constantes reales. La clase debe cumplir con los siguientes
requisitos:
a) Proporcione un constructor que tome los valores de a, b y c como
argumentos. Estos argumentos deben ser cero por defecto.
b) La clase debe proporcionar constructor copia y operador de
asignación
c) Proporcione el operador de llamada a función que tome un solo
argumento x y devuelva el valor f(x).*/
#include <iostream>
using namespace std;

class Cuadratica {
private:
	int a, b, c;
public:
	Cuadratica(int _a=0, int _b=0, int _c=0)
	{
		a = _a;
		b = _b;
		c = _c;
	}
	
	Cuadratica(const Cuadratica& f1){
		a = f1.a;
		b = f1.b;
		c = f1.c;
	}
		 
	Cuadratica operator=(const Cuadratica& f1){
			return Cuadratica(f1.a,f1.b,f1.c);
		}
		
	int operator()(int x) const {
		return (a * x * x )+( b * x )+ c;
		}
};

int main() {
	Cuadratica fun{4,3,5};  // 4x^2 + 3x + 5.
	Cuadratica t= Cuadratica(fun);
	t = fun;
	
	int fun3 = fun(1);
	
	cout<<"f(1)  =  4x^2 + 3x + 5 ----->";
	cout<<fun3 <<endl;
	
}
