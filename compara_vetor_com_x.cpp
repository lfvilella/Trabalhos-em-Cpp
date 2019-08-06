# include <stdio.h>

int Compara_array(int vetor_comparar[10]){
    int x, contador;
    scanf("%d", &x);

    for (int i = 0; i < 10; i++){
        if (vetor_comparar[i] == x){
            contador++;
        }
    }
    return printf("X = %d\n", contador);
}

int Le_array(int vetor[10]){
    for (int i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
    }
    return Compara_array(vetor);
}

int main(){
    int array[10];
    Le_array(array);

    return 0;
}