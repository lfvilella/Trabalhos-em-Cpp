# include <stdio.h>
# include <iostream>

using namespace std;

int main(){
    int N; // Numero de Linhas/Colunas
    cin >> N;
    if (N < 2 || N > 10){
        return 0;
    }
    else{
        int quadrado[N][N];
        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                cin >> quadrado[i][j];
                if (quadrado[i][j] < 0 || quadrado[i][j] > 1000){
                    break;
                }
                else{
                    continue;
                }
            }
        }
        int soma_linhas[100000]={0};
        int soma_colunas[100000]={0};
        int soma_diagonal_1=0;
        int soma_diagonal_2=0;

        // Soma as linhas e colunas
        for (int i = 0; i < N; i++){
            int j;
            for (j = 0; j < N; j++){
                soma_linhas[i] += quadrado[i][j];
                soma_colunas[i] += quadrado[j][i];
                // Soma diagonal 1
                if (i == j){
                    soma_diagonal_1 += quadrado[i][j];
                }
            }
            // Somando a diagonal 2
            j = N-(i+1); // Faz a diagonal da direita p/ esquerda
            soma_diagonal_2 += quadrado[i][j];
        }    
        int igual_linhas = soma_linhas[0];
        int igual_colunas = soma_colunas[0];

        // Compara a soma das linhas
        int comparador = 0; // Se é diferente
        for (int i = 1; i < N; i++){ // Começa no 1 e compara o anterior
            if (soma_colunas[i] != soma_colunas[i-1]){
                comparador++;
                break;
            }
            if (soma_linhas[i] != soma_linhas[i-1]){
                comparador++;
                break;
            }
        }

        // Analisa o quadrado
        if (comparador > 0){
            cout << "-1\n";
        }
        // Logica do quadrado magico
        else if (igual_linhas == igual_colunas && igual_colunas == soma_diagonal_1 && soma_diagonal_1 == soma_diagonal_2){
            cout << (igual_linhas + igual_colunas + soma_diagonal_1 + soma_diagonal_2)/4 << endl;
        }
        else{
            cout << "-1\n";
        }
    }

    return 0;
}