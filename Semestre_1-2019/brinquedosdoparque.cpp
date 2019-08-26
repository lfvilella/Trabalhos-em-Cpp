# include <stdio.h>

int main(){
    int altura, idade, alturamin, idademin, pont;
    scanf("%d %d", &altura, &idade);
    pont = 0;

    if (altura >= 150 && idade >= 12){
        pont = pont+1;
    }

    if (altura >= 140 && idade >= 14){
        pont = pont+1;
    }

    if (altura >= 170 || idade >= 16){
        pont = pont+1;
    }

    printf("%d\n", pont);

    return 0;
}