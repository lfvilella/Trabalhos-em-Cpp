# include <stdio.h>
# include <string.h>
# include <iostream>

using namespace std;

struct dados_personagens{
    char nome[50];
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
        printf("Nome\n");
        cin >> personagens[i].nome;
        printf("ID\n");
        scanf("%d", &personagens[i].id);
        printf("Level\n");
        scanf("%d", &personagens[i].level);
        printf("Vida\n");
        scanf("%d", &personagens[i].vida);
        printf("Ataque\n");
        scanf("%d", &personagens[i].ataque);
        printf("Defesa\n");
        scanf("%d", &personagens[i].defesa);
        printf("------------------\n");
    }
    
    for (int i = 0; i < quantidade_personagens; i++){
        printf("Nome: %s - ID: %d - Level: %d - Vida: %d - Ataque %d - Defesa: %d\n", personagens[i].nome, personagens[i].id, personagens[i].level, personagens[i].vida, personagens[i].ataque, personagens[i].defesa);
    }

    return 0;
}