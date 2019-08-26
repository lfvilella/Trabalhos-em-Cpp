# include <stdio.h>
# include <iostream>

float Soma_Dois_Valores(float value1, float value2);

float Area_do_Circulo(float raio){
    return (raio*raio)*3.14159;
}

void Limpa_Tela(){
    system("clear");
}

int main(){
    int continua;

    // Calcula Area do Circulo
    float raio_do_main;
    printf("Insira o raio\n");
    scanf("%f", &raio_do_main);
    printf("Area do circulo = %.2f \n", Area_do_Circulo(raio_do_main));

    // Para pra perdir para limpar a tela
    printf("Press '1' \n");
    scanf("%d", &continua);
    if(continua == 1){
        Limpa_Tela();
        continua = 0;
    }
    else{
        Limpa_Tela();
        continua = 0;
    }

    // Soma valores
    printf("Insira dois valores para somar: \n");
    float num1,num2;
    scanf("%f %f", &num1 ,&num2);
    printf("O valor da soma = %.2f\n", Soma_Dois_Valores(num1,num2));

    return 0;
}

float Soma_Dois_Valores(float value1, float value2){
    return value1+value2;
}