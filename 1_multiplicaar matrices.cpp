#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,x[3][3],z[3][3],c[3][3];
	
	cout<<"PRIMERA MATRIS "<<endl<<endl;
	cout<<"ingrese los elementos de la matris: "<<endl;
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>x[i][j];
		}
	}
	
	cout<<"SEGUNDA MATRIS "<<endl<<endl;
	cout<<"ingrese elementos: "<<endl;
		for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>z[i][j];
		}
	}
	
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			
			c[i][j]=0;
			for(int k=0;k<3;k++)
			{
				c[i][j]+=x[i][k]*z[k][j];
			}
		}
	}
	
	cout<<"el resultado es: "<<endl; 
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<c[i][j]<<"  ";
			
		}
		cout<<endl;
	}
	return 0;
}
