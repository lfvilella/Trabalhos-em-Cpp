# include <stdio.h>
# include <iostream>
# include <string.h>
# include <stdlib.h>
# include <stdbool.h>

// Funcao Limpa Tela
void Limpa_Tela(){
    system("clear");
}

int main(){
    float notas, soma_notas;
    int quantidade_competidores, matricula, n = 0, continuar ;
    float nota_maior = 10, nota_menor = 0;
    printf("Insira a quantidade de competidores\n");
    scanf("%d", &quantidade_competidores);
    if (quantidade_competidores < 1){
        return 0;
    }
    else{
        for(int i = 1; i <= quantidade_competidores; i++){
            printf("Insira a matricula do competidor %d: \n", i);
            scanf("%d", &matricula);
            n = 1;
            soma_notas = 0;
            nota_maior = 10;
            nota_menor = 0;
            while(n <= 5){
                printf("Insira a nota %d do competidor %d\n", n,i);
                scanf("%f", &notas);
                soma_notas += notas;
                if (notas > nota_menor){
                    nota_menor = notas;
                }
                if (notas < nota_maior){
                    nota_maior = notas;
                }
                n++;
            }
            soma_notas = (soma_notas-nota_maior-nota_menor);
            printf("O competidor %d, de matricula %d. Teve nota final = %0.1f\n", i, matricula, soma_notas);
            printf("-------------\n");
            printf("Para proseguir e limpar a tela digite 1: \n");
            scanf("%d", &continuar);
            if(continuar == 1){
                Limpa_Tela();
                continue;
            }
            else{
                continue;
            }
        }
    }
    return 0;
}