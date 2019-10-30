# include <stdio.h>
# include <string>
# include <string.h>
# include <iostream>
# include <fstream>

using namespace std;

int main(){
    // Qual arquivo será lido
    ifstream input("txt/teste3.txt");

    // String que receberá
    string texto;

    // Inserir texto para string
    for (string linha; getline(input, linha);){
        texto += linha;
    }

    cout << texto << "\n";

    return 0;
}