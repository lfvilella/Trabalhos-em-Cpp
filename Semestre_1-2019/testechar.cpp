# include <stdio.h>

int main(){
    char letra = 'x';
    int a = 0, b = 10;

    while( a<= 10){
        printf("A = %d\n", a);
        ++a; //a = a+1;
    }
    
    while(b >= 1){
        printf("B = %d\n", b);
        --b; //b = b-1;
    }

    if (letra == 'x'){
        printf("Tabelas ASCII\nA letra é X.\nE o num é %d\n", letra);
    }
    else{
        return 0;
    }
    return 0;
}