// Struct antes do int main
# include <stdio.h>
# include <string.h>

struct minha_struct{
    int variavel_inteira;
    char letra;
    char texto[200];
};

int main(){

    // Cria a variavel que chama a struct
    struct minha_struct name_struct;

    name_struct.variavel_inteira = 15;
    name_struct.letra = 'L';

    // Para string:
    strcpy(name_struct.texto,"Minha String em C/C++");

    printf("Variavel Inteira = %d \nLetra = %c \nString = %s \n", name_struct.variavel_inteira, name_struct.letra, name_struct.texto);

    // Lista de structs
    struct minha_struct lista_na_struct[3];
    lista_na_struct[0].variavel_inteira = 15;
    lista_na_struct[1].variavel_inteira = 16;
    lista_na_struct[2].variavel_inteira = 17;

    lista_na_struct[0].letra = 'G';
    lista_na_struct[1].letra = 'A';
    lista_na_struct[2].letra = 'P';

    strcpy(lista_na_struct[0].texto,"This string");
    strcpy(lista_na_struct[1].texto,"Isn't your");
    strcpy(lista_na_struct[2].texto,"It's my");

    for(int i = 0; i < 3; i++){
        printf("Variavel Inteira = %d, Letra = %c, String = %s \n", lista_na_struct[i].variavel_inteira, lista_na_struct[i].letra, lista_na_struct[i].texto);
    }
    return 0;
}