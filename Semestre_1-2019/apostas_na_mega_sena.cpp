#include <stdio.h>
#include <string.h>

int main(){
    int numero_de_apostas;
    scanf("%d", &numero_de_apostas);

    // Maximo de numeros para apostar = 10
    int apostas[numero_de_apostas][10];
    char virgula;
    int i, j;

    for (i = 0; i < numero_de_apostas; i++){
        for (j = 0; j < 10; j++){
            scanf("%d%c", &apostas[i][j], &virgula);
            if (virgula == '\n'){
                break;
            }
        }
    }

    int resultado_loteria[6];
    for (i = 0; i < 6; i++){
        scanf("%d",&resultado_loteria[i]);
    }

    int vencedor = 0;
    int idx_loteria;
    for (i = 0; i < numero_de_apostas; i++){
        int pontos = 0;
        for (j = 0; j < 10; j++){
            for (idx_loteria = 0; idx_loteria < 6; idx_loteria++){
                if (apostas[i][j] == resultado_loteria[idx_loteria]){
                    pontos++;
                }
            }
        }
        if (pontos > 5){
            vencedor++;
        }
    }


    printf("Total de ganhadores: %d\n", vencedor);

    return 0;
}