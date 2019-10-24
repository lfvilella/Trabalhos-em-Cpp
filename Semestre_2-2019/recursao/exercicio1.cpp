# include <stdio.h>

int Mdc(int a, int b);

int main(){
    int a,b;
    scanf("%d %d", &a,&b);
    printf("%d\n", Mdc(a,b));
    return 0;
}

int Mdc(int x, int y){
    if(y == 0){
    	return x;
    }

	return Mdc(y, x % y);
}