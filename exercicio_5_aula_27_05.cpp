// ORDENACAO
# include <stdio.h>
# include <iostream>
# define TAM 10

using namespace std;

void faz_a_logica(float lista_num[TAM]){
    for (int i = 0; i < TAM; i++){
        // cout << "Sou i = " << i << endl ;
        for (int j = i+1; j < TAM; j++){
            if (lista_num[i] > lista_num[j]){
                float temporary_variable = lista_num[i];
                lista_num[i] = lista_num[j];
                lista_num[j] = temporary_variable;
                // cout << "Sou j = " << j << endl ;
            }
        }
    }
    for (int i = 0; i < TAM; i++){
        cout << lista_num[i] << endl;
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
