# include <stdio.h>

int main(){
    int a,b,c,d,total,A,B;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    A = a*b;
    B = c*d;
    total = A-B;
    printf("DIFERENCA = %d \n",total);
    return 0;
}