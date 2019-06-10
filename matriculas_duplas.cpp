# include <stdio.h>
# include <iostream>
# define PROG_II 45
# define PROG_III 30

using namespace std;

int main(){
    // prog II = 45 / prog III = 30
    int matriculas_prog_2[PROG_II];
    int matriculas_prog_3[PROG_II];

    for (int i = 0; i < PROG_II; i++){
        cin >> matriculas_prog_2[i];
    }
    for (int i = 0; i < PROG_III; i++){
        cin >> matriculas_prog_3[i];
    }
    for (int i = 0; i < PROG_II; i++){
        for (int j = 0; j < PROG_III; j++){
            if ( matriculas_prog_2[i] == matriculas_prog_3[j]){
                cout << matriculas_prog_3[j] << " ";
            }
        }
    }

    return 0;
}