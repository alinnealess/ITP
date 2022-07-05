#include <stdio.h>

int main(void) {
  int l1, l2, l3;

  scanf("%d %d %d", &l1 , &l2, &l3);

  
  if (l1 > l2+l3 || l1 > l2+l3 || l1 > l2+l3){
    printf("Os números informados não constituem os lados de um triângulo");
  }else{
    if(l1==l2 && l2==l3 && l1==l3 ){
      printf("triângulo equilátero");
    }
    else if (l1!=l2 && l2!=l3 && l3!= l1 ){
      printf("triângulo escaleno");
    }else{
      printf("triângulo isósceles");
    }
    
    }
  
  
  return 0;
}