#include <stdio.h>

int main(void) {
  int i, A,tam;
  scanf("%d,", &tam);
  
  int num_a[tam];
  int num_b[tam];
  int num_c[tam];


 if (tam <= 10){ //tam max 10
  //vetor b 
  for(i=0; i<tam; i++){
     scanf("%d", &num_b[i]);
   }
  //vetor c
  for(i=0; i<=tam; i++){
     scanf("%d", &num_c[i]);
  }

  //vetor a = vetorb + vetorc
  for(i=0; i<tam; i++){
    A = num_b[i] + num_c[i] ;
    num_a[i] = A;
    printf("%d ", num_a[i]);
  }
 }else{
   printf("Muitos elementos");
 }

  
 
 

   
  return 0;
}