#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int TAMANO = 10;

void inicializarTablero(int tablero[][TAMANO]) {
    srand(time(0)); 

    for (int i=0; i<TAMANO;i++) {
        for (int j=0; j<TAMANO; j++) {
            tablero[i][j] = rand() % 2; 
        }
    }
}

void contarMinasAdyacentes(const int tablero[][TAMANO], int minasAdyacentes[][TAMANO]) {
    int dirF[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dirC[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    for (int f=0; f<TAMANO; f++) {
        for (int c=0; c<TAMANO; c++) {
            if (tablero[f][c]==1) {
                for (int d=0;d<8; d++) {
                    int nf = f + dirF[d];
                    int nc = c + dirC[d];
                    if (nf >= 0 && nf < TAMANO && nc>=0 && nc<TAMANO) {
                        minasAdyacentes[nf][nc]++;
                    }
                }
            }
        }
    }
}

void imprimirTablero(const int tablero[][TAMANO]) {
    for (int f=0; f<TAMANO; f++) {
        for (int c=0; c<TAMANO; c++) {
            cout<<tablero[f][c]<<" ";
        }
        cout<<endl;
    }
}

void imprimirTableroMinas(const int minasAdyacentes[][TAMANO]) {
    for (int f=0; f<TAMANO; f++) {
        for (int c=0; c<TAMANO; c++) {
            cout<<minasAdyacentes[f][c]<< " ";
        }
        cout<<endl;
    }
}

int main() {
    int tablero[TAMANO][TAMANO]={0};
    int minasAdyacentes[TAMANO][TAMANO]={0};

    inicializarTablero(tablero);
    contarMinasAdyacentes(tablero, minasAdyacentes);

    cout<<"Tablero Original (0 = vacio, 1 = mina):"<<endl;
    imprimirTablero(tablero);

    cout<<"\nTablero de Minas Adyacentes:"<<endl;
    imprimirTableroMinas(minasAdyacentes);

    return 0;
}

