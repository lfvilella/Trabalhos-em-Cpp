# include <stdio.h>
# include <stdlib.h>

int* AlocaVetor(int linhas){
    int *vetor;
    vetor = (int*) malloc(linhas * sizeof(int));
    return vetor;
}

int* PreencheVetor(int linhas){
    int *vetor;
    for (int i = 0; i < linhas; i++){
        vetor[i] = i+10;
    }
    return vetor;
}

void DesalocaVetor(int **vetor){
    free(*vetor);
}

int main(){
    int linhas = 3;
    int *vetor;
    vetor = AlocaVetor(linhas);
    vetor = PreencheVetor(linhas);

    for (int i = 0; i < linhas; i++){
        printf("%d ", *(vetor + i)); // HERE !!!
    }
    printf("\n");

    DesalocaVetor(&vetor);
    return 0;
}