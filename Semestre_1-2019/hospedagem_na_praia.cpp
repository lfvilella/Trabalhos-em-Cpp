# include <stdio.h>
# include <iostream>
# include <string>
# include <string.h>
# include <ctype.h>
# include <algorithm>

using namespace std;

float Calcula_a_Hospedagem(string apartamento, int dias);

int main(){
    string tipo_do_apartamento;
    int dias_hospedado;

    // Le com espaco
    getline(cin, tipo_do_apartamento);
    scanf("%d", &dias_hospedado);

    /// Deixa a string em minusculo
    std::transform(tipo_do_apartamento.begin(), tipo_do_apartamento.end(), tipo_do_apartamento.begin(), ::tolower);

    printf("%.2f \n", Calcula_a_Hospedagem(tipo_do_apartamento, dias_hospedado));

    return 0;
}

float Calcula_a_Hospedagem(string apartamento, int dias){
    float desconto, total, diaria;
    if (apartamento == "individual"){
        total = dias*125;
    }
    else if (apartamento == "suite dupla" || apartamento == "suitedupla" || apartamento == "suíte dupla" || apartamento == "suítedupla"){
        total = dias*140;
    }
    else if (apartamento == "suite tripla" || apartamento == "suitetripla" || apartamento == "suíte tripla" || apartamento == "suítetripla"){
        total = dias*180;
    }
    if (dias >= 3){
        total = total*0.85;
    }
    else{
        total = total;
    }

    return total;
}
