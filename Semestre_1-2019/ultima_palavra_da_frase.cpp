#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char frase[400], ultima_frase[100];
    int i, tamanho, contador=0;

    fgets(frase, 400, stdin);
    tamanho = strlen(frase);

    // Teste: Frase Qualquer
    for(i=0; i < tamanho; i++){
        ultima_frase[contador]=frase[i];
        if(ultima_frase[contador]==' '){
            contador=0;
        }
        else{
            contador++;
        }
    }

    // Coloca o fim na strings
    ultima_frase[contador]='\0';
    printf("%s", ultima_frase);
    
    return 0;
}