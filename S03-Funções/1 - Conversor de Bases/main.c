#include <stdio.h>


int convert(int, int);

int main() {
  int value, result, base;
  do{
    scanf("%d", &value);
    if(value ==-1){
      printf("Programa encerrado!\n");
      break;
    }
    scanf("%d", &base);
    result = convert(value, base);
    printf("Numero %d(10) na base %d = %d(%d)\n", value,base,  result, base);
  }while(value !=-1);
 
  
  return 0;
}

int convert(int value, int base) {
  int result = 0;
  int rem, i = 1;

  while (value!=0) {
    rem = value % base;
    value /= base;
    result += rem * i;
    i *= 10;
  }

  return result;
}