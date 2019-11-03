# include <stdio.h>

int main(){
    FILE *file = fopen("txt/ex2.txt", "r");
    if (!file){
        printf("Erro ao abrir.\n");
        return 0;
    }

    int vetor[9];
    for (int i = 0; i < 9; i++){
        fscanf(file, "%d", &vetor[i]);
    }
    fclose(file);

    file = fopen("txt/ex2.txt", "a");
    if (!file){
        printf("Erro ao abrir.\n");
        return 0;
    }

    fprintf(file, "\n");
    for (int i = 9; i >= 0; i--){
        fprintf(file, "%d ", vetor[i]);
    }

    fclose(file);
    return 0;
}