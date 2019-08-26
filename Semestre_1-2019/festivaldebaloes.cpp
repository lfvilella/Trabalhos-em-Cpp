# include <stdio.h>
# include <string.h>
# include <iostream>

using namespace std;

int main(){
    int etapas, subir = 0, descer = 0, frente = 0, voltar = 0;
    int altura, horizontal;
    int i;
    char comando;
    cin >> etapas;
    
    for ( i = 0; i < etapas; i++){
        cin >> comando;

        if (comando == 'S'){
            subir += 10; 
        }

        if (comando != 'S' && subir > 0){

                if (comando == 'D'){
                    subir -= 10;
                }
                else if (comando == 'F'){
                    frente += 10;
                }
                else if (comando == 'V'){
                    frente += 10;
                    for ( i = i+1; i < etapas; i++){
                        cin >> comando;
                        if(comando == 'F'){
                            frente -= 10;
                        }
                        else{
                            continue;
                        }
                        
                    }

                }

            //}// DO SEGUNDO FOR
        }//DO COMANDO = S    
    }//DO PRIMEIRO FOR

    altura = subir-descer;
    horizontal = frente-voltar;

    if (altura < 0){
        altura = 0;    
    }

    if (altura >= 200){
        altura = 200;
    }

    if (horizontal < 0){
        horizontal *= -1;
    }

    if (horizontal >= 2000){
        horizontal = 2000;
    }
    
    cout << altura << " " << horizontal << endl;

    return 0;
}
