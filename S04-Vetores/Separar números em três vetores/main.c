#include <stdio.h>

int main() {
  int v_A[20], v_B[20], v_C[20]; 
  int num[20],i ,j = 0, l = 0, m = 0, n = 0;
  
  for(i = 0; i < 20; i++){
    scanf("%d", &num[i]);  
  }
  while(j < 20){
    if(num[j] % 3 == 0){
    v_A[l] = num[j];
    l++;
    }
    if(num[j] % 4 == 0){
    v_B[m] = num[j];
    m++;
    }
    if(num[j] % 3 != 0 && num[j] % 4 != 0){
    v_C[n] = num[j];
    n++;
    }
    j++;
  }
  
  printf("a)%d", v_A[0]);
  for(int p = 1; p < l; p++){
    printf(",");
    printf("%d", v_A[p]);
  }
  printf("\nb)%d", v_B[0]);
  for(int q = 1; q < m; q++){
    printf(",");
    printf("%d", v_B[q]);
  }
  printf("\nc)%d", v_C[0]);
  for(int r = 1; r < n; r++){
    printf(",");
    printf("%d", v_C[r]);
  }
  return 0;
}