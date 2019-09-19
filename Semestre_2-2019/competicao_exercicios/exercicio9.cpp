# include <stdio.h>
# include <string.h>
# include <iostream>

using namespace std;

typedef struct cadastro{
    char codigo[30];
    char nome[50];
    float preco;
}Cadastro_produtos;

void print_struct(Cadastro_produtos produtos);
void input(struct cadastro *lista);

int main(){
    int quantia_produto_banco = 0;
    scanf("%d", &quantia_produto_banco);

    struct cadastro lista[quantia_produto_banco];

    for (int i = 0; i < quantia_produto_banco; i++){
        input(&lista[i]);
    }
    for (int i = 0; i < quantia_produto_banco; i++){
        print_struct(lista[i]);
    }
    printf("Pesquisando Produtos:\n");
    
    int comparador_de_string;
    int produtos_procurados = 0;
    scanf("%d", &produtos_procurados);
    while (produtos_procurados != 0){
        for (int i = 0; i < produtos_procurados; i++){
            char procurando_codigo[30];
            getchar();
            fgets(procurando_codigo, 30, stdin);
            // printf("Codigo Procurando: %s", procurando_codigo);
            for (int j = 0; j < quantia_produto_banco; j++){
                // printf("Codigo na Lista: %s", lista[j].codigo);
                comparador_de_string = strncmp(procurando_codigo, lista[j].codigo, 6);
                if(comparador_de_string > 0){
                    printf("Não encontrado");
                }
                else if(comparador_de_string < 0){
                    printf("Não encontrado");
                }
                else{
                    printf("Produto Encontrado:\n");
                    print_struct(lista[j]);
                }
            }
        }
        printf("Digite outro Produto:\n");
        scanf("%d", &produtos_procurados);
    }

    free(lista);
    return 0;
}

void print_struct(Cadastro_produtos produtos){
    printf("Codigo: %s", produtos.codigo);
    printf("Nome: %s", produtos.nome);
    printf("Preço: %.2f\n", produtos.preco);
    printf("\n");
}
void input(struct cadastro *lista){
    getchar();
    fgets((*lista).codigo, 30, stdin);
    getchar();
    fgets((*lista).nome, 50, stdin);
    scanf("%f",&(*lista).preco);
}