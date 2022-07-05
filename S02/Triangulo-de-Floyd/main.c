#include <stdio.h>

int main(void) {
  int i, num, j, c=1;

  scanf("%d", &num);
  
  if (num == 0){
      printf("Você entrou com 0, tente de novo na próxima\n");
  }else if (num <= 0){
      printf("Você entrou com %d, tente de novo na próxima\n", num);
  }else{
    for(i = 1; i <= num ;i++){
      for(j = 1; j <= i; j++){
        printf("%2d ", c++);
      }
    printf("\n");
    
  }
  }
  

  
  
  
  return 0;
}