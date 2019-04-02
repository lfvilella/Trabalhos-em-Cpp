# include <stdio.h>

int main(){
    float area, raio, pi, cm;
    scanf("%f", &raio);
    cm = raio/100;
    pi = 3.14159;
    area = pi*(cm*cm);
    printf("Area = %.4f \n", area);
    return 0;
}