# include <stdio.h>
# include <stdlib.h>

int main(){

    int linhas = 4, colunas = 4;
    // double '*' = matriz
    int **matriz;

    // Lendo tamanho da matriz
    printf("Insira as linhas: ");
    scanf("%d", &linhas);
    printf("\nInsira as colunas: ");
    scanf("%d", &colunas);

     // Alocando memoria para linhas
    matriz = (int **) malloc(linhas * sizeof(int *));

    // Alocando memoria para as colunas das linhas
    for (int i = 0; i < linhas; i++){
        matriz[i] = (int *) malloc(colunas * sizeof(int));
    }

    int i,j;
    // Preenchendo e exibindo valores
    for (i = 0; i < linhas; i++){
        for (j = 0; j < colunas; j++){
            matriz[i][j] = i;
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }

    // Limpa memoria
    free(matriz);

    return 0;

}