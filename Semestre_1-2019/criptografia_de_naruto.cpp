# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <string>

int main(){
    char string[255];
    fgets(string, 255, stdin);
    int tamanho;
    tamanho = strlen(string);

    for (int i = 0; i < tamanho; i++){
        if ( string[i] == 'a'){
            string[i] = 'z';
        }
        else if ( string[i] == 'b'){
            string[i] = 'y';
        }
        else if ( string[i] == 'c'){
            string[i] = 'x';
        }
        else if ( string[i] == 'd'){
            string[i] = 'w';
        }
        else if ( string[i] == 'e'){
            string[i] = 'v';
        }
        else if ( string[i] == 'f'){
            string[i] = 'u';
        }
        else if ( string[i] == 'g'){
            string[i] = 't';
        }
        else if ( string[i] == 'h'){
            string[i] = 's';
        }
        else if ( string[i] == 'i'){
            string[i] = 'r';
        }
        else if ( string[i] == 'j'){
            string[i] = 'q';
        }
        else if ( string[i] == 'k'){
            string[i] = 'p';
        }
        else if ( string[i] == 'l'){
            string[i] = 'o';
        }
        else if ( string[i] == 'm'){
            string[i] = 'n';
        }
        else if ( string[i] == 'n'){
            string[i] = 'm';
        }
        else if ( string[i] == 'o'){
            string[i] = 'l';
        }
        else if ( string[i] == 'p'){
            string[i] = 'k';
        }
        else if ( string[i] == 'q'){
            string[i] = 'j';
        }
        else if ( string[i] == 'r'){
            string[i] = 'i';
        }
        else if ( string[i] == 's'){
            string[i] = 'h';
        }
        else if ( string[i] == 't'){
            string[i] = 'g';
        }
        else if ( string[i] == 'u'){
            string[i] = 'f';
        }
        else if ( string[i] == 'v'){
            string[i] = 'e';
        }
        else if ( string[i] == 'w'){
            string[i] = 'd';
        }
        else if ( string[i] == 'x'){
            string[i] = 'c';
        }
        else if ( string[i] == 'y'){
            string[i] = 'b';
        }
        else if ( string[i] == 'z'){
            string[i] = 'a';
        }
    }
    printf("%s", string);
}