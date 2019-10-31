# include <stdio.h>
# include <string.h>

int register_product(char *produto);
void print_product();

int main(){
    char produto[255];

    int opcao = 0;
    while (opcao != 3){
        printf("1 - Register\n");
        printf("2 - Show List\n");
        printf("3 - Exit\n");
        scanf("%d", &opcao);
        switch (opcao){
            case 1:
                getchar();
                fgets(produto, 255, stdin);
                register_product(produto);
                break;

            case 2:
                print_product();
                break;
                
            default:
                break;
        }
    }
    return 0;
}

int register_product(char *produto){
    FILE *file = fopen("txt/lista_compras.txt", "a");
    if (!file){
        printf("Erro ao abrir.\n");
        return 0;
    }
    fprintf(file, "%s", produto);
    fclose(file);
    return 0;
}

void print_product(){
    FILE *file;
    file = fopen("txt/lista_compras.txt", "r");

    if (!file){
        printf("Erro ao abrir.\n");
        return;
    }

    char c;
    while ((c = getc(file)) != EOF){
        printf("%c", c);
    }

    fclose(file);
}
