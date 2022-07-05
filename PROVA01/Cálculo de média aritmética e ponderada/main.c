#include <stdio.h>


float calculaMedia(char tipo, float n1, float n2, float n3);

int main() {
  float n1, n2, n3, result;
  char tipo;

  scanf("%c",&tipo);
  scanf("%f", &n1);
  scanf("%f", &n2);
  scanf("%f", &n3);

  result = calculaMedia(tipo, n1, n2, n3);
  return 0;
  }

  float calculaMedia(char tipo, float n1, float n2, float n3){
    float media_a, media_p, result;
  if(tipo == 'A'){
    media_a= ((n1+n2+n3)/3);
    printf("Média %.2f", media_a);
  }
  if(tipo == 'P'){
    media_a= (((n1*4)+(n2*5)+(n3*6))/15);
    printf("Média %.2f", media_a);
  }
    
    
}

// #include <stdio.h>

// int main(void) {
//   float n1, n2, n3, media_a, meddia_p;
//   char tipo;

//   scanf("%c",&tipo);
//   scanf("%f", &n1);
//   scanf("%f", &n2);
//   scanf("%f", &n3);

//   if(tipo == 'A'){
//     media_a= ((n1+n2+n3)/3);
//     printf("Média %.2f", media_a);
//   }
//   if(tipo == 'P'){
//     media_a= (((n1*4)+(n2*5)+(n3*6))/15);
//     printf("Média %.2f", media_a);
//   }
  
  
  
  
  
//   return 0;
// }
  
