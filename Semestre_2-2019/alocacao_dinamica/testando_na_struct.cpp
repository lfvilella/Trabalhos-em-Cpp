# include <stdio.h>
# include <stdlib.h>
# include <string.h>

struct cadastro{
    int rg;
    char nome[50];
};

void AlocaVetor(struct cadastro **vetor, int tamanho);
void DesalocaVetor(struct cadastro **vetor);
void InputVetor(struct cadastro *vetor, int tamanho);
void PrintVetor(struct cadastro *vetor, int tamanho);

int main(){
    int tamanho = 5;

    struct cadastro *ponteiro=NULL;
    AlocaVetor(&ponteiro, tamanho);

    InputVetor(ponteiro, tamanho);
    PrintVetor(ponteiro, tamanho);

    DesalocaVetor(&ponteiro);
    return 0;
}

void PrintVetor(struct cadastro *vetor, int tamanho){
    for (int i = 0; i < tamanho; i++){
        printf("Cadastro %d: \n", i+1);
        printf("RG = %d\n", vetor[i].rg);
        printf("Nome = %s\n", vetor[i].nome);
    }
}

void InputVetor(struct cadastro *vetor, int tamanho){
    for (int i = 0; i < tamanho; i++){
        scanf("%d", &vetor[i].rg);
        getchar();
        fgets(vetor[i].nome, 50, stdin);
    }
}

void AlocaVetor(struct cadastro **vetor, int tamanho){
    *vetor = (struct cadastro*) malloc(tamanho * sizeof(int));
}

void DesalocaVetor(struct cadastro **vetor){
    if (*vetor != NULL){
        free(*vetor);
    }
    *vetor = NULL;
}