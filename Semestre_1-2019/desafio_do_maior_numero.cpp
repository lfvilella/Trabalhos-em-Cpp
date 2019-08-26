# include <stdio.h>
# include <iostream>

using namespace std;

int main(){
    int num_input, temporary_variable=0;
    while(num_input != 0){
        cin >> num_input;
        if(num_input > temporary_variable){
            temporary_variable = num_input;
        }
    }

    cout << temporary_variable << endl;
    return 0;
    
}