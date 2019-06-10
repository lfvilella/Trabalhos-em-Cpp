# include <stdio.h>
# define TAM 101
int main(){
    int vetor[TAM];
    for (int i = 0; i < TAM; i++){
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < TAM-1; i++){
        if (vetor[i] == vetor[TAM-1]){
            printf("%d\n",i);
        }
    }

    return 0;
}