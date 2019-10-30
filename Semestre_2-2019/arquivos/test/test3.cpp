# include <stdio.h>
# include <stdlib.h>

int main(){
    FILE *file;
    char c;

    file = fopen("txt/teste3.txt", "r");

    if (file){
        c = getc(file);
        while (!feof(file)){
            printf("%c", c);
            c = getc(file);
        }
        printf("\n");
        
        fclose(file);
    }
    else{
        printf("Erro na Abertura");
    }

    return 0;
}