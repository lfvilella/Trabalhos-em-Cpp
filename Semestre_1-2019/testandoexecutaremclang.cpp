# include <stdio.h>
# include <string.h>

int main(){

    for (int i = 0; i < 2; i++){
        printf("CLANG\n");
        // In Down, Change i == 1 :)
        if (i == 2){
            printf("INFITY LOOPING\n");
            i = 0;
        }
    }

    return 0;
}