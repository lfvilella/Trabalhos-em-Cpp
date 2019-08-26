# include <stdio.h>
# include <iostream>

using namespace std;

int main(){
    int n,m,k;
    cin >> n >> m >> k;
    int fila1[n], fila2[m], i, j;
    for (i=0; i<n; i++){
        cin >> fila1[i];
    }
    for (i=0; i<m; i++){
        cin >> fila2[i];
    }
    if (k==1){
        for (i=0; i < n; i++){
            for (j = 0; j < m; j++){
                cout << fila2[i] << endl << fila1[j] << endl;
            }
        }
        if (i == m && j < n){
            for (j; j<m; j++){
                cout << fila1[j] << endl;
            }
        }
        else if (i < m && j == n){
            for (i; i < m; i++){
                cout << fila2[i] << endl;
            }
        }
    }
    else if (k==2){
        for (i=0; i < n; i++){
            for (j = 0; j < m; j++){
                cout << fila1[i] << endl << fila2[j] << endl;
            }
        }
        if (i == n && j < m){
            for (j; j<m; j++){
                cout << fila2[j] << endl;
            }
        }
        else if (i < n && j == m){
            for (i; i < m; i++){
                cout << fila1[i] << endl;
            }
        }
    }
    return 0;
}