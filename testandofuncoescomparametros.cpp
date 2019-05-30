# include <stdio.h>
# include <iostream>

using namespace std;

int soma_cinco(int number);

// Funçao com ponteiro
void aumenta_dez(int *number){
    *number += 10;
}

// Utiliza Ponteiro pelo fato de chamar na memoria a primeira casa
void imprime_vetor(int *vetor, int tamanho_vetor){
    cout << "VETORES" << endl;
    for(int i = 0; i < tamanho_vetor; i++){
        cout << vetor[i] << endl;
    }
}

void modifica_vetor(int *vetor, int tamanho_vetor){
    // cout << "MODIFICA VETORES" << endl;
    for(int i = 0; i < tamanho_vetor; i++){
        vetor[i] *= 2;
    }
}

int main(){
    int a = 10;
    a = soma_cinco(a);
    cout << a << endl;
    // cout << soma_cinco(a) << endl;
    
    // Chamando funcao com ponteiro
    aumenta_dez(&a);
    cout << a << endl;

    // Vetores
    int vetor[3] = {1,2,3};
    imprime_vetor(vetor, 3);
    modifica_vetor(vetor, 3);
    imprime_vetor(vetor, 3);

    return 0;
}

int soma_cinco(int number){
    return number+5;
}