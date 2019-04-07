# include <stdio.h>

int main(){
    int interface, inteligencia, encapsulamento, indentacao, structss;
    scanf("%d %d %d %d %d", &interface, &inteligencia, &encapsulamento, &indentacao, &structss);    

    if (interface == 0 && inteligencia == 0){
        printf("0\n");
    }
    else if (encapsulamento == 1 && indentacao ==1 && structss == 1) {
            printf("AVALIADO\n");
    }
    else{
        printf("0\n");
    }

    return 0;
}