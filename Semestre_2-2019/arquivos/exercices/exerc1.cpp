# include <stdio.h>

int main(){
    FILE *file;
    file = fopen("txt/ex1.txt", "w");
    if (!file){
        printf("Erro na abertura\n");
        return 1;
    }

    int array[3];
    int idx;
    for (idx = 0; idx < 3; idx++){
        scanf("%d", &array[idx]);
        fprintf(file, "%d\n", array[idx]);
    }
    fclose(file);

    int arrayB[3];
    file = fopen("txt/ex1.txt", "r");
    if (!file){
        printf("Erro na abertura\n");
        return 1;
    }

    idx = 0;
    char c;
    while ((c = getc(file)) != EOF){
        arrayB[idx] = c;
        if (arrayB[idx != c]){
            printf("Gravado Incorreto");
        }
        printf("%c\n", c);
        printf("B = %d\n", arrayB[idx]);
        printf("A = %d\n", array[idx]);
        idx++;
    }
    fclose(file);

    for (idx = 0; idx < 3; idx++){
        printf("%d", arrayB[idx]);
    }
    return 0;
}