# include <stdio.h>
# include <stdlib.h>

struct teste{
    int x;
};

void AlocaVetor(struct teste **vetor, int n){
    *vetor = (struct teste*) calloc(n, sizeof(struct teste));
}

int main(){
    int tamanho = 4;
    // int *ponteiro;
    // ponteiro = AlocaVetor(tamanho);
    
    struct teste *ponteiro=NULL;
    AlocaVetor(&ponteiro, tamanho);
    for (int i = 0; i < tamanho; i++){
        ponteiro[i].x = i; 
    }
    for (int i = 0; i < tamanho; i++){
        printf("%d\n", ponteiro[i].x); 
    }
    free(ponteiro);
    return 0;
}