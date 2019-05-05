# include <stdio.h>
# include <iostream>
# include <string.h>
# include <stdlib.h>
# include <stdbool.h>

using namespace std;

// Chamei a funçao la de baixo do int main para funcionar
float Retorna_Float();
char Retorna_Char();
bool Retorna_Booleano();

//Funcao inteira
int Retorna_Dez(){
    return 10;
}

// Funcao Vazia
void Desenha_Algo(){
    printf("|---___----____----|\n");
}

// Funcao Limpa Tela
void Limpa_Tela(){
    system("clear");
}

int main(){
    // Chamando a funcao Retorna_Booleano
    bool variavel_retorna_bool = Retorna_Booleano();
    if (variavel_retorna_bool){
        cout << "This is True, and your value is: " << variavel_retorna_bool << endl;
    }
    else{
        cout << "This is False, and your value is: " << variavel_retorna_bool << endl;
    }

    //Chamando a funcao Retorna_Char
    char variavel_retorna_char;
    variavel_retorna_char = Retorna_Char();
    cout << variavel_retorna_char << endl;

    //Chamando a funcao float
    float variavel_retorna_float = Retorna_Float();
    cout << variavel_retorna_float << endl;

    //Chamando a funcao inteira
    int variavel_retorna_dez;
    variavel_retorna_dez = Retorna_Dez();
    cout << variavel_retorna_dez << endl;

    // Char da funcao vazia
        char string[10];
        cin >> string;
        //Limpa a tela
        Limpa_Tela();
        for (int i = 0; i < 3; i++){
            Desenha_Algo();
            cout << string << endl;
        }
    
    cout << "Press another key: ";
    cin >> string;
    Limpa_Tela();

    return 0;
}

// Funcao float
float Retorna_Float(){
    cout << "Sou a func retorna_float e estou retornando float: ";
    float num = 3.14;
    return num * 2;
}

// Funcao Caractere
char Retorna_Char(){
    return 'C';
}

// Funcao Booleana
bool Retorna_Booleano(){
    return false;
}
