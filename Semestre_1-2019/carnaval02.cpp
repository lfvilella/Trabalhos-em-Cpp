#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float nota_maior, nota_menor, nota, soma_notas;
    int i;
    i=0;
    nota_menor=10.0;
    nota_maior=5.0;

    while(i<5){
        scanf("%f",&nota);
        soma_notas+=nota;
        if (nota>nota_maior){
            nota_maior=nota;
        }
        if (nota<nota_menor){
            nota_menor=nota;
        }
        i++;
    }
    
    soma_notas=soma_notas-nota_maior-nota_menor;
    printf("%0.1f",soma_notas);
	return 0;
}