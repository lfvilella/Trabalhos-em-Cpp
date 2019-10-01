# include <stdio.h>
# include <stdlib.h>
# include <string.h>

struct cadastro_alunos{
    char nome[50];
    char materia[50];
    float nota;
};

void AlocaBanco(struct cadastro_alunos **ponteiro, int tamanho){
    *ponteiro = (struct cadastro_alunos*) malloc(tamanho * sizeof(struct cadastro_alunos));
}

void DesalocaBanco(struct cadastro_alunos **ponteiro){
    free(*ponteiro);
}

void InputBanco(struct cadastro_alunos *ponteiro, int tamanho){
    for (int i = 0; i < tamanho; i++){
        getchar();
        fgets(ponteiro[i].nome, 50, stdin);
        getchar();
        fgets(ponteiro[i].materia, 50, stdin);
        scanf("%f", &ponteiro[i].nota);
    }
}

// Pela Maior nota
void OrganizandoBanco(struct cadastro_alunos *ponteiro, int tamanho){
    float auxiliar = 0;
    char aux[50];
    char aux_materia[50];
    for (int i = 0; i < tamanho; i++){
        for (int j = i+1; j < tamanho; j++){
            // Decrescente
            if (ponteiro[i].nota < ponteiro[j].nota){
                auxiliar = ponteiro[i].nota;
                ponteiro[i].nota = ponteiro[j].nota;
                ponteiro[j].nota = auxiliar;

                strcpy(aux, ponteiro[i].nome);
                strcpy(ponteiro[i].nome, ponteiro[j].nome);
                strcpy(ponteiro[j].nome, aux);

                strcpy(aux_materia, ponteiro[i].materia);
                strcpy(ponteiro[i].materia, ponteiro[j].materia);
                strcpy(ponteiro[j].materia, aux_materia);
            }
        }
    }
}

void PrintBanco(struct cadastro_alunos *ponteiro, int tamanho){
    for (int i = 0; i < tamanho; i++){
        printf("*** Aluno %d ***\n", i+1);
        printf("%s ", ponteiro[i].nome);
        printf("%s ", ponteiro[i].materia);
        printf("%2.f\n", ponteiro[i].nota);
    }
}

int main(){
    int tamanho = 2;
    struct cadastro_alunos *ponteiro = NULL;
    AlocaBanco(&ponteiro, tamanho);
    InputBanco(ponteiro, tamanho);
    OrganizandoBanco(ponteiro, tamanho);
    PrintBanco(ponteiro, tamanho);
    DesalocaBanco(&ponteiro);
    return 0;
}