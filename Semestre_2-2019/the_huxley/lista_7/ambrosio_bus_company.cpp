// The true is in: Trabalhos-Python/Semestre_2_2019/the_huxley/lista_7/ambrosio...
# include <stdio.h>
# include <string.h>
# include <iostream>

using namespace std;

struct cadastro{
    int numero_passagem;
    char data[10];
    char origem[20];
    char destino[20];
    char horario[5];
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
            i = 44;
        }
        else{
            getchar();
            cin >> passageiros[i].data;
            getchar();
            cin >> passageiros[i].origem;
            getchar();
            cin >> passageiros[i].destino;
            getchar();
            cin >> passageiros[i].horario;
            cin >> passageiros[i].poltrona;
            cin >> passageiros[i].idade;
            getchar();
            cin >> passageiros[i].nome_passageiro;
            media_idade += passageiros[i].idade;
            passageiros_presentes++;
        }
    }
    media_idade = (media_idade/passageiros_presentes);

    for (i = 0; i < passageiros_presentes; i++){
        if (passageiros[i].idade >= media_idade){
            if (passageiros[i].poltrona % 2 == 0){
                printf("%s", passageiros[i].nome_passageiro);
                printf("\n");
            }
        }
    }
    
    return 0;
}

