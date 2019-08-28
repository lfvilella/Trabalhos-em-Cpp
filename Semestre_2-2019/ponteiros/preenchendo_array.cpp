# include <stdio.h>

int main(){
    int vetor_par[5], vetor_impar[5];
    int P = 0, I = 0;
    int j, i, numero;

    int *par;
    par = vetor_par;

    int *impar;
    impar = vetor_impar;

    for (i = 0; i < 15; i++){
        scanf("%d", &numero);
        if (numero % 2 == 0){
            // preenche_par(vetor_par, numero);
            *par = numero;
            par++;
            P++;

            if (P == 5){
                for (j = 0; j < 5; j++){
                    printf("Vetor_par[%d] = %d\n", j, vetor_par[j]);
                }
                P = 0;
                par = vetor_par;
            }
        }
        else{
			*impar = numero;
            impar++;
			I++;

			if (I == 5) {
				for (j = 0; j < 5; j++) {
					printf("Vetor_impar[%d] = %d\n", j, vetor_impar[j]);
				}
				I = 0;
                impar = vetor_impar;
			}
		}
    }
    for (j = 0; j < I; j++) {
        printf("Vetor_impar[%d] = %d\n", j, vetor_impar[j]);
    }
    for (j = 0; j < P; j++) {
        printf("Vetor_par[%d] = %d\n", j, vetor_par[j]);
    }

    return 0;
}