# include <stdio.h>
# include <string.h>
# include <iostream>

using namespace std;

struct cadastro{
    int led;
    char nome_produto[20];
    int quantidade;
    float valor;
};

int main(){
    int n;
    scanf("%d", &n);

    struct cadastro produto[n];

    int i;
    for (i = 0; i < n; i++){
        printf("Produto %d\n", i+1);
        scanf("%d", &produto[i].led);
        cin >> produto[i].nome_produto;
        scanf("%d", &produto[i].quantidade);
        scanf("%f", &produto[i].valor);
    }
    // Pedido
    int codigo = 1, quantidade_pedido;
    float valor_pedido = 0;
    while (codigo != 0){
        scanf("%d", &codigo);
        scanf("%d", &quantidade_pedido);
        for (int j = 0; j < n; j++){
            if (codigo == produto[j].led){
                if (quantidade_pedido <= produto[j].quantidade){
                    valor_pedido += (quantidade_pedido*produto[j].valor);
                    produto[j].quantidade -= quantidade_pedido;
                }
                else{
                    printf("Quantidade Invalida !\n");
                }
            }
            else{
                printf("Codigo Invalido !\n");
            }
        }
    }
    printf("O valor total do pedido é %.2f \n", valor_pedido);
    
    return 0;
}