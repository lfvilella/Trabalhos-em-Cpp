# include <stdio.h>
# include <string.h>

char nome[10][80];

void Ordena(){
    int i, j, r;
    char auxiliar[80];
    for (i = 0; i < 10; i++){
        for (j = i+1; j < 10; j++){
            r = strcmp(nome[i], nome[j]); // Retorna 0, 1 ou -1
            if (r > 0){
                strcpy(auxiliar, nome[i]);
                strcpy(nome[i], nome[j]);
                strcpy(nome[j], auxiliar);
            }
        }
    }
}

int main(){
    printf("Digite 10 nomes:\n");
    for (int i = 0; i < 10; i++){
        gets(nome[i]);
    }

    Ordena();

    printf("Nomes Ordenados: \n");
    for (int i = 0; i < 10; i++){
        puts(nome[i]); // Imprime e pula linha
    }
    return 0;
}