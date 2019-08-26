# include <stdio.h>

int main(){
    int x, *p;
    x =5;
    p = &x;
    printf("x = %d\n", x);
    printf("&x = %d\n", &x);
    printf("*p = %d\n", *p);
    printf("p = %d\n", p);
    return 0;
}