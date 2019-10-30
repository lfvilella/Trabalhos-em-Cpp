# include <stdio.h>

int main(){
    FILE *file;
    file = fopen("txt/lendo_numero.txt", "r");

    if (file == NULL){
        printf("Erro ao abrir!\n");
        return 0;
    }    

    int a, b, c;
    fscanf(file, "%d %d %d", &a, &b, &c);

    printf("%d %d %d\n", a,b,c);
    
    fclose(file);
    return 0;
}