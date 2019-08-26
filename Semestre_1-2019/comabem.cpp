# include <stdio.h>

int main(){
    float gorjeta, gasto, total;
    scanf("%f", &gasto);
    gorjeta = gasto*0.1;
    total = gorjeta+gasto;
    printf("%.2f\n", total);
    return 0;
}