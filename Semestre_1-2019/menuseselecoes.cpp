# include <stdio.h>

int main(){
    int opcao;

    while(opcao < 1 || opcao >3){
        printf("Escolha uma opcao: \n");
        printf("Opcao 1 \n");
        printf("Opcao 2 \n");
        printf("Opcao 3 \n");
    
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:
                printf("Escolheu opcao 1\n");
                break;

            case 2:
                printf("Escolheu opcao 2\n");
                break;

            case 3:
                printf("Escolheu opcao 3\n");
                break;
        
            default:
                printf("Opcao invalida!");
                break;
        }
    }
    return 0;
}