# include <stdio.h>
# include <stdlib.h>
# include <string.h>

struct dados{
    int matricula;
    char nome[50];
    int opcao;
    char escola;
    float valor;
};

void AlocaVetor(struct dados **vetor , int tamanho){
    *vetor = (struct dados*) calloc(tamanho, sizeof(struct dados));
}

void DesalocaVetor(struct dados **vetor){
    if (*vetor != NULL){
        free(*vetor);
    }
    *vetor = NULL;
}

void InputDados(struct dados *vetor, int tamanho){
    printf("Input dados! \n");
    for (int i = 0; i < tamanho; i++){
        printf("Matricula: ");
        scanf("%d", &vetor[i].matricula);

        printf("Nome: ");
        getchar();
        fgets(vetor[i].nome, 50, stdin);

        printf("Opcao: ");
        scanf("%d", &vetor[i].opcao);
        if (vetor[i].opcao == 1){
            vetor[i].valor = 40;
        }

        else if (vetor[i].opcao == 2){
            vetor[i].valor = 55;
        }

        else if (vetor[i].opcao == 3){
            vetor[i].valor = 70;
        }

        else if (vetor[i].opcao == 4){
            vetor[i].valor = 80;
        }

        getchar();
        printf("Escola: ");
        scanf("%c", &vetor[i].escola);
        float desconto = 0;
        if (vetor[i].escola == 'S'){
            desconto = (vetor[i].valor)/2;
            vetor[i].valor = desconto;
            // vetor[i].valor = (vetor[i].valor/2); // 50% de desconto
        }
    }
}

void Total(struct dados *vetor, int tamanho){
    float total = 0;
    for (int i = 0; i < tamanho; i++){
        total += vetor[i].valor;
    }
    printf("Total = %2.f \n", total);
}

int main(){
    struct dados *lista=NULL;
    
    int quantia_usuarios = 0;
    scanf("%d", &quantia_usuarios);

    AlocaVetor(&lista, quantia_usuarios);
    InputDados(lista, quantia_usuarios);
    Total(lista,quantia_usuarios);

    DesalocaVetor(&lista);
    return 0;
}