# include <stdio.h>
# include <iostream>

using namespace std;

int main(){
    int voto_atual;
    float qtdAlibaba = 0, qtdAlcapone = 0, votos_em_branco = 0 , votos_nulos = 0;
    double percentual_Alibaba, percentual_Alcapone;

    while(voto_atual != -1){
        cin >> voto_atual;

        if(voto_atual == -1){
            break;
        }    

        switch (voto_atual){
            case 83:
                qtdAlibaba++;
                break;
        
            case 93:
                qtdAlcapone++;
                break;
        
            case 0:
                votos_em_branco++;
                break;
        
            default:
                votos_nulos++;
                break;
        }

        
    }
    
    percentual_Alibaba = ((qtdAlibaba*100)/(qtdAlcapone+qtdAlibaba+votos_em_branco));
    percentual_Alcapone = ((qtdAlcapone*100)/(qtdAlcapone+qtdAlibaba+votos_em_branco));

    cout << qtdAlibaba << endl;
    cout << qtdAlcapone << endl;
    cout << votos_em_branco << endl;
    cout << votos_nulos << endl;
    qtdAlcapone >= qtdAlibaba ? printf("93\n") : printf("83\n");
    printf("%.2lf\n", percentual_Alibaba);
    printf("%.2lf\n", percentual_Alcapone);


    return 0;
}