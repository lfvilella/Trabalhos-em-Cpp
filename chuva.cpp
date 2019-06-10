# include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int periodo_1[n][n], periodo_2[n][n], total[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &periodo_1[i][j]);
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &periodo_2[i][j]);
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            total[i][j] = periodo_1[i][j] + periodo_2 [i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", total[i][j]);
        }
        printf("\n");
    }
    return 0;
}