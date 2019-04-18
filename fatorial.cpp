# include <stdio.h>

int main(){
    int num;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &num);
    while( num >= 0){
        int i = 1;
        int fat = 1;
        if (num == -1){
            break;
        }
        while( i <= num){
            fat = fat * i;
            i++;
        }
    printf("Fatorial: %d\n", fat);
    break;
    }
    if( num < -1){
        printf("Fatorial: 1\n");
    }
    return 0;
}