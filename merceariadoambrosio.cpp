# include <stdio.h>

int main(){
    int produto, quantidade;
    float total, subtotal, desconto, valor;
    scanf("%d %d", &produto, &quantidade);
    desconto = 0.15;

    switch (produto)
    {
        case 1:
            total = (quantidade*5.30);
            if (quantidade >= 15){
                subtotal = ((quantidade*5.30)*desconto);
                valor = total-subtotal;
                printf("R$ %.2f\n", valor);
            }
            else if (total > 40){
                subtotal = ((quantidade*5.30)*desconto);
                valor = total-subtotal;
                printf("R$ %.2f\n", valor);
            }
            else {
                printf("R$ %.2f\n",(quantidade*5.30));
            }
            break;
        
        case 2:
            total = (quantidade*6);
            if (quantidade >= 15){
                subtotal = ((quantidade*6)*desconto);
                valor = total-subtotal;
                printf("R$ %.2f\n", valor);
            }
            else if (total > 40){
                subtotal = ((quantidade*6)*desconto);
                valor = total-subtotal;
                printf("R$ %.2f\n", valor);
            }
            else {
                printf("R$ %d\n",(quantidade*6));
            }
            break;
        
        case 3:
            total = (quantidade*3.20);
            if (quantidade >= 15){
                subtotal = ((quantidade*3.20)*desconto);
                valor = total-subtotal;
                printf("R$ %.2f\n", valor);
            }
            else if (total > 40){
                subtotal = ((quantidade*3.20)*desconto);
                valor = total-subtotal;
                printf("R$ %.2f\n", valor);
            }
            else {
                printf("R$ %.2f\n",(quantidade*3.20));
            }
            break;
        
        case 4:
            total = (quantidade*2.5);
            if (quantidade >= 15){
                subtotal = ((quantidade*2.5)*desconto);
                valor = total-subtotal;
                printf("R$ %.2f\n", valor);
            }
            else if (total > 40){
                subtotal = ((quantidade*2.5)*desconto);
                valor = total-subtotal;
                printf("R$ %.2f\n", valor);
            }
            else {
                printf("R$ %.2f\n",(quantidade*2.5));
            }
            break;
        
        default:
            break;
    }

}