# include <stdio.h>
# include <string.h>
# include <iostream>

using namespace std;

struct cadastro{
    int numero_passagem;
    int data;
    char origem[20];
    char destino[20];
    float horario;
    int poltrona;
    int idade;
    char nome_passageiro[50];
};


int main(){
    struct cadastro passageiros[44];

    int i, media_idade, passageiros_presentes=0;
    for (i = 0; i < 44; i++){
        scanf("%d", &passageiros[i].numero_passagem);
        if (passageiros[i].numero_passagem == -1){
            break;
        }
        // Só colocar os outros dados que faltam caso necessário.
        cin >> passageiros[i].nome_passageiro;
        scanf("%d", &passageiros[i].idade);
        scanf("%d", &passageiros[i].poltrona);
        media_idade += passageiros[i].idade;
        passageiros_presentes++;
    }
    media_idade = (media_idade/passageiros_presentes);

    for (i = 0; i < passageiros_presentes; i++){
        if (passageiros[i].idade > media_idade){
            if (passageiros[i].poltrona % 2 == 0){
                printf("%s\n", passageiros[i].nome_passageiro);
            }
        }
    }
    
    return 0;
}