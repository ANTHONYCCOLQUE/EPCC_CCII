/*2. scrabbleClase.cpp
En el juego de Scrabble, cada ficha contiene una letra, que se usa para formar
palabras en filas y columnas, y una puntuación, que se usa para determinar el
valor de las palabras.
1. Escriba una definición para una clase llamada Ficha que represente fichas
de Scrabble. Los atributos de la clase Ficha deben incluir un caracter llamado
letra y un entero llamado valor.
2. Escriba un constructor que tome parámetros llamados letra y valor e
inicialice las variables de los atributos.
3. Escriba un método llamado imprimir que tome un objeto Ficha como
parámetro y muestre los atributos en un formato fácil de leer.
4. Escriba una definición para una clase llamada Scrabble que represente un
jugador de scrabble. Los atributos de la clase deben incluir un nombre para
identificar al jugador y una colección de 7 Fichas.
5. Escriba un método en Scrabble que genere las 7 fichas necesarias en forma
aleatoria.

6. Pruebe su clase Scrabble creando jugadores de scrabble (de 2 a 4) y los
muestre en pantalla*/
#include<vector>
#include<string>
#include<iostream>
#include<random>
#include<sstream>
using namespace std;

random_device rd;
mt19937 gen(rd());
uniform_int_distribution<char> letra('A','Z');
uniform_int_distribution<int> entero(1,7);

class Ficha{
private:
	char letra;
	int valor;
public:
	Ficha(){}
	Ficha(char _letra, int _valor){
		letra=_letra; 
		valor=_valor;
	}
	void print(){
		cout<<"Letra: "<<letra<<" --- Valor: "<<valor<<endl;
	}
};

class Scrabble{
private:
	string jugador;
	vector<Ficha> f;
public:
	Scrabble(){};
	Scrabble(string _nombre){
		jugador=_nombre;
	}
	void gen_fichas(){
		for(int i=0; i<7;i++)
			f.push_back(Ficha(char(letra(gen)),int(entero(gen))));
	}
	void imprimir(){
	cout<<"El jugador:"<<jugador<<endl;
	for(Ficha &it: f){
		it.print();
	}
	}
};

int main(int argc, char *argv[]){
	
	Scrabble *p = new Scrabble("aaaa");
	
	p->gen_fichas();
	p->imprimir();
		
	Scrabble *p1 = new Scrabble("bbbb");
	cout<<endl;
	
	p1->gen_fichas();
	p1->imprimir();
	
	Scrabble *p2 = new Scrabble("ccc");
	cout<<endl;
	
	p2->gen_fichas();
	p2->imprimir();
	
	Scrabble *p3 = new Scrabble("ddd");
	cout<<endl;
	
	p3->gen_fichas();
	p3->imprimir();
	
	return 0;
}
