# include <stdio.h>
# include <stdlib.h>

int main(){
    float number;
    float *pointer;
    pointer = &number;
    scanf("%f", pointer);
    printf("%.2f\n", *pointer);
    return 0;
}