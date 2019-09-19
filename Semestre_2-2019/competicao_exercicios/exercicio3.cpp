#include <stdio.h>

int main ( ) {
    int mat[]={0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 } ;
    int i ;

    for ( i =0; i <8; i++){
        printf( "%d " , *(mat + i));
    }
        
    return 0;
}