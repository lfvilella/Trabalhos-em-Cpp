//  Ler uma matriz e gerar a transposta(LINHA PASSA SER A COLUNA E COLUNA PASSA SER LINHA)
# include <stdio.h>
# include <iostream>
# define LINHA 2
# define COLUNA 2

using namespace std;

void imprime_transposta(int get_matriz[LINHA][COLUNA]);

int main(){
    int matriz[LINHA][COLUNA];
    cout << "INSIRA A MATRIZ\n";
    for (int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++){
            cin >> matriz[i][j];
        }
    }

    //     0 1
    //     | |
    // 0 - 1 3
    // 1 - 2 1

    //     0 1
    //     | |
    // 0 - 1 2
    // 1 - 3 1

    cout << "----------\n";

    imprime_transposta(matriz);

    return 0;
}

void imprime_transposta(int get_matriz[LINHA][COLUNA]){
    // IMPRIME A TRANSPOSTA
    for (int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++){
            cout << get_matriz[j][i] << " ";
        }
        cout << endl;
    }
}