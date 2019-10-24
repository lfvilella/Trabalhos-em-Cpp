# include <stdio.h>

int ImprimePares(int numero);

int main(){
    int num;
    scanf("%d", &num);
    ImprimePares(num);

    return 0;
}

int ImprimePares(int numero){
    if (numero < 0){
        return 0;
    }
    else{
        ImprimePares(numero-1);
    }
    if (numero % 2 == 0){
        printf("%d\n", numero);
    }
}