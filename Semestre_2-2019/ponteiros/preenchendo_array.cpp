#include <stdio.h>
int par[5], j, impar[5], i, P = 0, I = 0, x;

int main(){
	for (i = 0; i < 15; i++){
		scanf("%d", &x);
		if (x % 2 == 0){
			par[P] = x;
			P++;
			if (P == 5) {
				for (j = 0; j < 5; j++) {
					printf("par[%d] = %d\n", j, par[j]);
				}
				P = 0;
			}
		}
        else{
			impar[I] = x;
			I++;
			if (I == 5) {
				for (j = 0; j < 5; j++) {
					printf("impar[%d] = %d\n", j, impar[j]);
				}
				I = 0;
			}
		}
	}
	for (j = 0; j < I; j++) {
		printf("impar[%d] = %d\n", j, impar[j]);
	}
	for (j = 0; j < P; j++) {
		printf("par[%d] = %d\n", j, par[j]);
	}
    
    return 0;
}