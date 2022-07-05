#include <stdio.h>

int main(void) {
  int num, aux, i;
  
  scanf("%d", &num);
  aux= num;
  i = 0;

  while(aux !=0){
    i= i *10 + aux %10;
    aux = aux/10;
  }

  //palindromo
  if(i == num){
    if (num%2==0){
      printf("%d é Palíndromo e par.", num);
    }else{
      printf("%d é Palíndromo e impar.", num);
    }
  }
  //não é palidromo
  if(i != num){
    if (num%2==0){
      printf("%d não é Palíndromo e par.", num);
    }else{
      printf("%d não é Palíndromo e impar.", num);
    }
  }
  

  return 0;
}