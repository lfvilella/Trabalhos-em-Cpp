# include <stdio.h>

int ContaDigitosPares(int x);

int main(){
    int num;
    scanf("%d", &num);
    printf("%d\n", ContaDigitosPares(num));

    return 0;
}

int ContaDigitosPares(int x){
    int aux, quantia_digitos_pares = 0;

    if (x <= 0){
        return 0;
    }
    else{
        aux = x % 10;
        x = x/10;

        quantia_digitos_pares += ContaDigitosPares(x);

        if (aux % 2 == 0){
            quantia_digitos_pares++;
        }

        return quantia_digitos_pares;
    }
}