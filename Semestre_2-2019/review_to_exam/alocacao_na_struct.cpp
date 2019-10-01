# include <stdio.h>
# include <stdlib.h>
# include <string.h>

struct cadastro{
    int numero_passagem;
    char nome[50];
    char destino[40];
    char data[12];
};

void AlocaVetor(struct cadastro **ponteiro, int usuarios){
    *ponteiro = (struct cadastro*) malloc(usuarios * sizeof(struct cadastro));
}

void DesalocaVetor(struct cadastro **ponteiro){
    if (*ponteiro != NULL){
        free(*ponteiro);
    }
    *ponteiro = NULL;
}

void EntradaVetor(struct cadastro *vetor, int usuarios){
    printf("Entrada de Cadastros !\n");
    for (int i = 0; i < usuarios; i++){
        printf("Numero da Passagem: ");
        scanf("%d", &vetor[i].numero_passagem);
        printf("Nome do Passageiro: ");
        getchar();
        fgets(vetor[i].nome, 50, stdin);
        printf("Destino: ");
        getchar();
        fgets(vetor[i].destino, 30, stdin);
        printf("Data: ");
        getchar();
        fgets(vetor[i].data, 11, stdin);
    }
}

// Ordena os nomes em ordem alfabetica
void OrdenaVetor(struct cadastro *vetor, int usuarios){
    int trade;
    char auxiliar[50];
    for (int i = 0; i < usuarios; i++){
        for (int j = i+1; j < usuarios; j++){
            trade = strcmp(vetor[i].nome, vetor[j].nome);
            if (trade > 0){
                strcpy(auxiliar, vetor[i].nome);
                strcpy(vetor[i].nome, vetor[j].nome);
                strcpy(vetor[j].nome, auxiliar);
            }
        }
    }
}

void SaidaVetor(struct cadastro *vetor, int usuarios){
    for (int i = 0; i < usuarios; i++){
        printf("*** Passageiro %d ***\n", i+1);
        printf("Passagem: %d\n", vetor[i].numero_passagem);
        printf("Nome: %s", vetor[i].nome);
        printf("Destino: %s", vetor[i].destino);
        printf("Data: %s", vetor[i].data);
    }
}

int main(){
    int usuarios;
    printf("Usuarios/Passagens a serem cadastrados: ");
    scanf("%d", &usuarios);

    struct cadastro *vetor = NULL;
    AlocaVetor(&vetor, usuarios);

    EntradaVetor(vetor, usuarios);
    OrdenaVetor(vetor, usuarios);
    SaidaVetor(vetor, usuarios);
    
    DesalocaVetor(&vetor);
    return 0;
}