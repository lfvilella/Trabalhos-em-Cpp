# include <stdio.h>
# include <string>
# include <string.h>
# include <iostream>

using namespace std;

string Estacao_do_Ano(int day, int month);

int main(){
    int dia, mes;
    cin >> dia >> mes;

    printf("%s \n", Estacao_do_Ano(dia, mes).c_str());

    return 0;
}

string Estacao_do_Ano(int day, int month){
    string estacao;
    if (day < 1 || day > 31){
        return 0;
    }
    else{
        if(month >= 10 && month <= 12){
            if(month == 12 && day <= 20){
                estacao = "PRIMAVERA";
            }
            else if(month == 12 && day > 20){
                estacao = "VERAO";
            }
            else{
                estacao = "PRIMAVERA";
            }
        }
        else if(month >= 1 && month <= 3){
            if(month == 3 && day <= 20){
                estacao = "VERAO";
            }
            else if(month == 12 && day > 20){
                estacao = "OUTONO";
            }
            else{
                estacao = "VERAO";
            }
        }
        else if(month >= 4 && month <= 6){
            if(month == 6 && day <= 20){
                estacao = "OUTUNO";
            }
            else if(month == 12 && day > 20){
                estacao = "INVERNO";
            }
            else{
                estacao = "OUTONO";
            }
        }
        else if(month >= 7 && month <= 9){
            if(month == 9 && day <= 20){
                estacao = "INVERNO";
            }
            else if(month == 12 && day > 20){
                estacao = "PRIMAVERA";
            }
            else{
                estacao = "INVERNO";
            }
        }

        return estacao;
    }
}