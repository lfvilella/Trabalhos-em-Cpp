# include <stdio.h>

int main(){
    FILE *file;
    file = fopen("txt/escrevendo_dados.txt", "w");

    if (!file){ // Or if (file == NULL){}
        printf("Erro! Não abriu.\n");
        return 0;
    }

    // Other Way: 
    // if (file){
    //     // Write the code
    // }
    // else{
    //     printf("Erro! Não abriu.\n");
    //     return 0;s
    // }

    fprintf(file, "Hi! I'm learning the language C.");

    fclose(file);
    return 0;
}