# include <stdio.h>
# include <iostream>

using namespace std;

int Maior_AB(int a, int b, int c);

int main(){
    int x,y,z;
    cin >> x >> y >> z;

    printf("%d eh o maior\n", Maior_AB(x,y,z));

    return 0;
}

int Maior_AB(int a, int b, int c){
    int maior_ab = (a+b+(abs(a-b)))/2;
    int maior_de_todos = (maior_ab+c+(abs(maior_ab-c)))/2;
    return maior_de_todos;
}