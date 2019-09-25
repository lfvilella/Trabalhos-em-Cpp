# include <stdio.h>

int main(){
    int x, *p, ch, *indica;
    ch = 5;
    indica = &ch;
    printf("Memoria = %d\n", indica);
    return 0;
}