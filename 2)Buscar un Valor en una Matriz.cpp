#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num;
	int x[3][3];
	cout<<"ingrese los elementos de la matris: "<<endl;
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>x[i][j];
		}
	}
	
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<x[i][j]<<"   ";
		}
		cout<<endl;
	}
	
	
	
	
	
	
	
	
	
	
	
	cout<<"que numero desea buscar: "<<endl;
	cin>>num;
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		if(x[i][j]==num)
		{
			cout<<"el valor "<<num<<"  se encuentra en la fila  "<<i<<"   y en la columna  "<<j<<endl;
			}	
		}
	}
	
	return 0;
}
