# include <stdio.h>
# include <iostream>
# define LINHA 2
# define COLUNA 2

using namespace std;

int main(){
    int matriza_a[LINHA][COLUNA];
    int matriza_b[LINHA][COLUNA];
    int matriza_c[LINHA][COLUNA];

    cout << "INSIRA A MATRIZ A\n";
    for (int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++){
            cin >> matriza_a[i][j];
        }
    }

    cout << "INSIRA A MATRIZ B\n";
    for (int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++){
            cin >> matriza_b[i][j];
        }
    }

    for (int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++){
            matriza_c[i][j] = matriza_a[i][j] + matriza_b[i][j];
        }
    }

    cout << "MATRIZ C: \n";
    for (int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++){
            cout << matriza_c[i][j];
        }
        cout << endl;
    }
}