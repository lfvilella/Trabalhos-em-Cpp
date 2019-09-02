# include <stdio.h>

int main(){
    int x = 5;
    int *p1, **p2, ***p3;

    p1 = &x;
    p2 = &p1;
    p3 = &p2;

    printf("%d\n", p1); // Endereco de p1
    printf("%d\n", *p1); // Conteudo de p1
    printf("-------------\n");
    printf("%d\n", p2); // Endereco de p2
    printf("%d\n", *p2); // Endereco de p1
    printf("%d\n", **p2); // Conteudo de p2
    printf("-------------\n");
    printf("%d\n", p3); // Endereco de p3
    printf("%d\n", *p3); // Endereco de p2
    printf("%d\n", **p3); // Endereco de p1
    printf("%d\n", ***p3); // Conteudo de p3

    return 0;
}