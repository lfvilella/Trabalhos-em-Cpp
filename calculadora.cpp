# include <stdio.h>

int main(){
    float mult, divi, add, sub, n1, n2;
    printf("Insira dois valores para efetuar os calculos: \n");
    scanf("%f %f", &n1, &n2);
    mult = n1*n2;
    divi = n1/n2;
    add = n1+n2;
    sub = n1-n2;
    printf("O valor da Multiplicacao é: %f \n", mult);
    printf("O valor da Divisao é: %f \n", divi);
    printf("O valor da Adicao é: %f \n", add);
    printf("O valor da Subtracao é: %f \n", sub);
    return 0;
}