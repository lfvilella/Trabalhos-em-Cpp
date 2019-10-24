# include <stdio.h>

void Troca(int *x, int *y);
int SomaIntervalo(int num1, int num2);

int main(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    if (num1 > num2){
        Troca(&num1, &num2);
    }

    printf("%d\n", SomaIntervalo(num1, num2));

    return 0;
}

void Troca(int *x, int *y){
    int num = *x;
    *x = *y;
    *y = num;
}

int SomaIntervalo(int num1, int num2){
    if (num1 == num2){
        if (num1 > 0){
            return num1;
        }
        else{
            return 0;
        }
    }
    else{
        if (num1 > 0){
            return num1 + SomaIntervalo(num1+1, num2);
        }
        else{
            return SomaIntervalo(num1+1, num2);
        }
    }

}