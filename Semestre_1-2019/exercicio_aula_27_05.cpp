# include <stdio.h>
# include <iostream>
# define TAM 10

using namespace std;

int conta_as_vezes(int lista[TAM], int x);

int main(){
    int lista_num[TAM];
    for (int i = 0; i<TAM; i++){
        cin >> lista_num[i];
    }
    int x;
    cout << "Digite o valor a ser comparado:\n";
    cin >> x;

    printf("O numero %d aparece %d vezes\n", x, conta_as_vezes(lista_num, x));
    return 0;
}

int conta_as_vezes(int lista[TAM], int x){
    int contador;
    for (int i = 0; i < TAM; i++){
        if(x == lista[i]){
            contador++;
        }
    }
    return contador;
}