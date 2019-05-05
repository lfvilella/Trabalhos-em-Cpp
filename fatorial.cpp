# include <stdio.h>

int main(){
    int num;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &num);

    if( num >= 0){
        int i = 1;
        int fat = 1;
        while( i <= num){
            fat = fat * i;
            //printf("Sou i: %d e eu so fat: %d\n", i, fat );
            i++;
        }
        printf("Fatorial: %d\n", fat);
    }
    else{
        printf("Fatorial: 1\n");
    }

    return 0;
}