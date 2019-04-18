# include <stdio.h>
# include <iostream>

using namespace std;

int main(){
    int dias = 0, saldo = 0, novosaldo = 0;
    cin >> dias >> saldo;
    novosaldo = saldo;
    
    if ((dias >= 1 && dias <= 30) && (saldo >= -100000 && saldo <= 100000)){
        for(int i = 0; i < dias; i++){
            int value = 0;
            cin >> value;

            novosaldo += value;
            // printf("novosaldo = %d, value = %d, i = %d\n", novosaldo, value, i);
            if(novosaldo <= saldo){
                saldo = novosaldo;
                // printf("Saldo = %d\n", saldo);
            }
            
            else if(novosaldo >= saldo){
                saldo = novosaldo;
            }
        }
        cout << saldo << endl;
    }
    return 0;
}