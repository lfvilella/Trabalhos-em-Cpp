# include <stdio.h>
# include <stdlib.h>

int* AlocaVetor(int linhas){
    int *vetor;
    vetor = (int*) malloc(linhas * sizeof(int));
    return vetor;
}

void DesalocaVetor(int **vetor){
    if (*vetor != NULL){
        free(*vetor);
    }
    *vetor = NULL;
}

int* InputVetor(int linhas){
    int *vetor;

    for (int i = 0; i < linhas; i++){
        scanf("%d", &vetor[i]);
    }

    return vetor;
}
int main(){
    int linhas = 5;
    int *vetor;

    vetor = AlocaVetor(linhas);
    vetor = InputVetor(linhas);

    for (int i = 0; i < linhas; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");

    DesalocaVetor(&vetor);
    return 0;
}