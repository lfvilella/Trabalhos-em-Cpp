# include <stdio.h>

// Define uma constante.
# define TAM 10

int main(){
    printf("TAM = %d\n", TAM);

    for(int i = 1; i <= TAM; i++){
        printf("%d\n", i);
    }
    return 0;
}