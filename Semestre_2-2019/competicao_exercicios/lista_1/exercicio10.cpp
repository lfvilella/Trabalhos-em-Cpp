# include <stdio.h>
# include <stdlib.h>

void BuscaNumero(int **matriz, int linhas, int colunas);

int main(){
    int linhas = 0, colunas = 0;
    printf ("Digite numero de linhas: \n");
    scanf("%d", &linhas);
    printf ("Digite numero de colunas: \n");
    scanf("%d", &colunas);

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
            scanf("%d", &matriz[i][j]);
        }
    }
    BuscaNumero(matriz, linhas, colunas);
    free(matriz);
    return 0;
}

void BuscaNumero(int **matriz, int linhas, int colunas){
    int encontra_numero = 0;
    int numero;
    printf("Insira o numero a ser procurado: ");
    scanf("%d", &numero);

    for (int i = 0; i < linhas; i++){
        for (int j = 0;j < colunas; j++){
            if(matriz[i][j] == numero){
                encontra_numero++;
            }
        }
    }
    if (encontra_numero > 0) printf("1\n");
    else printf("0\n");
}