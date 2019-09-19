#include <stdio.h>

int main ( ) {
    float f;
    float *p;
    p = &f;
    scanf("%f", p);
    printf("%f", *p);
        
    return 0;
}