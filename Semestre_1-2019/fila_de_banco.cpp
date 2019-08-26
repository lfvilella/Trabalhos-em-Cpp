# include <stdio.h>
# include <iostream>

using namespace std;

int main(){
    int pessoas_fila1; // n
    int pessoas_fila2; // m
    int k; // Funcionario que saiu
    cin >> pessoas_fila1 >> pessoas_fila2 >> k;
    if ((pessoas_fila1 < 0 || pessoas_fila1 > 10000) || (pessoas_fila2 < 0 || pessoas_fila2 > 10000)){
        return 0;
    }
    else{
        int fila1[pessoas_fila1];
        int fila2[pessoas_fila2];
        int soma_pessoas = pessoas_fila1+pessoas_fila2;
        int fila_unica[soma_pessoas];
        if (k == 1){
            // Le fila 1
            for (int i = 0; i < pessoas_fila1; i++){
                cin >> fila1[i];
            }
            // Le fila 2
            for (int i = 0; i < pessoas_fila2; i++){
                cin >> fila2[i];
            }
            // Fila 2 maior que fila 1
            if (pessoas_fila2 >= pessoas_fila1){
                // Intercala
                int j=0, k=0;
                for(int i = 0; i < soma_pessoas; i++){
                    if (i%2==1){
                        if (j < pessoas_fila1){
                            fila_unica[i]=fila1[j];
                            j++;
                        }
                        else{
                            fila_unica[i]=fila2[k];
                            k++;
                        }
                    }
                    else{
                        fila_unica[i]=fila2[k];
                        k++;
                    }
                }
            }
            // Fila 1 maior que fila 2
            else{
                // Intercala
                int j=0, k=0;
                for(int i = 0; i < soma_pessoas; i++){
                    if (i%2==1){
                        if (j < pessoas_fila2){
                            fila_unica[i]=fila2[j];
                            j++;
                        }
                        else{
                            fila_unica[i]=fila1[k];
                            k++;
                        }
                    }
                    else{
                        fila_unica[i]=fila1[k];
                        k++;
                    }
                }
            }
            // Imprime
            for (int i = 0; i < soma_pessoas; i++){
                cout << fila_unica[i] << endl;
            }
        }

        else if (k == 2){
            // Le fila 1
            for (int i = 0; i < pessoas_fila1; i++){
                cin >> fila1[i];
            }
            // Le fila 2
            for (int i = 0; i < pessoas_fila2; i++){
                cin >> fila2[i];
            }
            // Fila 2 maior que fila 1
            if (pessoas_fila2 >= pessoas_fila1){
                // Intercala
                int j=0, k=0;
                for(int i = 0; i < soma_pessoas; i++){
                    if (i%2==0){
                        if (j < pessoas_fila1){
                            fila_unica[i]=fila1[j];
                            j++;
                        }
                        else{
                            fila_unica[i]=fila2[k];
                            k++;
                        }
                    }
                    else{
                        fila_unica[i]=fila2[k];
                        k++;
                    }
                }
            }
            // Fila 1 maior que fila 2
            else{
                // Intercala
                int j=0, k=0;
                for(int i = 0; i < soma_pessoas; i++){
                    if (i%2==0){
                        if (j < pessoas_fila2){
                            fila_unica[i]=fila2[j];
                            j++;
                        }
                        else{
                            fila_unica[i]=fila1[k];
                            k++;
                        }
                    }
                    else{
                        fila_unica[i]=fila1[k];
                        k++;
                    }
                }
            }
            // Imprime
            for (int i = 0; i < soma_pessoas; i++){
                cout << fila_unica[i] << endl;
            }
        }
        
        else{
            return 0;
        }
    }

    return 0;
}