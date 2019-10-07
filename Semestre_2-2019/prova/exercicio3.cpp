# include <stdio.h>
# include <stdlib.h>

int** AlocaMatriz(int l, int c){
    int **matriz;
    matriz = (int**) malloc(l * sizeof(int*));

    for (int i = 0; i < l; i++){
        matriz[i] = (int*) malloc(c * sizeof(int));
    }

    return matriz;
}

void DesalocaMatriz(int ***matriz){
    if (**matriz != NULL){
        free(**matriz);
    }
    **matriz = NULL;
}

int** InputMatriz(int l, int c){
    int **matriz;
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    return matriz;
}

int main(){
    int l, c;
    scanf("%d %d", &l, &c);

    int **matriz;
    matriz = AlocaMatriz(l, c);
    matriz = InputMatriz(l, c);

    // Nao consegui usar funcao
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    DesalocaMatriz(&matriz);
    return 0;
}