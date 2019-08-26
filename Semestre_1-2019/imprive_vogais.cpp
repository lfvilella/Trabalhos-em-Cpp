# include <stdio.h>
# include <stdlib.h>

int main(){
    char sentence[10];

    // Limpa o Buffer
    setbuf(stdin, 0);

    // Lendo
    fgets(sentence, 10, stdin);

    // OLA MUNDO = O A U O
    for (int i = 0; i < 10; i++){
        if (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u'){
            printf("Vogal = %c\n", sentence[i]);
        }
    }

    return 0;
}