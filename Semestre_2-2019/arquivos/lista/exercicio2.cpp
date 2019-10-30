# include <stdio.h>

int main(){
    FILE *file;
    file = fopen("txt/vetor.txt", "w");

    if (!file){
        printf("Erro ao abrir.\n");
        return 0;
    }

    int vetorA[20];
    for (int idx = 0; idx < 20; idx++){
        scanf("%d", &vetorA[idx]);
        fprintf(file, "%d\n", vetorA[idx]);
    }
    fclose(file);

    file = fopen("txt/vetor.txt", "r");
    int vetorB[20];
    for (int idx = 0; idx < 20; idx++){
        fscanf(file, "%d", &vetorB[idx]);
        printf("%d ", vetorB[idx]);
    }

    fclose(file);
    return 0;
}