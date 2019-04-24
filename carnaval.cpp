# include <stdio.h>

int main(){
    int quantidade_de_numeros = 5;

    // Lista para adicionar valores ex: lista = [7.1][2.1][5.2][2.2][9.9]
    float lista_de_inteiros[quantidade_de_numeros];
    scanf("%f %f %f %f %f", &lista_de_inteiros[0], &lista_de_inteiros[1], &lista_de_inteiros[2], &lista_de_inteiros[3], &lista_de_inteiros[4]);

    // Bubble sort (Ordena)
    int ultimo_idx = (
        (sizeof(lista_de_inteiros) / sizeof(*lista_de_inteiros)) -1
    );


    bool alterado = true;
    while(alterado){
        alterado = false;
        for(int idx = 0; idx < ultimo_idx; ++idx){
            float &anterior = lista_de_inteiros[idx];
            float &proximo = lista_de_inteiros[idx + 1];
            if (anterior > proximo) {
                float aux = anterior;
                anterior = proximo;
                proximo = aux;
                alterado = true;
            }
        }
    }

    float menor_valor = lista_de_inteiros[0];
    float maior_valor = lista_de_inteiros[ultimo_idx];
    float soma_valores = 0;
    
    // Tira o idx 0 (menor nota) e nao chega na maior nota pq idx < ultimo_idx ( e nao idx <= ultimo_idx )
    for(int idx = 1; idx < ultimo_idx; ++idx){
        soma_valores += lista_de_inteiros[idx];
    }

    // Printa o maior e menor valor
        // printf("menor %f \n", menor_valor);
        // printf("maior %f \n", maior_valor);

    printf("%.1f\n", soma_valores);

    // Tire de comentario esse for pra vc ver o idx em açao
        // for(int idx = 0; idx <= ultimo_idx; ++idx){
        //     printf("idx %d: %f \n", idx, lista_de_inteiros[idx]);
        // }


    return 0;
}