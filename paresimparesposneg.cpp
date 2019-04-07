# include <stdio.h>

int main(){
    long int N;
    scanf("%d", &N);
    if (N > 0){
        if (N % 2 == 0){
            printf("POSITIVO PAR\n");
        }
        else{
            printf("POSITIVO IMPAR\n");
        }
    }
    else if (N < 0){
        if (N % 2 == 0){
            printf("NEGATIVO PAR\n");
        }
        else{
            printf("NEGATIVO IMPAR\n");
        }
    }
    else if (N == 0){
        printf("NULO\n");
    }
    else{

    }
    
    return 0;    
}