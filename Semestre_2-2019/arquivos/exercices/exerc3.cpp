# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int main(){
    FILE *file;
    file = fopen("txt/ex3.txt", "r");

    if (!file){
        printf("Erro ao abrir\n");
        return 1; // or exit(1);
    }
    char A = 'Z';
    char c = getc(file);
    while(!feof(file)){ // file end of file
        printf("%c", c);
        if (c == 'A'){
            printf("\nA = %c\n", c);
            fprintf(file, "%c", A);
        }
        else if (c == 'E'){
            c = 'Y';
        }
        else if (c == 'I'){
            c = 'X';
        }
        c = getc(file);
    }

    fclose(file);
    return 0;
}