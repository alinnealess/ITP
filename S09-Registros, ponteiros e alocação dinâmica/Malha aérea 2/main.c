#include <stdio.h>
#include <string.h>

typedef  struct {
  int nairp;
  char name[30];
  char country[20]; 
} city;

void lerString(char strdst[]) {
  char str[30] = {0};
  fgets(str, 30, stdin);
  str[strlen(str)-1] = '\0';
  strcpy(strdst, str);
}

int main(void) {
  int n, c;
  char lixo;
 
  scanf("%d", &n);
  scanf("%c", &lixo);

  city cities[n];
  for (int i = 0; i < n; i++) {
    lerString(cities[i].name);
    lerString(cities[i].country);
    scanf(" %d", &cities[i].nairp);
    scanf("%c", &lixo);
  }

  int prices[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++)
      scanf("%d", &prices[i][j]);
    scanf("%c", &lixo);
  }
 
  scanf("%d", &c);
  printf("Voo mais barato chegando em %s: ", cities[c].name);
  int d, menor = 999999;
  
  for (int i = 0; i < n; i++)
    if (i != c && prices[i][c] != -1 && prices[i][c] < menor) {
      menor = prices[i][c];
      d = i;
    }

  printf("%s (%s) - %d aeroporto(s) - R$%d\n", cities[d].name,
    cities[d].country, cities[d].nairp, prices[d][c]);
  return 0;
}
