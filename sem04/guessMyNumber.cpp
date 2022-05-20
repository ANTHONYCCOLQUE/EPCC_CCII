/*Exercise 3. guessMyNumber.cpp

• The goal of this exercise is to program a Guess My Number game. When 
it’s finished, it should work like this:

I'm thinking of a number between 1 and 100 (including both). 
Can you guess what it is?
Type a number: 45
Your guess is: 45
The number I was thinking of is: 14
You were off by: 31

• To choose a random number, use the random library of C++
<random> https://en.cppreference.com/w/cpp/numeric/random*/
#include <iostream>
#include<random>
using namespace std;

int main(int argc, char *argv[]) {
	int a, n;
	
	random_device nr;
	default_random_engine eng(nr());
	uniform_int_distribution<int> distr( 1,100);
	
	a = distr(eng);
	
	cout<<"¿Puedes adivinar que numero es?"<<endl;
	cout<<"Escriba un numero: ";
	cin>>n;
	
	cout<<"Tu conjetura es: "<<n<<endl;
	cout<<"El numero en el que estaba pensando es: "<<a<<endl;
	n = a- n;   // restamos para sacar la diferencia del num original
	if ( n < 0 ){		//si sale negativo volvemos a positivo 
		n *= -1;
		cout<<"Te pasaste por "<<n<<endl;
	}
	else {
						//caso contrario que muestre que falta y no que te pasaste
		cout<<"Te faltaba "<<n<<endl;
	}
	
}

