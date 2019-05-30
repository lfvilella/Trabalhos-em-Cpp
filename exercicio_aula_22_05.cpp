# include <stdio.h>
# include <iostream>
# define TAM 10

using namespace std;

int main(){
    int lista_num[TAM];
    for (int i = 0; i < TAM; i++){
        cin >> lista_num[i];
    }
    // Imprime em decrescente
    for (int i = TAM; i >= 0; i--){
        if (lista_num[i]%2 == 0){
            cout << lista_num[i] << endl;
        }
    }
}
    