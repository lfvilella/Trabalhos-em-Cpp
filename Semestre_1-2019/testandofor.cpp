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
// # include <stdio.h>
// # include <string.h>

// int main(){
//     int subir = 0, frente = 0;
//     int distancia, altura;
//     int etapas=0;
//     int i;
//     char comandos;

//     scanf("%d", &etapas);

//     for(i = 0; i < etapas; i++){
//         // Atencao no espaco " %c" / isso era o erro que estava gerando
//         scanf(" %c", &comandos);

//         if (comandos == 'S'){
//             subir = subir + 10;
//         }

//         if (comandos != 'S' && subir > 0){
//             if (comandos == 'D'){
//                 subir = subir - 10;
//             }
//             else if (comandos == 'F'){
//                 frente = frente + 10;
//             }
//             else if (comandos == 'V'){
//                 frente = frente + 10;
//                 for(i = i+1; i < etapas; i++){
//                     scanf("%c", &comandos);
//                     if (comandos == 'F'){
//                         frente = frente - 10;
//                     }
//                     else{
//                         continue;
//                     }
//                 }
//             }
            
//         }
//     }
//     altura = subir;
//     distancia = frente;

//     if (altura < 0){
//         altura = 0;    
//     }

//     if (altura >= 200){
//         altura = 200;
//     }

//     if (distancia < 0){
//         distancia *= -1;
//     }

//     if (distancia >= 2000){
//         distancia = 2000;
//     }

//     printf("%d %d\n", altura, distancia);
//     return 0;
// }