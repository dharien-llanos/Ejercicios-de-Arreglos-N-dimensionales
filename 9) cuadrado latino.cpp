#include <iostream>
using namespace std;

int main()
 {
    int n;
    cout<<"Ingrese el orden del cuadrado latino: ";
    cin>>n;
    int x[n][n];
    for (int i=0;i<n;i++) {
        x[0][i]=i + 1;
    }
    for (int i=1;i<n;i++) {
        for (int j=0;j<n;j++) {
            x[i][j]=x[i-1][(j-1+n)%n];
        }
    }
    cout<<"Cuadrado latino de orden "<<n<<":"<<endl;
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            cout<<x[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

