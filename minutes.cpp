# include <stdio.h>

int main(){
    int minutes, seconds;
    printf("Insira a quantidade em minutos para conversão em segundos: \n");
    scanf("%d", &minutes);
    seconds = (minutes*60);
    printf("O valor em segundos de %d minutos é %d \n", minutes, seconds);
    return 0;
}
