#include <stdio.h>

int main(){
    int n1, n2, quociente, resto;
    printf("Digite dois valores inteiros para a divisao: \n");
    scanf("%d %d", &n1, &n2);
    quociente = (n1/n2);
    resto = (n1%n2);
    printf("A divisão é %d e o resto é %d \n", quociente, resto);
    return 0;
}