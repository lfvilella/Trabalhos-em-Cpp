# include <stdio.h>
# include <stdlib.h>
// IMPORTANTE ESSA LIB
# include <new>

# include <iostream>

using namespace std;

int main(){
    int tamanho;
    cout << "Insira o tamanho\n";
    cin >> tamanho;

    // Criando um ponteiro que recebe o vetor vazio
    int *vetor = new int[tamanho];

    for (int i = 0; i < tamanho; i++){
        vetor[i] = i;
        cout << vetor[i] << endl;
    }

    // Limpa memoria
    free(vetor);s
    
    return 0;
}