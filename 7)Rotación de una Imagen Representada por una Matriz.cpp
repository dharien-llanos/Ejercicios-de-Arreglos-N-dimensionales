#include<bits/stdc++.h>
using namespace std;

int main()
{

    
    int matrisrotada[4][4];
    int matris[4][4];
    
    cout<<"ingrese los elementos de la matris: "<<endl;
    
    
    for (int i=0;i<4;i++) {
        for (int j=0;j<4;j++) {
            cin>>matris[i][j];
        }
    }
    
    for (int i=0;i<4;i++) {
        for (int j=0;j<4;j++) {
            matrisrotada[j][3-i] =matris[i][j];
        }
    }
    

    cout<<"Matriz original: "<<endl;
    for (int i=0;i<4;i++) 
	{
        for (int j=0;j<4;j++) {
            cout<<matris[i][j]<<"    ";
        }
        cout<<endl;
    }
    
    
    cout<<"Matriz rotada 90 grados en sentido horario:"<<endl;
    for (int i=0;i<4;i++) {
        for (int j=0;j<4;j++) {
            cout<<matrisrotada[i][j] << "   ";
        }
        cout<<endl;
    }
    
    return 0;
}

