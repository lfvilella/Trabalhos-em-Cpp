# include <stdio.h>
# include <iostream>

using namespace std;

int main(){
    int dias = 0, saldo_inicial = 0, saldo_atual = 0, menor_saldo = 0;
    cin >> dias >> saldo_inicial;

    if (dias < 1 || dias > 30) {
        return 0;
    }
    int nova_transacao = 0;
    cin >> nova_transacao;

    saldo_atual = saldo_inicial + nova_transacao;
    menor_saldo = saldo_atual;

    for (int i = 1; i < dias; i++) {
        nova_transacao = 0;
        cin >> nova_transacao;

        saldo_atual += nova_transacao;
        if (saldo_atual < menor_saldo) {
            menor_saldo = saldo_atual;
        }

    }

    cout << menor_saldo << endl;
    return 0;
}