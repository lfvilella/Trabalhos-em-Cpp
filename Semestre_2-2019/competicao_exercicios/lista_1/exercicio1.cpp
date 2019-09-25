# include <stdio.h>
# include <stdlib.h>

int main (){
    int vetor[8] = {0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 };
    int i;
    int *ptr = vetor;

    for (i =0; i <8; i++){
        printf( "%d", *ptr++);
    }
    return 0 ;
}

// Printa do 0 ao 7