# include <stdio.h>

int MultiplicaPelaSoma(int num1, int num2);

int main(){
    int numero1, numero2;
    scanf("%d %d", &numero1, &numero2);

    printf("%d\n", MultiplicaPelaSoma(numero1, numero2));

    return 0;
}

int MultiplicaPelaSoma(int num1, int num2){
    if (num2 == 0){
        return 0;
    }
    else if (num2 == 1){
        return num1;
    }
    else if (num2 < 0){
        return - MultiplicaPelaSoma(num1, -num2);
    }
    else{
        return num1 + MultiplicaPelaSoma(num1, num2-1);
    }
}