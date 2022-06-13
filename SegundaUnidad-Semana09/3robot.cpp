#include <iostream>
#include<sstream>
#include<vector>
#include<random>

using namespace std;

random_device rd;
mt19937 gen(rd());
uniform_int_distribution<char> rand_ascii('A','Z');
uniform_int_distribution<int> rand_int(0,9);

class Robot{
	
private:
	string nombre;
public:
	Robot(){nombre=genNombre();}
	
	string genNombre(){ 
		stringstream ss;
		ss<<rand_ascii(gen)<<rand_ascii(gen)<<rand_int(gen)<<rand_int(gen)<<rand_int(gen)<<rand_int(gen);
		string nombre = ss.str();
		return nombre;
	}
		
	void imprimir(){
		cout<<"Nombre: "<<nombre<<endl;
	}
};

int main()
{
	int n;
	cout<<"Digite cantidad de robots: ";
	cin>>n;
	
	vector<Robot> r(n);
	for(Robot  &iter:r) 
		iter.imprimir();
	
	return 0;
}
