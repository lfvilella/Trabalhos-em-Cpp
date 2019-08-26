// # include <stdio.h>

// int main(){
//     int cafe, troco, pagamento, quantidade, pedido_total;
//     cafe = 7;
//     printf("Bom dia!\nGostaria de um café expresso ? \nInsira a quantidade: \n");
//     scanf("%d", &quantidade);
//     pedido_total = cafe * quantidade;
//     printf("O valor do café é R$7,00 \nO total de seu pedido é: %d reais", pedido_total);
//     printf("\nSó aceitamos notas de R$5,00\n");
//     printf("\nInsira o pagamento: \n");
//     scanf("%d", &pagamento);
//     troco = pagamento%pedido_total;
//     printf("Infelizmente não é possivel devolver seu troco de: %d reais", troco);
//     printf("\nTenha um bom dia !\n");
//     return 0;
// }

# include <stdio.h>

int main(){
    int cafe, troco, pagamento, quantidade, pedido_total;
    cafe = 7;
    printf("Good morning!\nTake your coffee for R$7,00\nBut we only accept notes from R$5,00\nHow many coffee do you can:");
    scanf("%d", &quantidade);
    pedido_total = cafe * quantidade;
    printf("\nThis is the total order: %d real\n", pedido_total);
    printf("\nInsert your money (notes = R$5,00): ");
    scanf("%d", &pagamento);
    if (pagamento%5==0){
        troco = pagamento%pedido_total;
        if(pagamento==pedido_total){
            printf("Great! Dont have refund.\nHave a good day!\n");
        }
        else{
        printf("Sorry, it is not possible to refund your change of: %d real", troco);
        printf("\nHave a good day !\n");
        }
    }
    else{
        printf("This machine is blocked !\nNotes less than R$10,00");
    }
    return 0;
}

