# include <stdio.h>
# include <string.h>
# include <string>
# include <iostream>
// Para alocar o tamanho do struct
# include <new>

using namespace std;

struct fruit{
    string name;
    string color;
};


int main(){

    // Criando ponteiro para o struct, para alocar na memoria
    fruit *first_fruit = new fruit;

    first_fruit->color = "Yellow";
    first_fruit->name = "Banana";

    cout << "Fruit:" << first_fruit->name << ", Color: " << first_fruit->color << endl;

    // Criando lista de struct
    fruit *ponteiro_lista_frutas = new fruit[2];

    ponteiro_lista_frutas[0].name = "Watermelon";
    ponteiro_lista_frutas[1].name = "Apple";
    ponteiro_lista_frutas[0].color = "Green";
    ponteiro_lista_frutas[1].color = "Red";

    for (int i = 0; i < 2; i++){
        cout << "Fruit:" << ponteiro_lista_frutas[i].name << ", Color: " << ponteiro_lista_frutas[i].color << endl;
    }

    return 0;
}