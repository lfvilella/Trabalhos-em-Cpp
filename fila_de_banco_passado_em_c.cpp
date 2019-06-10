# include <stdio.h>

int main(){
    int pessoas_fila1; // n
    int pessoas_fila2; // m
    int k; // Funcionario que saiu
    scanf("%d %d %d", &pessoas_fila1, &pessoas_fila2, &k);
    if ((pessoas_fila1 < 0 || pessoas_fila1 > 10000) || (pessoas_fila2 < 0 || pessoas_fila2 > 10000)){
        return 0;
    }
    else{
        int i,j;
        int fila1[pessoas_fila1];
        int fila2[pessoas_fila2];
        int soma_pessoas = pessoas_fila1+pessoas_fila2;
        int fila_unica[soma_pessoas];
        if (k == 1){
            // Le fila 1
            for (i = 0; i < pessoas_fila1; i++){
                scanf("%d", &fila1[i]);
            }
            // Le fila 2
            for (i = 0; i < pessoas_fila2; i++){
                scanf("%d", &fila2[i]);
            }
            // Fila 2 maior que fila 1
            if (pessoas_fila2 >= pessoas_fila1){
                // Intercala
                int j=0, l=0;
                for(i = 0; i < soma_pessoas; i++){
                    if (i%2==1){
                        if (j < pessoas_fila1){
                            fila_unica[i]=fila1[j];
                            j++;
                        }
                        else{
                            fila_unica[i]=fila2[l];
                            l++;
                        }
                    }
                    else{
                        fila_unica[i]=fila2[l];
                        l++;
                    }
                }
            }
            // Fila 1 maior que fila 2
            else{
                // Intercala
                int j=0, l=0;
                for(i = 0; i < soma_pessoas; i++){
                    if (i%2==1){
                        if (j < pessoas_fila2){
                            fila_unica[i]=fila2[j];
                            j++;
                        }
                        else{
                            fila_unica[i]=fila1[l];
                            l++;
                        }
                    }
                    else{
                        fila_unica[i]=fila1[l];
                        l++;
                    }
                }
            }
            // Imprime
            for (i = 0; i < soma_pessoas; i++){
                printf("%d\n", fila_unica[i]);
            }
        }

        else if (k == 2){
            // Le fila 1
            for (i = 0; i < pessoas_fila1; i++){
                scanf("%d", &fila1[i]);
            }
            // Le fila 2
            for (i = 0; i < pessoas_fila2; i++){
                scanf("%d", &fila2[i]);
            }
            // Fila 2 maior que fila 1
            if (pessoas_fila2 >= pessoas_fila1){
                // Intercala
                int j=0, l=0;
                for(i = 0; i < soma_pessoas; i++){
                    if (i%2==0){
                        if (j < pessoas_fila1){
                            fila_unica[i]=fila1[j];
                            j++;
                        }
                        else{
                            fila_unica[i]=fila2[l];
                            l++;
                        }
                    }
                    else{
                        fila_unica[i]=fila2[l];
                        l++;
                    }
                }
            }
            // Fila 1 maior que fila 2
            else{
                // Intercala
                int j=0, l=0;
                for(i = 0; i < soma_pessoas; i++){
                    if (i%2==0){
                        if (j < pessoas_fila2){
                            fila_unica[i]=fila2[j];
                            j++;
                        }
                        else{
                            fila_unica[i]=fila1[l];
                            l++;
                        }
                    }
                    else{
                        fila_unica[i]=fila1[l];
                        l++;
                    }
                }
            }
            // Imprime
            for (i = 0; i < soma_pessoas; i++){
                printf("%d\n", fila_unica[i]);
            }
        }
        
        else{
            return 0;
        }
    }

    return 0;
}