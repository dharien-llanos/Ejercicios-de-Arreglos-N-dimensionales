#include <bits/stdc++.h>
using namespace std;

int main() {
	int x[5][5];
    cout<<"ingrese los elementos de la matris: "<<endl;
    
    
    for(int i=0;i<5;i++)
    {
    	for(int j=0;j<5;j++)
    	
    	{
    		cin>>x[i][j];
		}
	}
	
	
	for(int i=0;i<5;i++)
    {
    	for(int j=0;j<5;j++)
    	
    	{
    		cout<<x[i][j]<<"  ";
		}
		cout<<endl;
	}
    
    int filainicio = 0, filafin = 4;
    int colinicio = 0, colFin = 4;

    cout << "Recorrido espiral de la matriz:" << endl;
    
    while(filainicio <=filafin && colinicio<=colFin) {
       
        for(int i=colinicio;i<=colFin;i++) {
            cout<<x[filainicio][i]<<" ";
        }
        filainicio++;
        
     
        for(int i=filainicio;i<=filafin;i++) {
            cout<<x[i][colFin]<< " ";
        }
        colFin--;
        
        
        if(filainicio<=filafin) {
            for (int i=colFin;i>=colinicio;i--) {
                cout<<x[filafin][i]<< " ";
            }
            filafin--;
        }
        
        if(colinicio<=colFin) {
            for (int i=filafin;i>=filainicio;i--) {
                cout<<x[i][colinicio]<< " ";
            }
            colinicio++;
        }
    }
    
    cout<<endl;
    return 0;
}

