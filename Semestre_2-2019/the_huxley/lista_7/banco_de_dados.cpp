# include <stdio.h>
# include <string.h>
# include <iostream>

using namespace std;

typedef struct dados_usuarios{
    int idade;
    char nome[50];
    char sexo;
    char estado_civil;
    int numero_amigos;
    int quantidade_fotos;
}Dados_usuarios;

void print_struct(Dados_usuarios dados);
void input(struct dados_usuarios *lista);

int main(){
    int quantia_usuarios_banco = 0;
    scanf("%d", &quantia_usuarios_banco);

    struct dados_usuarios lista[quantia_usuarios_banco];

    for (int i = 0; i < quantia_usuarios_banco; i++){
        input(&lista[i]);
    }
    for (int i = 0; i < quantia_usuarios_banco; i++){
        print_struct(lista[i]);
    }
    return 0;
}

void print_struct(Dados_usuarios dados){
    printf("Idade: %d\n", dados.idade);
    printf("Nome: %s", dados.nome);
    printf("Sexo: %c\n", dados.sexo);
    printf("Estado Civil: %c\n", dados.estado_civil);
    printf("Numero de amigos: %d\n", dados.numero_amigos);
    printf("Numero de fotos: %d\n", dados.quantidade_fotos);
    printf("\n");
}
void input(struct dados_usuarios *lista){
    scanf("%d", &(*lista).idade);
    getchar();
    fgets((*lista).nome, 100, stdin);
    scanf("%c",&(*lista).sexo);
    getchar();
    scanf("%c",&(*lista).estado_civil);
    scanf("%d",&(*lista).numero_amigos);
    scanf("%d",&(*lista).quantidade_fotos);
}