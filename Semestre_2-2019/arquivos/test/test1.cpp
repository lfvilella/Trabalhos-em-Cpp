# include <stdio.h>
# include <string.h>

int main(){
    char string[255];
    FILE *file;
    file = fopen("txt/test1.txt", "w");

    if (file == NULL){
        printf("Erro ao abrir file\n");
        return 1;
    }
    fgets(string, 255, stdin);
    // scanf("%s", string);

    fprintf(file, "%s", string);

    fclose(file);

    return 0;
}