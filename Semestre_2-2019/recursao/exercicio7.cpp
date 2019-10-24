# include <stdio.h>

void DecimalBinário(int number, int result, int array[], int idx);

int main(){
    int numero;
    scanf("%d", &numero);

    int vetor[50];
    int idx = 0;
    int resultado = numero/2;

    DecimalBinário(numero, resultado, vetor, idx);
    printf("\n");

    return 0;
}

void DecimalBinário(int number, int result, int array[], int idx){
    if (result != 0){
        array[idx] = number % 2;
        result = number/2;
        idx++;
        DecimalBinário(result, number/2, array, idx);
    }
    else{
        for (int j = idx-1; j >= 0; j--){
            printf("%d", array[j]);
        }
    }
}