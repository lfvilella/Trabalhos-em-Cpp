# include <stdio.h>
# include <iostream>

using namespace std;

int Verifica_se_e_primo(int num_verificador);

int main(){
    int num1, num2, num3, num4;
    cin >> num1 >> num2 >> num3 >> num4;

    num1 = Verifica_se_e_primo(num1);
    num2 = Verifica_se_e_primo(num2);
    num3 = Verifica_se_e_primo(num3);
    num4 = Verifica_se_e_primo(num4);

    int multiply_all = num1*num2*num3*num4;
    if(multiply_all == 0){
        printf("SEM PRODUTO\n");
    }
    else{
        printf("%d\n", multiply_all);
    }

    return 0;
}

int Verifica_se_e_primo(int num_verificador){
    int resultado = 0, i=0;
    // exclui -1, 0 e 1
    if (num_verificador < -1 || num_verificador > 1){
        // 2 = menor numero primo
        // Para verificar se é primo tem que divir por dois e o resto dele nao pode ser 0
        for (i = 2; i <= (num_verificador/2); i++){
            // Verifica se nao é primo
            if (num_verificador % i == 0){
                resultado = 1;
                break;
            }
        }
        // Resultado == 0 ele é primo e resultado recebe o valor
        if(resultado == 0){
            resultado = num_verificador;
        }
        // Nao é primo e na multiplicacao (no int main) vai dar 0
        else{
            resultado = 0;
        }
    }
    else{
        resultado = 0;
    }
    return resultado;
}