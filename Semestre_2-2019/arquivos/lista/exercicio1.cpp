# include <stdio.h>

int main(){
    FILE *file;
    file = fopen("txt/aluno.txt", "w");

    if (!file){
        printf("Erro ao abrir.\n");
        return 0;
    }

    for (int idx = 0; idx < 3; idx++){
        char nome[255];
        fgets(nome, 255, stdin);
        fprintf(file, "%s", nome);
    }

    fclose(file);

    return 0;
}