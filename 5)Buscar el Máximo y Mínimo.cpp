#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x[4][4],maximo=0,minimo=0;
	int fila1=0,fila2=0,columna1=0,columna2=0;
	
	
	cout<<"ingrese los elementos de la matris: "<<endl;
	
	
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cin>>x[i][j];
		}
	}
	
	
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<x[i][j]<<"    ";
			
		}
		cout<<endl;
		
	}
	
	maximo=x[0][0];
	minimo=x[0][0];
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
		if(maximo<x[i][j])
		{
			maximo=x[i][j];
		fila1=i;
		columna1=j;
		}
		
		if(minimo>x[i][j])
		{
			minimo=x[i][j];
			fila2=i;
			columna2=j;
		}
		}
	}
		cout<<"el maximo valor es: "<<maximo<<endl;
		cout<<"y se encuentra en la fila "<<fila1<<"  y columna  "<<columna1<<endl;
		cout<<"el minimo valor es: "<<minimo<<endl;
		cout<<"y se encuentra en la fila "<<fila2<<"  y columna  "<<columna2<<endl;
	
	return 0;
}
	
	
	
	
