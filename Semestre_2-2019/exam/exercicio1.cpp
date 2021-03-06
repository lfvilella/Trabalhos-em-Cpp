# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <iostream>
# include "functions.h"

int Cadastra_Produto(char *produto, int tipo_do_mercado, int codigo, float preco);
int Lista_Compra();

int main(){
    int quantidade_lista_compras;
    printf("Quantidade na lista:\n");
    scanf("%d", &quantidade_lista_compras);

    int tipo_do_mercado, codigo, quantia_produto;
    float preco;
    char produto[255];
    for (int idx = 0; idx < quantidade_lista_compras; idx++){
        printf("Mercado : ");
        scanf("%d", &tipo_do_mercado); // 1 or 2 or 3.
        printf("Codigo : ");
        scanf("%d", &codigo);
        getchar();
        printf("Produto : ");
        fgets(produto, 255, stdin);
        printf("Preço : ");
        scanf("%f", &preco);
        printf("Quantidade : ");
        scanf("%d", &quantia_produto);

        Cadastra_Produto(produto, tipo_do_mercado, codigo, (preco*quantia_produto));
    }
    printf("!!! LISTA COMPRAS !!!\n");
    Lista_Compra();

    printf("Mercado 1, total = %d\n", Total_Mercado1());
    // printf("Mercado 2, total = %d\n", Total_Mercado2());
    // printf("Mercado 3, total = %d\n", Total_Mercado3());
    return 0;
}

int Lista_Compra(){
    FILE *file;
    char c;

    // Mercado 1
    file = fopen("txt/mercado1.txt", "r");
    if(!file){
        printf("Erro ao abrir arquivo.\n");
        return 0;
    }
    printf("\nMercado 1:\n");
    while ((c = fgetc(file)) != EOF){
        printf("%c", c);
    }
    fclose(file);

    // Mercado 2
    file = fopen("txt/mercado2.txt", "r");
    if(!file){
        printf("Erro ao abrir arquivo.\n");
        return 0;
    }
    printf("\nMercado 2:\n");
    while ((c = fgetc(file)) != EOF){
        printf("%c", c);
    }
    fclose(file);

    // Mercado 3
    file = fopen("txt/mercado3.txt", "r");
    if(!file){
        printf("Erro ao abrir arquivo.\n");
        return 0;
    }
    printf("\nMercado 3:\n");
    while ((c = fgetc(file)) != EOF){
        printf("%c", c);
    }
    fclose(file);

    printf("\n");
}

int Cadastra_Produto(char *produto, int tipo_do_mercado, int codigo, float preco){
    FILE *file;
    switch (tipo_do_mercado){
        case 1:
            file = fopen("txt/mercado1.txt", "a");
            if (!file){
                printf("Erro ao abrir arquivo.\n");
                return 0;
            }
            fprintf(file, "%d|%.2f|%s", codigo, preco, produto);
            break;
        case 2:
            file = fopen("txt/mercado2.txt", "a");
            if (!file){
                printf("Erro ao abrir arquivo.\n");
                return 0;
            }
            fprintf(file, "%d|%.2f|%s", codigo, preco, produto);
            break;
        case 3:
            file = fopen("txt/mercado3.txt", "a");
            if (!file){
                printf("Erro ao abrir arquivo.\n");
                return 0;
            }
            fprintf(file, "%d|%.2f|%s", codigo, preco, produto);
            break;
    
        default:
            break;
    }
    fclose(file);
}