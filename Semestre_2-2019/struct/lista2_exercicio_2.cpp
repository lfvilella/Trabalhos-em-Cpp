# include <stdio.h>
# include <string.h>
# include <iostream>

using namespace std;

struct Cadastra_loja{
    char nome[100];
    char endereco[200];
    char telefone[12];
    float valor_produto;
};

int main(){
    struct Cadastra_loja loja[100];

    float preco_medio = 0;
    int numero_de_lojas;
    cin >> numero_de_lojas;
    for (int i = 0; i < numero_de_lojas; i++){
        cin >> loja[i].nome;
        cin >> loja[i].endereco;
        cin >> loja[i].telefone;
        cin >> loja[i].valor_produto;
        preco_medio += loja[i].valor_produto;
    }

    preco_medio = (preco_medio/numero_de_lojas);

    for (int i = 0; i < numero_de_lojas; i++){
        if (loja[i].valor_produto <= preco_medio){
            cout << loja[i].nome << "\n";
            cout << loja[i].endereco << "\n";
            cout << loja[i].telefone << "\n";
        }
    }

    return 0;
}