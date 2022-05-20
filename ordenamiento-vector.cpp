/*Your job is to write a program that reads integers from
the standard input, sorts them into ascending order, and
then prints the sorted numbers, one per line.*/
#include <iostream>
#include<algorithm>
using namespace std;

int main(int argc, char *argv[]) {
	int m[999], n;
	
	cout<<"Digite cantidad de numeros: ";
	cin>>n;
	
	for ( int i =0 ; i < n ; i++ ){
		cout<<"Digite numero: ";
		cin>>m[i];
	}
	
	sort (m, m+n);
	
	cout<<"Numeros ordenados ascendentemente: "<<endl;
	for ( int i = 0 ; i < n ; i++ ){
		cout<<m[i]<<endl;
	}
	
	return 0;
}

