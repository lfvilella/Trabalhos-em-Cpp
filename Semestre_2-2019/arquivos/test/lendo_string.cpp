# include <stdio.h>

int main(){
    FILE *file;
    file = fopen("txt/lendo_string.txt", "r");

    if (!file){
        printf("Erro ao abrir file.\n");
        return 0;
    }

    char c;

    while ((c = getc(file)) != EOF){
        printf("%c", c);
    }

    // Other Way to do it:
    // char frase[255];
    // while(fgets(frase, 255, file) != NULL){
    //     printf("%s", frase);
    // }

    printf("\n");

    fclose(file);
    return 0;
}