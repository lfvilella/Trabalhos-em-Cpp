# include <stdio.h>
# include <stdlib.h>

int* AlocaVetor(int tamanho){
    int *aux;

    aux = (int*) malloc(tamanho * sizeof(int));

    return aux;
}

int* GetValues(int tamanho, int *ponteiro){
    int maior_valor = 0, menor_valor = 100000; // Isso nao é o correto

    for (int i = 0; i < tamanho; i++){
        scanf("%d", &ponteiro[i]);
        if (ponteiro[i] > maior_valor){
            maior_valor = ponteiro[i];
        }
        if (ponteiro[i] < menor_valor){
            menor_valor = ponteiro[i];
        }
    }
    int *vetor;
    vetor = AlocaVetor(2);
    vetor[0] = menor_valor;
    vetor[1] = maior_valor;

    return vetor;
}

int main(){
    int tamanho;
    scanf("%d", &tamanho);
    
    int *ponteiro;
    ponteiro = AlocaVetor(tamanho);

    int *ponteiro_para_valores;
    ponteiro_para_valores = AlocaVetor(2);
    ponteiro_para_valores = GetValues(tamanho, ponteiro);
    printf("Menor valor = %d\n", ponteiro_para_valores[0]);
    printf("Maior valor = %d\n", ponteiro_para_valores[1]);

    free(ponteiro);
    free(ponteiro_para_valores);
    
    return 0;
}