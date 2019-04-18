# include <stdio.h>

int main(){
    int n,m;
    scanf("%d %d", &n, &m);
    while(n <= m){
        if(n%2==1){
            printf("%d\n", n);
        }
        n++;
    }
}