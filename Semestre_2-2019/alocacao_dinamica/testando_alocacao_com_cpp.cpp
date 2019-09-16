# include <stdio.h>
# include <stdlib.h>
# include <new>

int main(){
    int tamanho;
    scanf("%d", &tamanho);

    int *ponteiro = new int[tamanho];

    for (int i = 0; i < tamanho; i++){
        ponteiro[i] = i;
        printf("\n%d", ponteiro[i]);
    }
    printf("\n");
    
    // Limpa memória
    free(ponteiro);
    return 0;
}