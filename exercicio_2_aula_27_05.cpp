// Ler um vetor com 10 numeros inteiros e imprime todos numeros de traz para frente 
# include <stdio.h>
# include <iostream>
# define TAM 10

using namespace std;

void deixa_decrescente(int lista[TAM]){
    // -1 pois a posicao 10 n pode ser acessada
    for (int i = TAM-1; i >= 0; i--){
        cout << lista[i] << endl;
    }
}

int main(){
    int lista_num[TAM];
    for (int i = 0; i<TAM; i++){
        cin >> lista_num[i];
    }

    deixa_decrescente(lista_num);


    return 0;
}