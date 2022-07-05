#include <stdio.h>

int main(void) {
  int num, j, i;
  char l;

  do{
    scanf("%d %c", &num, &l);
  }while (num <4);

  for (i =1; i<=num; i++){
    for ( j = 1; j < num; j++){
      if((j== i) || (j == num-i)){
         printf("%c", l);
      }else{
        printf(" ");
      }
    }
    printf("\n");
  }

  return 0;
}