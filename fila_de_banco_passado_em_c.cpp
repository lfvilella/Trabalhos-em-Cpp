# include <stdio.h>

int main(){
    int n,m,k;
    scanf("%d%d%d", &n, &m, &k);
    int fila1[n], fila2[m], i, j;
    for (i=0; i<n; i++){
        scanf("%d", &fila1[i]);
    }
    for (i=0; i<m; i++){
        scanf("%d", &fila2[i]);
    }
    if (k==1){
        for (i = 0, j = 0; i < n && j < m; i++ ,j++){
            printf("%d\n%d\n", fila2[j], fila1[i]);
        }
        if (i == n && j < m){
            for(;j < m; j++){
                printf("%d\n", fila2[j]);
            }
        }
        else if (i < n && j==m){
            for(;i < n; i++){
                printf("%d\n", fila1[i]);
            }
        }
    }
    else if (k==2){
        for (i = 0, j = 0; i < n && j < m; i++, j++){
            printf("%d\n%d\n", fila1[i], fila2[j]);
        }
        if (i == n && j < m){
            for(;j < m; j++){
                printf("%d\n", fila2[j]);
            }
        }
        else if (i < n && j==m){
            for(;i < n; i++){
                printf("%d\n", fila1[i]);
            }
        }
    }
    return 0;
}