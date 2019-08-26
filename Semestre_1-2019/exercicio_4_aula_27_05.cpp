// Ler um vetor com 10 numeros inteiros e imprime par = 1 e impar = -1 
# include <stdio.h>
# include <iostream>
# define TAM 10

using namespace std;

void faz_a_logica(float lista_num[TAM]){
    for (int i = 0; i < TAM; i++){
        if (i%2==0){
            cout << lista_num[i] << endl;
        }
    }
}

int main(){
    float lista_numeros[TAM];
    for (int i = 0; i < TAM; i++){
        cin >> lista_numeros[i];
    }

    faz_a_logica(lista_numeros);

    return 0;
}