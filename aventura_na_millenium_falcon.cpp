# include <stdio.h>

int main(){
    int falcon[3][3];
    int num = 0;
    int i,j;

    do{
        for (i = 0; i < 3; i++){
            for (j = 0; j < 3; j++){
                // Num sera o valor armazenado na matriz
                num = -1;
                scanf("%d", &num);
                if (num == -1){
                    break;
                }
                falcon[i][j] = num;
            }
        }
        if (num != -1){
            // Logica da matriz triangular
            if (falcon[1][0] == 0 && falcon[2][0] == 0 && falcon[2][1] == 0){
                printf("Por baixo\n");
            }
            else if (falcon[0][2] == 0 && falcon[1][2] == 0){
                printf("Por cima\n");
            }
            else{
                printf("Nao pode atravessar\n");
            }
        }
    }while(num != -1);

    return 0;
}