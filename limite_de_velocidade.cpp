# include <stdio.h>
# include <iostream>

using namespace std;

float Calcula_Multa(float speed);

int main(){
    int velocidade;
    cin >> velocidade;

    printf("%.2f\n", Calcula_Multa(velocidade));

    return 0;
}

float Calcula_Multa(float speed){
    float penalty;
    if (speed <= 50){
        penalty = 0;
    }
    else{
        if(speed <= 55){
            penalty = 230.00;
        }
        else if(speed >= 55 && speed <= 60){
            penalty = 340.00;
        }
        else if(speed > 60){
            speed = speed - 50;
            penalty = speed*19.28;
        }
    }

    return penalty;
}