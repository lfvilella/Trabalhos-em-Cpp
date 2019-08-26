# include <stdio.h>

void troca_A_B(int *x, int *y){
    int num = *x;
    *x = *y;
    *y = num;
}

int main(){
    int a = 3, b = 5;
    printf("A = %d --- B = %d\n", a,b);
    troca_A_B(&a, &b);
    printf("A = %d --- B = %d\n", a,b);

    return 0;
}