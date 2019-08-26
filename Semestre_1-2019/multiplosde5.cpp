# include <stdio.h>
# include <iostream>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    for(int i = n; i <= m; i++){
        if(i == m && i%5==0){
            cout << i;
        }
        else if(i==5 && m < 10){
            cout << i;
        }
        else if(i%5==0){
            cout << i << "|";
        }
    }
    return 0;

}