# include <stdio.h>
# include <stdlib.h>

int** AlocaMatriz(int Linhas,int Colunas){
    int **m ;
    m = (int**) malloc(Linhas * sizeof(int*));

    for (int i = 0; i < Linhas; i++){
        m[i] = (int*) malloc(Colunas * sizeof(int));
    }

    return m;
}

int* AlocaVetor(int Linhas){
    int *v; 
    v = (int*) malloc(Linhas * sizeof(int));

    return v;
}

void DesalocaMatriz(int ***matriz){
    if (**matriz != NULL){
        free(**matriz);
    }
    **matriz = NULL;
}

void DesalocaVetor(int **vetor){
    if (*vetor != NULL){
        free(*vetor);
    }
    *vetor = NULL;
}

int main(){
    int linhas = 5, colunas = 5;

    int **matriz;
    matriz = AlocaMatriz(linhas, colunas);

    for (int i = 0; i < linhas; i ++){
        for (int j = 0; j < colunas; j++){
            matriz[i][j] = i+1;
        }
    }
    for (int i = 0; i < linhas; i ++){
        for (int j = 0; j < colunas; j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    DesalocaMatriz(&matriz);
    printf("\n");
    
    int *vetor;
    vetor = AlocaVetor(linhas);
    for (int i = 0; i < linhas; i ++){
        vetor[i] = i+1;
    }
    for (int i = 0; i < linhas; i ++){
        printf("%d ",vetor[i]);
    }
    printf("\n");

    DesalocaVetor(&vetor);
    return 0;
}