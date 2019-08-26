#include <stdio.h>

int main(){
    int km, lit, km_por_litro;
    printf("Digite o valor de quilometro e a quantia de litros: \n");
    scanf("%d %d", &km, &lit);
    km_por_litro = (km/lit);
    printf("Seu carro fez %d quilometros por litro \n", km_por_litro);
    return 0;    
}