# include <stdio.h>

int main(){
    int dividendo1, dividendo2, divisor1, divisor2, mmc, mmc1, mmc2, total;
    int var1, var2;
    scanf("%d/%d + %d/%d", &dividendo1, &divisor1, &dividendo2, &divisor2);

    if (divisor1 != 0 && divisor2 != 0){
        mmc = divisor1*divisor2;
        mmc1 = (mmc/divisor1)*dividendo1;
        mmc2 = (mmc/divisor2)*dividendo2;
        total = mmc1+mmc2;

        for(int i = mmc; i >= 1; i--){
            if (total % i == 0 && mmc % i == 0){
                var1 = mmc/i;
                var2 = total/i;
                printf("%d/%d \n", var2, var1);
                break;
            }
        }
        //printf("MMM = %d MMC = %d\n", total, mmc);
    }
    else{
        printf("entrada invalida!\n");
    }
    return 0;
}