# include <stdio.h>

int main(){
    int dia, feriado, semana;
    float velomax, velo;
    printf("Insira o dia da semana (ex: dom = 1, seg = 2, ...): \n");
    scanf("%d", &dia);
    printf("Insira a sua velocidade: \n");
    scanf("%f", &velo);
    if (dia == 2 || dia == 3|| dia == 4|| dia == 5|| dia == 6){
        printf("Hoje é dia de semana, veloxidade máximo 60km/h !\n");
        velomax = 60;
        if (velo <= velomax){
            printf("Dentro da velocidade permitida !\n");
        }
        else if (velo <= (velomax*1.2)){
            printf("Ultrapassou a velocidade:\nMulta de R$85,13 e 4 pontos na carteira\n");
        }
        else if (velo <= (velomax*1.5)){
            printf("Ultrapassou a velocidade:\nMulta de R$127,69 e 5 pontos na carteira\n");
        }
        else if (velo > (velomax*1.5)){
            printf("Ultrapassou a velocidade:\nMulta de R$574,7 e apreensao da carteira\n");
        }
    }

    else if (dia == 1 || dia == 7){
        printf("Hoje é dia de semana, veloxidade máximo 60km/h !\n");
        velomax = 80;
        if (velo <= velomax){
            printf("Dentro da velocidade permitida !\n");
        }
        else if (velo <= (velomax*1.2)){
            printf("Ultrapassou a velocidade:\nMulta de R$85,13 e 4 pontos na carteira\n");
        }
        else if (velo <= (velomax*1.5)){
            printf("Ultrapassou a velocidade:\nMulta de R$127,69 e 5 pontos na carteira\n");
        }
        else if (velo > (velomax*1.5)){
            printf("Ultrapassou a velocidade:\nMulta de R$574,7 e apreensao da carteira\n");
        }
    }    
    
    else{
        printf("Informaçao invalida !\n");
    }

    return 0;
}