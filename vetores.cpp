# include <stdio.h>
# define SIZE 3

int main(){
    int vetor[SIZE], cont;

    // Valor para o vetor:
    vetor[0] = 5;
    vetor[1] = 25;
    vetor[2] = 125;

    //Exibindo vetor em for:
    for(cont = 0; cont < SIZE; cont++){
        printf("Posicao %d : %d\n", cont, vetor[cont]);
    }

    // +1 para cada posiçao:
    for(cont = 0; cont < SIZE; cont++){
        printf("Posicao %d : %d\n", cont, vetor[cont] + 1);
    }

    // Outro Modo de fazer:
    for(cont = 0; cont < SIZE; cont++){
        vetor[cont] = vetor[cont] + 5;
        printf("Posicao %d : %d\n", cont, vetor[cont]);
    }

    // Lendo valor apara o vetor: TA ESTRANHO CUIDADO !
    for(cont = 0; cont < SIZE; cont++){
        scanf("%d\n", &vetor[cont]);
        printf("Posicao %d : %d\n", cont, vetor[cont]);
    }

    return 0;    
}