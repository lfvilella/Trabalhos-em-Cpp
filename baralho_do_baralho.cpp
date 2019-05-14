# include <stdio.h>

int Cards(int cartas[3]){
    int contador_de_pontos = 0, card[3];
    card[3] = cartas[3];

    if (card[0]+1 == card[1] && card[1]+1 == card[2]){
        contador_de_pontos += card[0];
    }

    if (card[0] == card[1] && card[1] == card[2]){
        contador_de_pontos += card[0];
    }

    if (card[0] == card[1] && card[1] < card[2]){
        contador_de_pontos += (card[0]/2);
    }

    if (card[1] == card[2] && card[0] < card[2]){
        contador_de_pontos += (card[2]/2);
    }

    int soma_cartas = (card[0] + card[1] + card[2]);
    if (soma_cartas == 8){
        contador_de_pontos += 8;
    }

    return contador_de_pontos;
}

int Winner(int lista_a[3], int lista_b[3]){
    lista_de_cartas_paes[3] = lista_a[3];
    lista_de_cartas_willy[3] = lista_b[3];
    int soma_paes[3] = Cards(lista_de_cartas_paes[3]);
    int soma_willy[3] = Cards(lista_de_cartas_willy[3]);
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

    printf(Winner(lista_de_cartas_paes, lista_de_cartas_willy));

    return 0;
}