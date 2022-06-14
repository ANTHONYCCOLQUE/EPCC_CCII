#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



class histograma{
private:
	vector<int> elementos;
	int intervalo;
public:
	histograma(vector<int> n,int);
	~histograma(){};
	void imprimir();
};


histograma::histograma(vector<int> n,int _intervalo){
	intervalo=_intervalo;
	for (int i=0; i<n.size(); i++)
		elementos.push_back(n[i]);
}


void histograma::imprimir(){
	vector<int> res;
	int a=0,b=0;
	
	sort(elementos.begin(),elementos.end());
	int inicial=elementos[0];
	int siguiente=inicial+intervalo;
	for(int i= 0; i< elementos.size(); i++){
		b=0;
		for(int j=0; j< elementos.size(); j++){
			
			if(inicial<=elementos[j] && elementos[j]<siguiente){
				a++;
			}
			b++;
		}
		if(a!=0){res.push_back(a);}
		a=0;
		inicial=siguiente;
		siguiente=inicial+intervalo;
	}
	for(int i = 0; i < res.size(); i++)
		cout << res.at(i) << " ";
}

int main(){
	vector<int> elements={10, 2, 9, 7, 5, 6, 1, 8, 4,8};
	histograma p1(elements,2);
	
	cout<<"Mostrando elementos"<<endl;
	for(int i = 0; i < elements.size(); i++){
		cout << elements.at(i) << "|";
	}
	cout<<endl;
	
	cout<<"Resultados con intervalos de 5:";
	cout<<endl;
	p1.imprimir();
	
	return 0;
}
