# include <stdio.h>
# include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    int vetor_inverso[N];
    for (int i = 0; i < N; i++){
        cin >> vetor_inverso[i];
    }
    for (int i = N-1; i >= 0; i--){
        cout << vetor_inverso[i] << " ";
    }

    return 0;
}
// 