#include <stdio.h>

int main(){
    int n , *pn ;
    pn = &n ;
    scanf("%d" , *pn); //Aqui o erro
    printf("%d" , n);
    return 0 ;
}