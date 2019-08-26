# include <stdio.h>

int main(){
    float a,b,c, A,B,C,  total;
    scanf("%f %f %f", &a, &b, &c);
    A = a*0.2;
    B = b*0.3;
    C = c*0.5;
    total = (A+B+C);
    printf("MEDIA = %.1f\n", total);
    return 0;
}