# include <stdio.h>

void troca(int *x, int *y){
    int num = *x;
    *x = *y;
    *y = num;
}

int main(){
    int a = 3, b = 5, c=1;
    scanf("%d %d %d", &a,&b,&c);
    printf("A = %d --- B = %d --- C = %d\n", a,b,c);

    if (a > b){
        troca(&a,&b);
        if (b > c){
            troca(&b,&c);
        }
        if (a>b){
            troca(&a,&b);
        }
    }
    else if (a > c){
        troca(&a,&c);
        if (b > c){
            troca(&b,&c);
        }
    }
    else{
        if (b > c){
            troca(&b,&c);
        }
    }

    printf("A = %d --- B = %d --- C = %d\n", a,b,c);

    return 0;
}