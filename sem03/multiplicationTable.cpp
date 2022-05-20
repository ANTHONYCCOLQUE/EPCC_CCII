#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int m[20][20];
	
	
	cout<<"*|\t";
	for ( int i=1; i<=10 ; i++){
		cout<<i<<"\t";
		
	}
	cout<<"\n----------------------------------------------------------------------------------\n";
	for ( int i=1,a=1 ; i<=10; i++, a++ ){
		cout<<a<<"|\t";
		for ( int j=1; j<=10; j++){
			
			m[i][j] = i*j;
			cout<<m[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}
