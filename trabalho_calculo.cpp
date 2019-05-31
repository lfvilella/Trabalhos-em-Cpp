# include <stdio.h>
# include <iostream>
# include <string.h>
# include <string>
# include <math.h>

using namespace std;

float Calcula_Inclinacao(float x, float y, float z);

void LimpaTela(){
    system("clear");
}

int main(){
    // Menu inicial para diferencia a rampa a ser calculada.
    cout << "Bem vindo a Calculadora de Inclinaçao !\n";
    cout << "PRESSIONE 1 para o calculo de rampas retas\n";
    cout << "PRESSIONE 2 para o calculo de rampas curvas\n";
    int caso;
    cin >> caso;
    LimpaTela();

    float base,altura,hipotenusa;
    if (caso == 1){
        cout << "Você esta calculando uma rampa reta !\n\n";
        cout << "Para calcular será necessario inserir pelo menos dois dos itens da rampa, respectivamente:\n";
        cout << "BASE, ALTURA, DISTANCIA(HIPOTENUSA)\n";
        cout << "Caso nao saiba um dos itens insira o valor 0\n";
        // A *\ D
        // L * \ I
        // T *  \ S
        // U *   \ T
        // R *    \ A
        // A *-----\ NCIA
        //    BASE
        cin >> base >> altura >> hipotenusa;
        LimpaTela();
        printf("O valor da inclinaçao é aproximadamente %.2f graus\n", Calcula_Inclinacao(base, altura, hipotenusa));
    }
    else if (caso == 2){
        cout << "Você esta calculando uma rampa curva !\n\n";
        cout << "Aqui você tera que imaginar a rampa planificada, tornando ela uma rampa reta\n\n";
        cout << "Para calcular será necessario inserir pelo menos dois dos itens da rampa, respectivamente:\n";
        cout << "BASE, ALTURA, DISTANCIA(HIPOTENUSA)\n";
        cout << "Caso nao saiba um dos itens insira o valor 0\n";
        // A *\ D
        // L * \ I
        // T *  \ S
        // U *   \ T
        // R *    \ A
        // A *-----\ NCIA
        //    BASE
        cin >> base >> altura >> hipotenusa;
        LimpaTela();
        printf("O valor da inclinaçao é aproximadamente %.2f graus\n", Calcula_Inclinacao(base, altura, hipotenusa));

    }
    else{
        LimpaTela();
        cout << "Sorry, Invalid Command !\n";
    }


    return 0;
}
        // A *\ D
        // L * \ I
        // T *  \ S
        // U *   \ T
        // R *    \ A
        // A *-----\ NCIA
        //    BASE
                        //base,   altura,  hipotenusa
float Calcula_Inclinacao(float x, float y, float z){ 
    float resultado = 0;
    float tangente;
    float cateto_unfound;
    float calc_this;
    if (x <= 0){
        calc_this = ((z*z) + (y*y));
        if (calc_this < 0){
            calc_this *= -1;
        }
        cateto_unfound = (sqrt(calc_this));

        // cateto_unfound = (sqrt((z*z) - (y*y)));
        // cout << calc_this << endl;
        // cout << cateto_unfound << endl;
        tangente = y/cateto_unfound;
        // Converte para graus
        resultado = (tangente*15)/0.27;
    }
    else if (y <= 0){
        calc_this = ((z*z) + (x*x));
        if (calc_this < 0){
            calc_this *= -1;
        }
        cateto_unfound = (sqrt(calc_this));
        // cout << calc_this << endl;
        // cout << cateto_unfound << endl;
        tangente = cateto_unfound/x;
        // Converte para graus
        resultado = (tangente*15)/0.27;
    }
    else if (z <= 0){
        tangente = y/x;
        // Converte para graus
        resultado = (tangente*15)/0.27;
    }
    // Caso coloque os 3 valores
    else{
        tangente = y/x;
        // Converte para graus
        resultado = (tangente*15)/0.27;
    }

    return resultado;
}