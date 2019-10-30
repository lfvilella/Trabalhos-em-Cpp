# include <stdio.h>

int main(){
    FILE *file;
    file = fopen("txt/sequencia_numeros.txt", "w");

    if (!file){
        printf("Arquivo não abriu.\n");
        return 0;
    }

    int numero = 1;
    while (numero != 0){
        scanf("%d", &numero);
        fprintf(file, "%d", numero);
    }
    fclose(file);

    file = fopen("txt/sequencia_numeros.txt", "r");
    if (!file){
        printf("Arquivo não abriu.\n");
        return 0;
    }

    char c;
    while ((c = getc(file)) != EOF){
        printf("%c ", c);
    }

    fclose(file);
    return 0;
}