# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <iostream>

using namespace std;

struct dados_personagens{
    char nome[20];
    int id;
    int level;
    int vida;
    int ataque;
    int defesa;
};


int main(){
    int quantidade_personagens;
    scanf("%d", &quantidade_personagens);
    
    struct dados_personagens personagens[quantidade_personagens];

    for (int i = 0; i < quantidade_personagens; i++){
        getchar();
        fgets(personagens[i].nome, 20, stdin);
        scanf("%d", &personagens[i].id);
        scanf("%d", &personagens[i].level);
        scanf("%d", &personagens[i].vida);
        scanf("%d", &personagens[i].ataque);
        scanf("%d", &personagens[i].defesa);
    }
    
    for (int i = 0; i < quantidade_personagens; i++){
        printf("Nome: %s", personagens[i].nome);
        printf("ID: %d\n", personagens[i].id);
        printf("Level: %d\n", personagens[i].level);
        printf("Vida: %d\n", personagens[i].vida);
        printf("Ataque: %d\n", personagens[i].ataque);
        printf("Defesa: %d\n", personagens[i].defesa);
    }

    return 0;
}