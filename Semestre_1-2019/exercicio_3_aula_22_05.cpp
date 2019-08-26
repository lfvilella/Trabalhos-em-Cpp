# include <stdio.h>
# include <iostream>
# define TAM 10

using namespace std;

int main(){
    float lista_num[TAM];
    for (int i = 0; i < TAM; i++){
        cin >> lista_num[i];
    }
    for (int i = 0; i < TAM; i++){
        if (i%2==0){
            cout << lista_num[i] << endl;
        }
    }
    return 0;
}
    