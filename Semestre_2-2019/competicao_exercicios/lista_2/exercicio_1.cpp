#include <stdio.h>

int main(){
    int a, b = 0;
    int *ptr=&b;
    a = *ptr;
    a = 4;
    (*ptr)++;
    a--;
    (*ptr) += a;
    printf( "a = %d b = %d *ptr = %d\n" , a , b , *ptr) ;
    return 0;
}