# include <stdio.h>
# include <stdlib.h>

int main(){
    int linha = 3, coluna = 4;
    int **matriz;
    matriz = (int**) malloc(linha * sizeof(int *));

    for (int i = 0; i < linha; i++){
        matriz[i] = (int *) malloc(coluna *sizeof(int));
    }

    int pares = 0;
    int soma_impar = 0;
    int media = 0;
    for (int i = 0; i < linha; i++){
        for (int j = 0;j < coluna; j++){
            scanf("%d", &matriz[i][j]);
            media += matriz[i][j];
            if (matriz[i][j] % 2 == 0){
                pares++;
            }
            else{
                soma_impar += matriz[i][j];
            }
        }
    }
    media = (media/12); // 3x4 = 12
    printf("Pares = %d \nSoma_Impar = %d \nMedia = %d\n", pares, soma_impar, media);

    return 0;
}