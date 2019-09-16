# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main(){
    int tamanho_palavra;
    scanf("%d", &tamanho_palavra);

    char *ponteiro;
    ponteiro = (char *) malloc(tamanho_palavra * sizeof(char));

    getchar();
    fgets(ponteiro, tamanho_palavra, stdin);

    int i, j=0;
    for (i=strlen(ponteiro)-1; i >= 0; i--){
        printf("%c", ponteiro[i]);
    }
    printf("\n");

    return 0;
}