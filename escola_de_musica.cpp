# include <stdio.h>
# include <iostream>
# include <string>
# include <string.h>

using namespace std;

string Classifica_Aluno(float note, int faults);

int main(){
    int faltas;
    float nota;
    cin >> nota >> faltas;

    printf("%s \n", Classifica_Aluno(nota, faltas).c_str());

    return 0;
}

string Classifica_Aluno(float note, int faults){
    string resultado;
    if (faults > 10){
        resultado = "REPROVADO POR FALTAS";
    }
    else{
        if (note < 7){
            resultado = "REPROVADO";
        }
        else{
            if (note < 9.5){
                resultado = "APROVADO";
            }
            else{
                resultado = "APROVADO COM LOUVOR";
            }
        }
    }
    
    return resultado;
}
