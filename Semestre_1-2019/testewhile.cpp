# include <stdio.h>

int main(){
    int a = 0;
    int b = 5;
    int c = 0;

    // Confere e depois executa
    while (a <= 10){
        printf("%d\n", a);
        a++;
    }

    a = 20;
    
    // Dowhile = Executa e depois confere
    do {
        printf("%d\n", a);
        a++;
    }while(a <= 10);

    // Decrescendo
    printf("Decrescendo\n");
    while(b >= 0){
        printf("%d\n", b);
        b--;
    }

    // Numeros impares
    while ( c <= 10){
        if (c%2==1){
            printf("%d\n", c);
        }
        else{
            //printf("%d - Nao e impar\n", c);
        }
        c++;
    }

    // Imprimindo Numeros entre um intervalo
    int x,y;
    scanf("%d %d", &x, &y);
    while (x <= y){
        printf("Intervalo : %d\n", x);
        x++;
    }

    return 0;
}