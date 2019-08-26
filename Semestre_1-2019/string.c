# include <stdio.h>
# include <stdlib.h>

int main(){
    char word[255];
    printf("Type some word: ");

    // Limpa o Buffer
    setbuf(stdin, 0);

    // Lendo
    fgets(word, 255, stdin);

    // Limpa as casas não utilizdas
    word[strlen(word)-1] = '\0';

    // Printa
    printf("%s", word);

    system("pause");
}