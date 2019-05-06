# include <stdio.h>
# include <iostream>
# include <string.h>
# include <stdlib.h>
# include <stdbool.h>

// Funcao Limpa Tela
void Limpa_Tela(){
    system("clear");
}

// Nao vai funcionar com salarios maiores quem 1.000.000 ou so tiver uma pessoa como habitante.
int main(){
    int habitantes, sexo, plus_woman = 0, plus_man = 0;
    float woman_salary, man_salary, plus_woman_salary = 0, plus_man_salary = 0;
    float salary_current, higher_salary_woman=0, lower_salary_woman=1000000, higher_salary_man=0, lower_salary_man=1000000;
    float percent_man, percent_woman;
    printf("Insira a quantidade de habitantes (max = 100)\n");
    scanf("%d", &habitantes);
    if (habitantes < 1 || habitantes > 100){
        return 0;
    }
    else{
        for(int i = 0; i < habitantes; i++){
            printf("Insira o sexo (feminino = 1, masculino = 0)\n");
            scanf("%d", &sexo);

            if (sexo == 1){
                printf("Insira o salario da mulher: \n");
                scanf("%f", &woman_salary);
                plus_woman_salary += woman_salary;
                salary_current = woman_salary;
                if (salary_current > higher_salary_woman){
                    higher_salary_woman = salary_current;
                }
                if (salary_current < lower_salary_woman){
                    lower_salary_woman = salary_current;
                }
                plus_woman += 1;
            }
            else if (sexo == 0){
                printf("Insira o salario do homem: \n");
                scanf("%f", &man_salary);
                plus_man_salary += man_salary;
                salary_current = man_salary;
                if (salary_current > higher_salary_man){
                    higher_salary_man = salary_current;
                }
                if (salary_current < lower_salary_man){
                    lower_salary_man = salary_current;
                }
                plus_man += 1;
            }
            else{
                continue;
            }
        }
        percent_woman = ((plus_woman*100)/habitantes);
        percent_man = ((plus_man*100)/habitantes);
        Limpa_Tela();
        printf("Maior salario do Homem é: %.2f\n", higher_salary_man);
        printf("Maior salario da Mulher é: %.2f\n", higher_salary_woman);
        printf("Menor salario do Homem é: %.2f\n", lower_salary_man);
        printf("Menor salario da Mulher é: %.2f\n", lower_salary_woman);
        printf("A soma total dos salarios masculinos é %.2f\n", plus_man_salary);
        printf("A soma total dos salarios femininos é %.2f\n", plus_woman_salary);
        printf("Tem %d mulheres, e %d homens nessa populacao\n", plus_woman, plus_man);
        printf("O percentual de mulheres na populacao é %.2f \n", percent_woman);
        printf("O percentual de homens na populacao é %.2f \n", percent_man);
    }
    return 0;
}