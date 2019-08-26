# include <stdio.h>

int main(){
    float altura, peso, imc;
    printf("Insira o valor de sua altura(em metros) e o peso(em kg), respectivamente calcular o IMC: \n");
    scanf("%f %f", &altura, &peso);
    imc = peso/(altura*altura);
    printf("Seu IMC é: %f \n", imc);
    return 0;
}