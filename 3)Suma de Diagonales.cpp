#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x[4][4],diagonal1=0,diagonal2=0,sumadediagonales=0;
	
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
		
	for(int i=0;i<4;i++)
	{
	
			diagonal1+=x[i][i];
		
	}
	
	for(int i=0;i<4;i++)
	{
		diagonal2+=x[i][3-i];	
	}
	
	sumadediagonales=diagonal1+diagonal2;
	cout<<"la suma de diagonales es: "<<sumadediagonales;
	return 0;
	
}

