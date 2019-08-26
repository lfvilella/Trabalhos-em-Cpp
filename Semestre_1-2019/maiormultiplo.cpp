# include <stdio.h>

int main(){
    int m,n,conta;
    scanf("%d %d", &m, &n);
    if (m <= n){
        int cont = 1;
        int maior_multiplo;
        // Laço para tirar o maior multiplo de (m) no perido menor que (n)
        while(maior_multiplo <= n){
            maior_multiplo = cont * m;
            cont++;
        }
        if(maior_multiplo > n){
            maior_multiplo = maior_multiplo - m;
        }
        printf("%d\n", maior_multiplo);
    }    
    else {
        printf("sem multiplos menores que %d\n", n);
    }

    return 0;
}