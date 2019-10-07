# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct data_base{
    int codigo;
    char titulo[100];
    char autor[50];
    char assunto[100];
}Books;

void InserirDado(struct data_base *lista){
    scanf("%d", &(*lista).codigo);
    getchar();
    fgets((*lista).titulo, 100, stdin);
    getchar();
    fgets((*lista).autor, 50, stdin);
    getchar();
    fgets((*lista).assunto, 100, stdin);
}

void ExibirDado(Books dados){
    printf("Codigo: %d \n", dados.codigo);
    printf("Titulo: %s \n", dados.titulo);
    printf("Autor: %s \n", dados.autor);
    printf("Assunto: %s \n", dados.assunto);
}

void BuscaDado(Books dados, int codigo_para_busca, int tamanho){
    int achou = 0; // Para nao retornar toda hora 0 ou 1 no loop
    int contador = 1;
    contador++;
    if (codigo_para_busca == dados.codigo){
        achou++;
    }
    if (achou == 1){ // Achou primeira vez
        printf("1\n");
    }
    if (contador == tamanho && achou != 1){
        printf("0\n"); // Aqui ta dando erro ainda
    }
}

int main(){
    int quantia;
    scanf("%d", &quantia);

    struct data_base lista[quantia];

    for (int i = 0; i < quantia; i++){
        InserirDado(&lista[i]);
    }

    for (int i = 0; i < quantia; i++){
        ExibirDado(lista[i]);
    }

    int codigo_para_busca;
    scanf("%d", &codigo_para_busca);
    for (int i = 0; i < quantia; i++){
        BuscaDado(lista[i], codigo_para_busca, quantia);
    }    

    return 0;
}