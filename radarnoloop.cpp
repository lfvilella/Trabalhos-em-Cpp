# include <stdio.h>

int main(){
    int dia;
    float velomax, velo;
    printf("Insira o dia da semana (ex: dom = 1, seg = 2, ...): \n");
    scanf("%d", &dia);
    printf("Insira a sua velocidade: \n");
    scanf("%f", &velo);

    if (dia < 1 || dia > 7){
        printf("Invalido !\n");
        return 0;
    }
    
    int lista_final_de_semana[] = {1,7};
    int lista_dia_de_semana[] = {2,3,4,5,6};
    bool eh_final_de_semana = false;

    for (int idx = 0; idx < 2; ++idx){
        int finaldesemana = lista_final_de_semana[idx];
        if (dia == finaldesemana){
            eh_final_de_semana = true;
        }
    }

    if (eh_final_de_semana){
        printf("Hoje é final de semana, velocidade máximo 80km/h !\n");
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

    else if (!eh_final_de_semana){
        printf("Hoje é dia de semana, velocidade máximo 60km/h !\n");
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
    
    else{
        printf("Informaçao invalida !\n");
    }

    return 0;
}