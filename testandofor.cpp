# include <stdio.h>

int main(){
    
    for (int a = 1; a <= 10; a++){
        printf("%d\n", a);
    }



    // Exemplo:
    float n1,n2,n3,media;

    for (int aluno = 1; aluno < 3; aluno++){
        printf("Digita as 3 notas do aluno %d: \n", aluno);
        scanf("%f %f %f", &n1, &n2, &n3);
        media = (n1+n2+n3)/3;
        printf("A media do aluno %d é = %.2f\n", aluno, media);
    }
    return 0;
}