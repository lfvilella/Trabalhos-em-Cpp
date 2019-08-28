# include <stdio.h>
# include <string.h>
# include <stdlib.h>

char conta_frases(char str[], const int n){

    char *ponteiro;
    char *const finalVetor = str + n; // Aponta pro final do vetor

    int frases = 1;

    for (ponteiro = str; ponteiro < finalVetor; ponteiro++){
        if (*ponteiro == ' '){
            frases++;
        }
    }
    return frases;
}

int main(){
    char word[50];
    fgets(word, 50, stdin);
    printf("A frase tem %d palavras\n", conta_frases(word, 50));

    return 0;
}