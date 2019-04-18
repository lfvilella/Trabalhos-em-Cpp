# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <iostream>

using namespace std;

int main(){
    // C++:
    string palavra;

    cout << "Digite uma palavra: ";
    // OU printf("Digite uma palavra: \n");

    cin >> palavra;
    cout << "Palavra: " << palavra << "\n";
    #include <iostream>

    // C:
    // char palavra[10];

    // printf("Digite uma palavra: \n");

    // // Limpa o Buffer
    // setbuf(stdin, 0);

    // //Le a string
    // fgets(palavra, 10, stdin);

    // //Limpa memoria ( [u][h][u][\0][][] <- faz isso )
    // palavra[strlen(palavra)-1] = '\0';

    // printf("%s\n", palavra);

    return 0;
}