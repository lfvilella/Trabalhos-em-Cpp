# include <stdio.h>
# include <stdlib.h>

int* AlocaVetor(int tamanho){
    int *aux;

    aux = (int*) malloc(tamanho * sizeof(int));

    return aux;
}

int main(){
    int *ponteiro_vetor;
    int *ponteiro_vetor_com_funcao;

    int tamanho_vetor;
    scanf("%d", &tamanho_vetor);

    // Ponteiro armazena o endereço de memoria do primeiro item do vetor vetor[0]
    ponteiro_vetor = (int*) malloc(tamanho_vetor * sizeof(int));

    // Outro modo de fazer
    ponteiro_vetor_com_funcao = AlocaVetor(tamanho_vetor);

    int contador_alocacao = 0;
    for (int i = 0; i < tamanho_vetor; i++){
        scanf("%d", &ponteiro_vetor[i]);
        scanf("%d", &ponteiro_vetor_com_funcao[i]);
        contador_alocacao ++;
    }
    for (int i = 0; i < tamanho_vetor; i++){
        printf("Modo 1 = %d\n", ponteiro_vetor[i]);
        printf("Modo 2 = %d\n", ponteiro_vetor_com_funcao[i]);
    }

    // Caso queira aloca +1 no vetor
    for (int i = contador_alocacao; i < tamanho_vetor+1; i++){
        scanf("%d", &ponteiro_vetor[i]);
        scanf("%d", &ponteiro_vetor_com_funcao[i]);
    }

    for (int i = 0; i < tamanho_vetor+1; i++){
        printf("Modo 1 = %d\n", ponteiro_vetor[i]);
        printf("Modo 2 = %d\n", ponteiro_vetor_com_funcao[i]);
    }

    // Limpa memória
    free(ponteiro_vetor);
    free(ponteiro_vetor_com_funcao);
    return 0;
}