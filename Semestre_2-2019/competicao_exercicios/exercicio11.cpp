# include <stdio.h>
# include <stdlib.h>

int main(){
    int linhas = 0, colunas = 0;
    printf ("Digite a ordem da matriz quadrada: \n");
    scanf("%d", &linhas);
    colunas = linhas;

    int **matriz;
    matriz = (int **) malloc(linhas * sizeof(int *));

    for (int i = 0; i < linhas; i++){
        matriz[i] = (int *) malloc(colunas *sizeof(int));
    }
    if (matriz == NULL) {
        printf ("Memoria Insuficiente");
        return (NULL);
    }

    for (int i = 0; i < linhas; i++){
        for (int j = 0;j < colunas; j++){
            if (matriz[i] == matriz[j]){
                matriz[i][j] = 0;
            }
            else if (matriz[i] > matriz[j]){
                matriz[i][j] = 3;
            }
            else matriz[i][j] = 1;
        }
    }

    for (int i = 0; i < linhas; i++){
        for (int j = 0;j < colunas; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    free(matriz);
    return 0;
}