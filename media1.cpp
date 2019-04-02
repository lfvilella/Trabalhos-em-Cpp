# include <stdio.h>

int main(){
    double A,B,a,b,media;
    scanf("%lf %lf", &a, &b);
    A = a*3.5/11;
    B = b*7.5/11;
    media = A+B;
    printf("MEDIA = %.5lf \n", media);
    return 0;
}