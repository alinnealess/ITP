#include <stdio.h>

int main(void) {
  int A, B, C, D;

  scanf("%d %d %d %d", &A, &B, &C, &D);

  

  if(B > C && D> A && C+D > A +B && C>0 && D >0){
    printf("Valores Aceitos\n");
  }else
      printf("Valores Não Aceitos condições violadas:");
      if(!(B > C)){
        printf(" 1");
      }
      if (!(D> A)){
        printf(" 2");
      }
      if (!(C+D > A +B)){
        printf(" 3");
      }
      if (!(C>0 && D >0)){
        printf(" 4");
      }
      
      
    
  
  return 0;
}