# include <stdio.h>
# include <stdlib.h>

int main(){
    int numero_de_alunos;
    scanf("%d", &numero_de_alunos);

    int *ponteiro;
    ponteiro = (int*) malloc(numero_de_alunos * sizeof(int));

    float notas = 0;
    float somador_notas = 0;
    for (int i = 0; i < numero_de_alunos; i++){
        printf("Nota do Aluno %d: ", i+1);
        scanf("%f", &notas);
        ponteiro[i] = notas;
        somador_notas += notas;
    }

    // Media:
    somador_notas = (somador_notas/numero_de_alunos);
    printf("Media = %.2f \n", somador_notas);

    return 0;
}