# include <stdio.h>

int main(){
    int num = 1000;
    while (num > 999 && num <= 9999){
        scanf("%d", &num);
        if (num > 999 && num <= 9999){
            if(num == (((num/100)+(num%100))*((num/100)+(num%100)))){
                printf("propriedade do 3025!\n");
                num++;
            }
            else{
                printf("numero comum\n");
            }
        }
    }

    return 0;
}
