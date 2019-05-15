# include <stdio.h>

int Cards(int cartas[3]){
    // Deixando em ordem crescente as cartas
    int variavel_temporaria;
    for (int i=0; i < 3; i++){ // sao apenas 3 cartas
        for (int j=i+1; j < 3; j++){
            if(cartas[i] > cartas[j]){
                variavel_temporaria = cartas[i];
                cartas[i] = cartas[j];
                cartas[j] = variavel_temporaria;
            }
        }
    }

    // Comeca a contar os pontos
    int contador_de_pontos = 0;

    if (cartas[0]+1 == cartas[1] && cartas[1]+1 == cartas[2]){
        contador_de_pontos += cartas[0];
    }

    if (cartas[0] == cartas[1] && cartas[1] == cartas[2]){
        contador_de_pontos += cartas[0];
    }

    if (cartas[0] == cartas[1] && cartas[1] < cartas[2]){
        contador_de_pontos += (cartas[0]/2);
    }

    if (cartas[1] == cartas[2] && cartas[0] < cartas[2]){
        contador_de_pontos += (cartas[2]/2);
    }

    int soma_cartas = (cartas[0] + cartas[1] + cartas[2]);
    if (soma_cartas == 8){
        contador_de_pontos += 8;
    }

    return contador_de_pontos;
}

int Winner(int lista_a[3], int lista_b[3]){
    int soma_paes = Cards(lista_a);
    int soma_willy = Cards(lista_b);
    int resultado;
    if (soma_paes == soma_willy){
        resultado = 0;
    }
    else if (soma_paes > soma_willy){
        resultado = 1;
    }
    else if (soma_paes < soma_willy){
        resultado = 2;
    }
    return resultado;
}

int main(){
    int lista_de_cartas_paes[3];
    scanf("%d %d %d", &lista_de_cartas_paes[0], &lista_de_cartas_paes[1], &lista_de_cartas_paes[2]);
    int lista_de_cartas_willy[3];
    scanf("%d %d %d", &lista_de_cartas_willy[0], &lista_de_cartas_willy[1], &lista_de_cartas_willy[2]);

    printf("%d \n", Winner(lista_de_cartas_paes, lista_de_cartas_willy));

    return 0;
}