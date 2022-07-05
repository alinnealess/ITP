#include <stdio.h>

int main(void) {
  int num_a[3];
  int num_b[3];
  int num_c[3];
  int num_d[3];
  int i, A;
 
 for(i=0; i<3; i++){
   scanf("%d", &num_b[i]);
 }
  for(i=0; i<3; i++){
   scanf("%d", &num_c[i]);
 }
  for(i=0; i<3; i++){
   scanf("%d", &num_d[i]);
 }

  printf("A = [");
  for(i=0; i<3; i++){
    A = (num_b[i] + num_c[i] - (5*num_d[i]));
    num_a[i] = A;
    if (i!=2){
      printf("%d,", num_a[i]);
    }else{
      printf("%d", num_a[i]);
    }
    
  }
  printf("]");

   
  return 0;
}