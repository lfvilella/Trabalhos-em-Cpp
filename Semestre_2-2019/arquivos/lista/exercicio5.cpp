# include <stdio.h>

int main(){
    FILE *file;
    file = fopen("txt/lista_num.txt", "w");

    if (file == NULL){
        printf("Não abriu o arquivo\n");
        return 0;
    }

    int lista[5];
    for (int idx = 0; idx < 5; idx++){
        scanf("%d", &lista[idx]);
        fprintf(file, "%d\n", lista[idx]);
    }

    fclose(file);

    return 0;
}