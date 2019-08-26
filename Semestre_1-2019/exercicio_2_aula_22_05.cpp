# include <stdio.h>
# include <iostream>
# define TAM 10

using namespace std;

int main(){
    int lista_num[TAM];
    for (int i = 0; i < TAM; i++){
        cin >> lista_num[i];
    }
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
    