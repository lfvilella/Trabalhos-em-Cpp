# include <stdio.h>
# include <math.h>

int main(){
    float x1, x2;
    float y1, y2;
    scanf("%f %f", &x1, &x2);
    scanf("%f %f", &y1, &y2);

    float calc, distancia;
    calc = ((x1 - x2)*(x1 - x2)) + ((y1 - y2)*(y1 - y2));
    distancia = sqrt(calc);

    printf("%f\n", distancia);
    return 0;
}