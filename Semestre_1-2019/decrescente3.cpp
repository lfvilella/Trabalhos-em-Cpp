# include <stdio.h>

int main(){
    int num1,num2,num3;
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3 && num2 >= num3){
        printf("%d\n", num1);
        printf("%d\n", num2);
        printf("%d\n", num3);
    }

    else if (num1 >= num2 && num1 >= num3 && num3 >= num2){
        printf("%d\n", num1);
        printf("%d\n", num3);
        printf("%d\n", num2);
    }

    else if(num2 >= num1 && num2 >= num3 && num1 >= num3){
        printf("%d\n", num2);
        printf("%d\n", num1);
        printf("%d\n", num3);
    }

    else if (num2 >= num1 && num2 >= num3 && num3 >= num1){
        printf("%d\n", num2);
        printf("%d\n", num3);
        printf("%d\n", num1);
    }

    else if (num3 >= num1 && num3 >= num2 && num1 >= num2){
        printf("%d\n", num3);
        printf("%d\n", num1);
        printf("%d\n", num2);
    }

    else{
        printf("%d\n", num3);
        printf("%d\n", num2);
        printf("%d\n", num1);
    }

    return 0; 
}