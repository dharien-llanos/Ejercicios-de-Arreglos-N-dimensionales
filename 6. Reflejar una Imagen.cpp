#include<iostream>

using namespace std;

int main(){
	
	int x[6][6];
	cout<<"ingrese los elementos de la matris: "<<endl;
	for(int i=0; i<6; i++){
		for(int j=0; j<6; j++){
		
			cin>>x[i][j];
		}
	}
	
	cout<<"la matris es : " << endl;
	
	for(int i=0; i<6; i++){
		for(int j=0; j<6; j++){
			cout<<x[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	for(int i=0; i<6; i++){
		for(int j=0; j<3; j++){
			int aux = x[i][j];
			x[i][j] =x[i][5-j];
			x[i][5-j]=aux;
		}
	}
	
	cout<<"Se imprime la nueva matriz: "<<endl;
	
	for(int i=0; i<6; i++){
		for(int j=0; j<6; j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	return 0;
}
