# include <stdio.h>
# include <stdlib.h>

int** AlocaMatriz(int linhas, int colunas){
    int **matriz;
    matriz = (int**) malloc(linhas * sizeof(int*));
    for (int i = 0; i < linhas; i++){
        matriz[i] = (int*) malloc(colunas * sizeof(int));
    }
    return matriz;
}

int** PreencheMatriz(int linhas, int colunas){
    int **matriz;
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            matriz[i][j] = i+j+20;
        }
    }
    return matriz;
}

void DesalocaMatriz(int ***matriz){
    free(**matriz);
}

int main(){
    int linhas = 4, colunas = 6;
    int **matriz;
    matriz = AlocaMatriz(linhas, colunas);
    matriz = PreencheMatriz(linhas, colunas);

    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    DesalocaMatriz(&matriz);
    return 0;
}