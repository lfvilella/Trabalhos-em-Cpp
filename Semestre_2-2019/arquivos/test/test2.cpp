// PRINTAR O ARQUIVO

# include <stdio.h>
# include <stdlib.h>

int main(){
    FILE *file;
    char c;

    file = fopen("txt/teste2.txt", "r");

    if (!file){
        printf("Erro na abertura\n");
        return 1;
    }

    // getc = get the caracther || EOF = End of File
    while ((c = getc(file)) != EOF){
        printf("%c", c);
    }
    printf("\n");

    fclose(file);
    return 0;
}