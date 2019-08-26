# include <stdio.h>
# include <iostream>
# define TAM 3

using namespace std;

int main(){
    int lista_num[TAM];
    int temporary_variable;
    for (int i = 0; i < TAM; i++){
        cin >> lista_num[i];
    }
    for (int i = 0; i < TAM; i++){
        // cout << "Sou i = " << i << endl ;
        for (int j = i+1; j < TAM; j++){
            if (lista_num[i] > lista_num[j]){
                temporary_variable = lista_num[i];
                lista_num[i] = lista_num[j];
                lista_num[j] = temporary_variable;
                // cout << "Sou j = " << j << endl ;
            }
        }
    }
    for (int i = 0; i < TAM; i++){
        cout << lista_num[i] << endl;
    }
    return 0;
}