# include <stdio.h>
# include <stdlib.h>

int* AlocaVetor(int tamanho){
    int *aux;

    aux = (int*) malloc(tamanho * sizeof(int));

    return aux;
}

int main(){
    int *ponteiro_vetor;
    int *ponteiro_resultante;

    int tamanho_vetor;
    scanf("%d", &tamanho_vetor);

    // Ponteiro armazena o endereço de memoria do primeiro item do vetor vetor[0]
    ponteiro_vetor = AlocaVetor(tamanho_vetor);
    ponteiro_resultante = AlocaVetor(tamanho_vetor);

    for (int i = 0; i < tamanho_vetor; i++){
        scanf("%d", &ponteiro_vetor[i]);
    }

    int j = 0;
    for (int i = 0; i < tamanho_vetor; i++){
        if (ponteiro_vetor[i] % 2 == 0){
            ponteiro_resultante[j] = ponteiro_vetor[i];
            j++;
        }
    }
    for (int i = 0; i < tamanho_vetor; i++){
        if (ponteiro_vetor[i] % 2 == 1){
            ponteiro_resultante[j] = ponteiro_vetor[i];
            j++;
        }
    }

    // Printa
    for (int i = 0; i < tamanho_vetor; i++){
        printf("%d ", ponteiro_vetor[i]);
    }
    printf("\n");
    for (int i = 0; i < tamanho_vetor; i++){
        printf("%d ", ponteiro_resultante[i]);
    }
    printf("\n");

    // Limpa memória
    free(ponteiro_vetor);
    free(ponteiro_resultante);
    return 0;
}