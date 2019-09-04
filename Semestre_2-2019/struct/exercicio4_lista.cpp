# include <stdio.h>
# include <string.h>
# include <iostream>

using namespace std;

struct dados_usuarios{
    int idade;
    char nome[50];
    char sexo;
    char estado_civil;
    int numero_amigos;
    int quantidade_fotos;
};


int main(){
    int quantia_usuarios_banco;
    scanf("%d", &quantia_usuarios_banco);

    struct dados_usuarios usuarios[quantia_usuarios_banco];

    for (int i = 0; i < quantia_usuarios_banco; i++){
        printf("Idade\n");
        scanf("%d", &usuarios[i].idade);
        printf("Nome\n");
        cin >> usuarios[i].nome;
        printf("Sexo\n");
        scanf("%s", &usuarios[i].sexo);
        printf("Estado Civil\n");
        scanf("%s", &usuarios[i].estado_civil);
        printf("Numero de Amigos\n");
        scanf("%d", &usuarios[i].numero_amigos);
        printf("Numero de Fotos\n");
        scanf("%d", &usuarios[i].quantidade_fotos);
    }
    for (int i = 0; i < quantia_usuarios_banco; i++){
        printf("Nome: %s - Idade: %d - Sexo: %c - Estado: %c - Amigos: %d - Fotos: %d\n", usuarios[i].nome, usuarios[i].idade, usuarios[i].sexo, usuarios[i].estado_civil, usuarios[i].numero_amigos, usuarios[i].quantidade_fotos);
    }

    return 0;
}