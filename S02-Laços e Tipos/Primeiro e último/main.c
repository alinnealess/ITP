#include <stdio.h>

int main(void) {
  int num, ultimo, primeiro, sum;
  scanf("%d", &num);

  primeiro = num;
  while(primeiro >=10){
    primeiro = primeiro / 10;
  }
  
  ultimo = num%10;
  sum = primeiro + ultimo;
  
  printf("O último numero é: %d\n", ultimo);
  printf("O primeiro número é: %d\n", primeiro);
  printf("A soma é: %d\n", sum);
  return 0;
}