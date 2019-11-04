# include <stdio.h>

int Mdc(int a, int b);
int Mmc(int x, int y);

int main(){
    int a,b;
    scanf("%d %d", &a,&b);
    printf("%d\n", Mdc(a,b));
    printf("%d\n", Mmc(a,b));
    return 0;
}

int Mdc(int x, int y){
    if(y == 0){
    	return x;
    }

	return Mdc(y, x % y);
}

int Mmc(int x, int y){
    int div = 0;
    if (y == 0){
        return x;
    }
    else{
        div = (x*y)/(Mdc(x,y));
    }
    return div;
}