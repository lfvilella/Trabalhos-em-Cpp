// # include <stdio.h>
// # include <iostream>

// using namespace std;

// int main(){
//     int dias = 0, saldo = 0, novosaldo = 0;
//     cin >> dias >> saldo;
//     novosaldo = saldo;
    
//     if ((dias >= 1 && dias <= 30) && (saldo >= -100000 && saldo <= 100000)){
//         for(int i = 0; i < dias; i++){
//             int value = 0;
//             cin >> value;
            
//             novosaldo += value;

//             if(novosaldo <= saldo){
//                 saldo = novosaldo;
//             }
//             else if( novosaldo >= saldo){
                
//             }
//         }
//         cout << saldo << endl;
//     }
//     return 0;
// }
# include <stdio.h>
# include <iostream>

using namespace std;

int main(){
    int dias = 0, saldo_inicial = 0, saldo_atual = 0, menor_saldo = 0;
    cin >> dias >> saldo_inicial;

    if (dias < 1 || dias > 30) {
        return 0;
    }
    int value = 0;
    cin >> value;

    saldo_atual = saldo_inicial + value;
    menor_saldo = saldo_atual;

    for (int i = 1; i < dias; i++) {
        value = 0;
        cin >> value;

        saldo_atual += value;
        if (saldo_atual < menor_saldo) {
            menor_saldo = saldo_atual;
        }

    }

    cout << menor_saldo << endl;
    return 0;
}