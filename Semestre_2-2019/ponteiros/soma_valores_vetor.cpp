# include <stdio.h>

int soma_vetor(int vetor[], const int n){
    int soma = 0;
    int *ponteiro;
    int *const finalVetor = vetor + n; // Aponta pro final do vetor

    for(ponteiro = vetor; ponteiro < finalVetor; ponteiro++){
        soma += *ponteiro; // '*' = Valor do ponteiro
    }

    return soma;
}

int soma(int *a, int n){
    int soma = 0;
    for (int i = 0; i < n; i++){
        soma += *a;
        a++;
    }
    return soma;
}

int main(){
    int vet[5] = {1,2,4,4,5};

    printf("Soma do vetor = %i \n", soma_vetor(vet, 5));  
    printf("-------------\n");
    printf("Soma do vetor = %i \n", soma(vet, 5));  


    return 0;
}