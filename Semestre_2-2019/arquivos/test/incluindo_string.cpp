# include <stdio.h>

int main(){
    FILE *file;
    file = fopen("txt/incluindo_string.txt", "a");

    if (!file){
        printf("Erro ao abrir.\n");
        return 0;
    }

    char frase[255];
    fgets(frase, 255, stdin);
    fprintf(file, "\n%s", frase);

    char frase2[] = "Second Line\n";
    fputs(frase2, file);

    char caracter = '9';
    fputc(caracter, file);

    fclose(file);
    return 0;
}