// Ponteiros ou apontadores, são variáveis que armazenam o endereço de memória de outras variáveis.
// Ponteiros = Aponta o endereco da memoria da variavel
// Ponteiros são muito úteis quando uma variável tem que ser acessada em diferentes partes de um programa.

# include <stdio.h>
# include <iostream>

using namespace std;

int main(){

    int a = 15;
    // Imprimindo a
    cout << "VALOR DE A = " << a << endl;

    // Imprimindo o endereco de a
    cout << "ENDEREÇO DE A = " << &a << endl;

    // Variaveis armazenam valores
    int b = 10;
    // Ponteiros armazenam posicoes na memoria
    int *ponteiro;
    // Ponteiro Recebendo a posicao da memoria da variavel b
    ponteiro = &b;

    // Imprimindo b
    cout << "VALOR DE B = " << b << endl;

    // O '*' é lido como "conteudo apontado por 'variavel'"
    *ponteiro = 35;

    // Imprimindo b modificado pelo ponteiro
    cout << "VALOR DE B = " << b << endl;

    return 0;
}