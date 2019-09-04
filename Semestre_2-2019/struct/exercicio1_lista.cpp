# include <stdio.h>
# include <string.h>

struct dados_struct{
    char sexo;
    char cor_do_olho;
    char cor_do_cabelo;
    int idade;
};

int main(){
    struct dados_struct pessoa[100];

    int numero_populacao;
    scanf("%d", &numero_populacao);
    if (numero_populacao > 100){
        printf("Populacao Invalida !\n");
        return 0;
    }

    int maior_idade = 0, wonderfull_women = 0;
    for (int i = 0; i < numero_populacao; i++){
        scanf("%d", &pessoa[i].idade);
        // Tem que ter esse espaço antes do %c para n dar erro
        scanf(" %c %c %c", &pessoa[i].sexo, &pessoa[i].cor_do_cabelo, &pessoa[i].cor_do_olho);
        // Get older age
        if (pessoa[i].idade > maior_idade){
            maior_idade = pessoa[i].idade;
        }
        // Get data of women
        if (pessoa[i].sexo == 'f'){
            if (pessoa[i].idade >= 18 && pessoa[i].idade <= 35){
                if (pessoa[i].cor_do_cabelo == 'l' && pessoa[i].cor_do_olho == 'v'){
                    wonderfull_women++;
                }
            }
        }
    }
    float porcent_women = (wonderfull_women*100)/numero_populacao;
    // for (int i = 0; i < numero_populacao; i++){
    //     printf("Pessoa %d --> Idade = %d - Sexo = %c - Cabelo = %c - Olho = %c \n", i, pessoa[i].idade, pessoa[i].sexo, pessoa[i]. cor_do_cabelo ,pessoa[i].cor_do_olho);
    // }
    printf("O cidadao mais velho tem %d anos\n", maior_idade);
    printf("A porcentagem de mulheres é %.2f\n", porcent_women);

    return 0;
}