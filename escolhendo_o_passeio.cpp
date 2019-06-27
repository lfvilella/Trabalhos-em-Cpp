# include <stdio.h>
# include <string.h>
# include <string>
# include <stdlib.h>
# include <ctype.h>
# include <algorithm>
# include <iostream>

using namespace std;


int main (){
    string passeio;
    int tamanho, boliche=0, cinema=0;
    int contador=0;
    while (contador < 7){

        getline(cin, passeio);

        // Deixa a string em minusculo
        std::transform(passeio.begin(), passeio.end(), passeio.begin(), ::tolower);

        if (passeio == "cinema"){
            cinema++;
        }
        else if (passeio == "boliche"){
            boliche++;
        }
        contador++;
    }
    if (cinema > boliche){
        printf("CINEMA\n");
    }
    else{
        printf("BOLICHE\n");
    }
    return 0;
}