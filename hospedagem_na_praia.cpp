# include <stdio.h>
# include <iostream>
# include <string>
# include <string.h>
# include <ctype.h>

using namespace std;

float Calcula_a_Hospedagem(string apartamento, int dias);

int main(){
    string tipo_do_apartamento;
    int dias_hospedado;

    // Le com espaco
    getline(cin, tipo_do_apartamento);
    scanf("%d", &dias_hospedado);

    tipo_do_apartamento = tolower(tipo_do_apartamento);

    printf("%.2f \n", Calcula_a_Hospedagem(tipo_do_apartamento, dias_hospedado));

    return 0;
}

float Calcula_a_Hospedagem(string apartamento, int dias){
    float desconto, total, diaria;
    if (apartamento == "individual"){
        if(dias >= 3){
            diaria = dias*125;
            desconto = diaria*0.15;
            total = diaria-desconto;
        }
        else{
            total = dias*125;
        }
    }
    else if (apartamento == "suite dupla"){
        if(dias >= 3){
            diaria = dias*140;
            desconto = diaria*0.15;
            total = diaria-desconto;
        }
        else{
            total = dias*140;
        }
    }
    else if (apartamento == "suite tripla"){
        if(dias >= 3){
            diaria = dias*180;
            desconto = diaria*0.15;
            total = diaria-desconto;
        }
        else{
            total = dias*180;
        }
    }
    else{
        return 0;
    }

    return total;
}

// #include <iostream>
// #include <string>
// #include <ctype.h>
// using namespace std;

// int main(){
//     int i = 0;
//     string nome;
//     char c;
//     printf("digite a seu nome: ");
//     getline(cin, nome);

//     while (nome[i]){
//         putchar(tolower(nome[i]));
//         i++;
//     }

//     printf("\n");

//     return 0;
// }
