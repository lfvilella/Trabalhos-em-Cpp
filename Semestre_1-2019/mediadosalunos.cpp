# include <stdio.h>

int main(){
    float n1,n2,n3,total;
    scanf("%f %f %f", &n1, &n2, &n3);
    total = ((n1+n2+n3)/3);
    if (total >= 7){
        printf("aprovado\n");
    }
    else if (total < 3){
        printf("reprovado\n");
    }
    else{
        printf("prova final\n");
    }
    return 0;
}