# include <stdio.h>
# include <iostream>

using namespace std;

int Soma_Digitos(int numero);

int main(){
    int num;
    cin >> num;

    printf("%d\n", Soma_Digitos(num));
    return 0;
}

// Exemplo 3149
int Soma_Digitos(int numero){
    int separa_num, i, soma_resto, resto, resto_do_resto;
    separa_num = numero/10; // 3149/10 = 314
    resto = numero%10; // 3149%10 = 9
    while(separa_num >= 10){ 
        if(separa_num >= 10){
            resto_do_resto = separa_num%10; // retira as casas do meio - 1 e 4
            soma_resto += resto_do_resto; // soma as casas do meio - 1+4
        }
        separa_num = separa_num/10; // retira a primeira casa - 3
        i++;
    }
    while(resto >= 10){ // retira a ultima casa - 9
        resto = resto/10;
        i++;
    }

    int sum_all = separa_num+soma_resto+resto;
    return sum_all;
}