// Struct antes do int main
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

struct aluno{
    int matricula;
    char nome[50];
    float nota;
};

int main(){
    // Cria a variavel que chama a struct
    struct aluno a[10];

    a[0].matricula = 101;
    strcpy(a[0].nome,"Felipe");
    a[0].nota = 9.5;

    a[1].matricula = 102;
    strcpy(a[1].nome,"Tiago");
    a[1].nota = 7.5;

    for(int i = 0; i < 2; i++){
        printf("Aluno = %s \nMatricula = %d \nNota = %.2f\n", a[i].nome, a[i].matricula, a[i].nota);
    }

    return 0;
}