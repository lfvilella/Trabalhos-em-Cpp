# include <stdio.h>

int main(){
    int first = 5, second = 15;
    int *p1, *p2;

    p1 = &first;
    p2 = &second;
    *p1 = 10;
    *p2 = *p1;
    p1 = p2;

    // You can try remove the under line:
    *p2 += *p2;

    printf("First = %d\n", first);
    printf("Second = %d\n", second);
    printf("P1 = %d\n", p1);
    printf("*P1 = %d\n", *p1);
    printf("P2 = %d\n", p2);
    printf("*P2 = %d\n", *p2);

    return 0;
}