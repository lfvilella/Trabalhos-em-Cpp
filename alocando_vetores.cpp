# include <stdio.h>
# include <stdlib.h>

int* aloca_vetor(int tamanho){
    int *aux;

    // Alocando na memoria
    aux = (int*) malloc(tamanho * sizeof(int));

    return aux;
}

int main(){

    int *vetor, tamanho;
    printf("Tamanho do vetor: \n");
    scanf("%d", &tamanho);

    vetor = aloca_vetor(tamanho);

    for (int i = 0; i < tamanho; i++){
        vetor[i] = 123;
    }

    for (int i = 0; i < tamanho; i++){
        printf("%d\n", vetor[i]);
    }

    // Limpa memoria
    free(vetor);
    return 0;
}