# include <stdio.h>

int main(){
    int x,y;
    scanf("%d %d", &x,&y);
    if ( x >= 10 && y < 100 ){
        int i,num1,num2;
        for(i=x; i <= y; i++){
            num1 = i%10;
            num2 = i/10;
            //printf("%d %d\n", num1,num2);
            if(num1 != 0 && ((i%num2)==0)){
                printf("%d\n", i);
            }
        }
    }
    else{
        printf("HOJE NAO\n");
    }
    return 0;
}
