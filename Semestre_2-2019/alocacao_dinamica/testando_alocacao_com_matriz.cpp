# include <stdio.h>
# include <stdlib.h>

int main(){
    int linhas = 3, colunas = 3;

    int **matriz;
    matriz = (int **) malloc(linhas * sizeof(int *)); // Alocacao de ponteiro para ponteiro.

    // Alocando memoria para as colunas de cada linha:
    for (int i = 0; i < linhas; i++){
        matriz[i] = (int *) malloc(colunas *sizeof(int));
    }

    for (int i = 0; i < linhas; i++){
        for (int j = 0;j < colunas; j++){
            matriz[i][j] = i;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    free(matriz);
    return 0;
}

//          !!! ATENCAO !!!
// p -> p[0] --> p[0][0] p[0][1] p[0][2]
//      p[1] --> p[1][0] p[1][1] p[1][2]
//      p[2] --> p[2][0] p[2][1] p[2][2]