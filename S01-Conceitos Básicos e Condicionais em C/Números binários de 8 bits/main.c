#include <stdio.h>

int main(void) {
  int ent, cont;
  
  scanf("%d", &ent);

  if(ent < 0 || ent > 255){
    printf("Número %d não suportado!!\n", ent);
  }else{
    if (ent >= 128 ){
      printf("1");
      ent=ent-128; 
    }else{
      printf("0");
    }
    if (ent >= 64){
      printf("1");
      ent=ent-64;
    }else{
      printf("0");
    }
    if (ent >= 32 ){
      printf("1");
      ent=ent-32;
    }else{
      printf("0");
    }
    if (ent >= 16){
      printf("1");
      ent=ent-16;
    }else{
      printf("0");
    }
    if (ent >= 8 ){
      printf("1");
      ent=ent-8;
    }else{
      printf("0");
    }
    if (ent >= 4 ){
      printf("1");
      ent=ent-4;
    }else{
      printf("0");
    }
    if (ent >= 2 ){
      printf("1");
      ent=ent-2;
    }else{
      printf("0");
    }
    if (ent==1){
      printf("1");
    }else{
      printf("0");
    }
    
    
    }
  
  
  return 0;
}