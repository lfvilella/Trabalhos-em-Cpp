# include <stdio.h>

int main(){
    int a,b,c,d,e,f,g;
    printf("Insira os valores de a, b e c respectivamente: \n");
    scanf("%d %d %d", &a, &b, &c);
    d = ((a*b)/c);
    e = ((a*a) + b + (5*c));
    f = ((a*b*c) + b + ((c/3)*5) -1);
    g = ((a*b*c)*(a*b*c)*(a*b*c)/2);
    printf("O valor da 1 conta é: %d \n", d);
    printf("O valor da 2 conta é: %d \n", e);
    printf("O valor da 3 conta é: %d \n", f);
    printf("O valor da 4 conta é: %d \n", g);
    return 0;
}