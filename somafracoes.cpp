# include <stdio.h>

int main(){
    int a,b,c,d, div1, div2, frac, tot;
    scanf("%d/%d + %d/%d", &a, &b, &c, &d);
    if (b != 0 && d != 0){
        frac = b*d;
        div1 = ((frac/b)*a);
        div2 = ((frac/d)*c);
        tot = div1+div2;
        printf("%d/%d\n", tot, frac);
    }
    else {
        printf("entrada invalida!\n");
    }
    return 0;
}