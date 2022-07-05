#include <stdio.h>
#define linhas 3
#define colunas 3

int main(void) {
  int matriz[linhas][colunas];
  for (int l = 0; l < linhas; l++)
    for (int c = 0; c < colunas; c++)
      scanf("%d", &matriz[l][c]);

  // int matrig[linhas][colunas];
  for (int l = 0; l < linhas; l++){
    for (int c = colunas ; c > 0; c--)
      printf("%d ", matriz[c-1][l]);
    printf("\n");
  }
    
  return 0;
}