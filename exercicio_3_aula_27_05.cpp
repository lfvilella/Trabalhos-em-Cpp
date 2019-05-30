// Ler um vetor com 10 numeros inteiros e imprime par = 1 e impar = -1 
# include <stdio.h>
# include <iostream>
# define TAM 10

using namespace std;

void faz_a_logica(int lista_num[TAM]){
    for (int i = 0; i < TAM; i++){
        if (lista_num[i]%2 == 0){
            lista_num[i] = 1;
        }
        else{
            lista_num[i] = -1;
        }
    }
    for (int i = 0; i < TAM; i++){
        cout << lista_num[i] << endl;
    }
}

int main(){
    int lista_numeros[TAM];
    for (int i = 0; i < TAM; i++){
        cin >> lista_numeros[i];
    }

    faz_a_logica(lista_numeros);

    return 0;
}