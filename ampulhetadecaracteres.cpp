#include <stdio.h>

int main(){
  
  int N, i, l;
  int casoatual, espacos, asteriscos, linhaatual, repdechar, espacoscentro, aux;
  
  scanf("%d", &N);
  
  for(casoatual = 1; casoatual <= N; casoatual++){
    scanf("%d%d", &l, &i);
    printf("Caso %d:\n", casoatual);
    
    linhaatual = 1;
    espacoscentro = (l*2) - 5;
    aux = l-2;
    
    while(linhaatual <= (2*l)){
      if((linhaatual == 1) || (linhaatual == (2*l))){
        printf("*");
        for(repdechar = (2*l-1), asteriscos = l, espacos = (l-1); repdechar > 0; repdechar--){
          if(asteriscos > 0){
            printf("*");
            asteriscos--;
          }
          if(espacos > 0){
            printf(" ");
            espacos--;
          }
        }
        linhaatual++;
        printf("*\n");
      }else{
        printf("*");
        if(linhaatual <= (l-1)){
          for(espacos = (linhaatual - 1); espacos > 0; espacos--){
            printf(" ");
          }
          printf("*");
          if((i < (l-2)) && (linhaatual >= (l-(l-2-i)))){
            for(espacos = espacoscentro; espacos >= 1; espacos--){
              printf(".");
            }
          }else{
            for(espacos = espacoscentro; espacos >= 1; espacos--){
              printf(" ");
            }
          }
          printf("*");
          for(espacos = (linhaatual - 1); espacos > 0; espacos--){
            printf(" ");
          }
          espacoscentro = espacoscentro - 2;
        }else if((linhaatual == l) || (linhaatual == (l+1))){
          for(espacos = (l - 1); espacos > 0; espacos--){
            printf(" ");
          }
          printf("*");
          for(espacos = (l - 1); espacos > 0; espacos--){
            printf(" ");
          }
        }else{
          espacoscentro = espacoscentro + 2;              
          for(espacos = aux; espacos > 0; espacos--){
            printf(" ");
          }
          printf("*");
          if(linhaatual >= ((2*l)-(i))){
            for(espacos = espacoscentro; espacos >= 1; espacos--){
              printf(".");
            }
          }else{
            for(espacos = espacoscentro; espacos >= 1; espacos--){
              printf(" ");
            }
          }
          printf("*");
          for(espacos = aux; espacos > 0; espacos--){
            printf(" ");
          }
          aux--;
        }
        linhaatual++;
        printf("*\n");
      }
    }
  }
  
  return 0;
}