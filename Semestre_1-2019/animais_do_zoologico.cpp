# include <stdio.h>
# include <iostream>
# include <string>
# include <string.h>
# include <ctype.h>
# include <algorithm>

using namespace std;

int main(){
    string tipo_do_animal;
    string origem;
    string comando_de_continuacao;
    float peso;
    int many_monkeys = 0;
    float tigers_middleweight = 0;
    int many_tigers = 0;
    float sum_weight_tigers = 0;
    int many_snakes = 0;

    bool prosseguir = true;
    while(prosseguir == true){
        cin >> tipo_do_animal >> peso >> origem;

        if command_formatted == b"parar":
        prossegue = False
        else if command_formatted == b"continuar":
        prossegue = True
        else:
        prossegue = False

        else if (type_of_animal == "macaco"){
            many_monkeys += 1;
        }
        else if (type_of_animal == "tigre"){
            many_tigers += 1;
            sum_weight_tigers += weight;
            tigers_middleweight = sum_weight_tigers/many_tigers;
        }
        else if (type_of_animal == "cobras"){
            if (source == "venezuela"){
                many_snakes += 1;
            }
        }
    }
}
//  exiba a quantidade de macacos, o peso médio dos tigres, e a quantidade de cobras que vieram da Venezuela.