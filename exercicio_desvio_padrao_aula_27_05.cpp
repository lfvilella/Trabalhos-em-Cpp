// DESVIO PADRAO
# include <stdio.h>
# include <iostream>
# include <math.h>

using namespace std;

float variancia(float list_notes[], int alunos, float media){

    float variancia;
    for (int i = 0; i < alunos; i++){
        variancia += ((list_notes[i] - media)*(list_notes[i] - media));
    }

    return variancia;
}

void desvio_padrao(float variancia_final, int alunos){
    float desvio_padrao_final = sqrt(variancia_final/alunos);
    cout << desvio_padrao_final << endl;
}

int main(){
    int alunos;
    cout << "Insira a quantidade total de alunos: ";
    scanf("%d", &alunos);
    cout << "\n";

    float lista_de_notas[alunos];
    float soma_notas = 0;
    for (int idx = 0; idx < alunos; idx++){
        cin >> lista_de_notas[idx];
        soma_notas += lista_de_notas[idx];
    }

    float media = soma_notas/alunos;

    float var;
    var = variancia(lista_de_notas, alunos, media);

        // float variancia;
        // for (int i = 0; i < alunos; i++){
        //     variancia += ((lista_de_notas[i] - media)*(lista_de_notas[i] - media));
        // }
        
        // cout << variancia << endl;

    desvio_padrao(var, alunos);

        // float desvio_padrao = sqrt(variancia/alunos);

        // cout << desvio_padrao << endl;

    return 0;
}
