# include <stdio.h>
# include <iostream>
# define LINHA 4
# define COLUNA 4

using namespace std;

int main(){
    int matriz[LINHA][COLUNA];
    int k;
    cin >> k;
    while( k != 0 ){
        for (int i = 0; i < LINHA; i++){
            for (int j = 0; j < COLUNA; j++){
                // Le primeiro a coluna
                cin >> matriz[j][i];
            }
        }
        for (int i = 0; i < LINHA; i++){
            for (int j = 0; j < COLUNA; j++){
                if (i == j){
                    matriz[i][j] *= k;
                }
                cout << matriz[i][j] << " ";
            }
            cout << endl;
        }
        cin >> k;
    }
    return 0;
}