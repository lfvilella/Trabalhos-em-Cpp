# include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if ((a == 0 || a == 1) && (b == 0 || b == 1) && (c == 0 || c ==1)){
        if ( a != b && a != c){
            printf("A\n");
        }
        else if ( b != a && b != c){
            printf("B\n");
        }
        else if ( c != b && c != a){
            printf("C\n");
        }
        else{
        printf("*\n");
        }
    }

    else{
        printf("*\n");
    }     
    return 0;
}