#include<iostream>

using namespace std;

int main(){
	
	int x[4][4];
	int A,B;
	cout<<"Ingrese los elementos de la matris:  "<<endl;
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			
			cin>>x[i][j];
		}
	}
	
	cout<<"la matris es : " << endl;
	
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			cout<<x[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"ubgrese la fila 1 que va intercambiar: ";
	cin>>A;
	cout<<"ingrese la fila 2 que va intercambiar : ";
	cin>>B;

	
	for(int i=0;i<4;i++){
		int aux=x[A][i];
		x[A][i]=x[B][i];
		x[B][i]=aux;
		
	}
	
	cout<<"la nueva matris es:  "<<endl;
	
	for(int i=0; i<4;i++){
		for(int j=0;j<4;j++){
			cout<<x[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
