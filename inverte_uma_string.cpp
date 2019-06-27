#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char frase[255];
    char frase_invertida[255];
    int i,tamanho, j=0;

    gets(frase);
    tamanho = strlen(frase);

    for ( i = tamanho; i >= 0; i--){
        frase_invertida[j] = frase[i];
        j++;
        // printf ("%c",frase[i]);
    }
    for (i=0; i < tamanho; i++){
        printf("%d", frase_invertida[i]);
    }
    printf ("%s",frase_invertida);
    return 0;
}