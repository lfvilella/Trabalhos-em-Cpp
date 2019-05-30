// Programa que leia uma matriz de ordem 4 e imprima todos os elementos que se encontram em posicoes em que linha+coluna seja par
// USE FUNCAO
# include <stdio.h>
# include <iostream>
# define LINHA 4
# define COLUNA 4

using namespace std;

void faz_a_logica(int get_matriz[LINHA][COLUNA]);

int main(){
    int matriz_a[LINHA][COLUNA];
    cout << "INSIRA A MATRIZ\n";
    for (int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++){
            cin >> matriz_a[i][j];
        }
    }

    faz_a_logica(matriz_a);

    //     0 1
    //     | |
    // 0 - 1 2
    // 1 - 2 1

    
    return 0;
}

void faz_a_logica(int get_matriz[LINHA][COLUNA]){
    for (int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++){
            int soma_i_j = i+j;
            if (soma_i_j % 2 == 0){
                cout << get_matriz[i][j] << " ";
            }
            else{
                cout << "X ";
            }
        }
        cout << endl;
    }
}