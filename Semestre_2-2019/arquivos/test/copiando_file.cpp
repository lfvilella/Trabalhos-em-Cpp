# include <stdio.h>

void CopiaDados(FILE *file1, FILE *file2){
    char c;

    while((c = getc(file1)) != EOF){
        fprintf(file2, "%c", c);
    }

    // OTHER WAY TO DO IT:
    // char reader[1000];
    // while (fgets(reader, 1000, file1) != NULL){
    //     fputs(reader, file2);
    // }
}

int main(){
    FILE *file1 = fopen("txt/test1.txt", "r");
    if (!file1){
        printf("Erro ao abrir.\n");
        return 0;
    }

    FILE *file2 = fopen("txt/copia_conteudo.txt", "w");
    if (!file2){
        printf("Erro ao abrir.\n");
        return 0;
    }

    CopiaDados(file1, file2);

    fclose(file1);
    fclose(file2);
    return 0;
}