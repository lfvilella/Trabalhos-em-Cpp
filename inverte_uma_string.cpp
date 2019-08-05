#include <stdio.h>
#include <string.h>

int main( void )
{
    char string[50];
    char string2[50];
    fgets(string, 50, stdin);

    int i, j=0;
    for (i=strlen(string)-1; i >= 0; i--){
        if (string[i] != ' '){
            string2[j] = string[i];
            j++;
        }
    }

    printf("%s\n", string2);
    return 0;
}
