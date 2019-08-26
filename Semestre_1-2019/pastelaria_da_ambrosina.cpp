# include <stdio.h>
# include <iostream>
# define LINHA 3
# define COLUNA 4

using namespace std;

int main(){
    float tabela_quantidade[LINHA][COLUNA];
    for (int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++){
            cin >> tabela_quantidade[i][j];
        }
    }

    float precos[4];
    for (int i = 0; i < COLUNA; i++){
        cin >> precos[i];
    }

    // Soma linha e Multiplica pelo preço
    float total[3]={0};
    for (int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++){
            total[i] += tabela_quantidade[i][j]*precos[j];
        }
        printf("%.2f\n", total[i]);
    }

    return 0;
}