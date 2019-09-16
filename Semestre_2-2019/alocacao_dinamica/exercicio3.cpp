// Neste caso trabalhamos com ponteiro para ponteiro. (MATRIZ)
# include <stdio.h>
# include <stdlib.h>

int main(){
    int linhas, colunas;
    printf("Insira o numero de linhas:\n");
    scanf("%d", &linhas);
    printf("\nInsira o numero de colunas:\n");
    scanf("%d", &colunas);

    int **matriz_1;
    matriz_1 = (int **) malloc(linhas * sizeof(int *)); // Alocacao de ponteiro para ponteiro.
    int **matriz_2;
    matriz_2 = (int **) malloc(linhas * sizeof(int *));
    int **matriz_resultante;
    matriz_resultante = (int **) malloc(linhas * sizeof(int *));

    // Alocando memoria para as colunas de cada linha:
    for (int i = 0; i < linhas; i++){
        matriz_1[i] = (int *) malloc(colunas *sizeof(int));
        matriz_2[i] = (int *) malloc(colunas *sizeof(int));
        matriz_resultante[i] = (int *) malloc(colunas *sizeof(int));
    }

    int i, j;
    // Lendo Matriz 1
    for (i = 0; i < linhas; i++){
        for (j = 0; j < colunas; j++){
            scanf("%d", &matriz_1[i][j]);
        }
    }
    // Lendo Matriz 2 e Criando a Resultante
    for (i = 0; i < linhas; i++){
        for (j = 0; j < colunas; j++){
            scanf("%d", &matriz_2[i][j]);
            matriz_resultante[i][j] = (matriz_1[i][j] * matriz_2[i][j]);
        }
    }

    for (i = 0; i < linhas; i++){
        for (j = 0; j < colunas; j++){
            printf("%d ", matriz_resultante[i][j]);
        }
        printf("\n");
    }

    free(matriz_1);
    free(matriz_2);
    free(matriz_resultante);
    return 0;
}