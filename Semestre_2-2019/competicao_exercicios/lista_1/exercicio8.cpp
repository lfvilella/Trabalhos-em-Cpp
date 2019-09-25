# include <stdio.h>
# include <string.h>

struct dados_usuarios{
    char nome[50];
    float nota;
};

void print_aluno(struct dados_usuarios *lista);

int main(){
    int quantia_usuarios_banco = 0;
    scanf("%d", &quantia_usuarios_banco);
    if (quantia_usuarios_banco > 100){
        printf("Banco nao suporta\n");
        return 0;
    }

    struct dados_usuarios lista[quantia_usuarios_banco];

    float maior_nota = 0;
    for (int i = 0; i < quantia_usuarios_banco; i++){
        getchar();
        fgets(lista[i].nome, 50, stdin);
        scanf("%f", &lista[i].nota);
        if (lista[i].nota > maior_nota){
            maior_nota = lista[i].nota;
        }
    }
    for (int i = 0; i < quantia_usuarios_banco; i++){
        if (lista[i].nota == maior_nota){
            print_aluno(&lista[i]);
        }
    }
    return 0;
}

void print_aluno(struct dados_usuarios *lista){
    printf("Nome: %s", (*lista).nome);
    printf("Nota: %.2f\n", (*lista).nota);
    printf("\n");
}