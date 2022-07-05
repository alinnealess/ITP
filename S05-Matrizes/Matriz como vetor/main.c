#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);
  int vetor[n];
  
  for (int i =0; i< n;i++)
    scanf("%d", &vetor[i]);
//lê dimnesões da matriz
  int linha, coluna;
  scanf("%d %d", &linha, &coluna);
//def a mtriz
  int matriz[linha][coluna];
  for(int l=0; l<linha;l++)
    for(int c=0, i=l*coluna; c<coluna; c++,i++)
      matriz[l][c] = vetor[i];

  //lê célula da matriz a ser exibida
  
  int l_cel, c_cel;
  scanf("%d %d", &l_cel, &c_cel);
  printf("%d\n", matriz[l_cel][c_cel]);
  return 0;
}