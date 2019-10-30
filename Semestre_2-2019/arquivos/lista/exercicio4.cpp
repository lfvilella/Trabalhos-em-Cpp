# include <stdio.h>
#include <ctype.h>

void CopiaEmUppercase(FILE *file1, FILE *file2){
    char c;
    while ((c = getc(file1)) != EOF){
        fputc(toupper(c), file2);
    }
}

int main(){
    FILE *file1 = fopen("txt/minusculo.txt", "r");
    if(!file1){
        printf("Erro ao abrir file.\n");
        return 0;
    }

    FILE *file2 = fopen("txt/maiusculo.txt", "w");
    if(!file2){
        printf("Erro ao abrir file.\n");
        return 0;
    }

    CopiaEmUppercase(file1, file2);

    fclose(file1);
    fclose(file2);

    return 0;
}