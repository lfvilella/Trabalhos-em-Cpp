# include <stdio.h>

int main(){
    float base, altura, area;
    printf("Bem vindo ao Calculador de Area do Triangulo ! \n");
    printf("Insira o valor da base e da altura, respectivamente: \n");
    scanf("%f %f", &base, &altura);
    area = (base*altura)/2;
    printf("O valor da Area do triangulo é: %f \n", area);
    return 0;
}