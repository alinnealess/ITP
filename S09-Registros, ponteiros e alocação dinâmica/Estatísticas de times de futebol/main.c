#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char time[200];
  int golMarcado;
  int golSofrido;
} Tab;

void ordenar_times(Tab *inf, int qTimes) {
  Tab aux;

  for (int i = 0; i < qTimes - 1; i++)
    for (int j = i + 1; j < qTimes; j++) {
      if (inf[i].golMarcado < inf[j].golMarcado) {
        aux = inf[i];
        inf[i] = inf[j];
        inf[j] = aux;
      }
    }
}

int main(void) {
  char time[200];
  int golMarcado, golSofrido, qTimes;
  char aux;
  Tab *inf = malloc(sizeof(Tab));
  int ref = 1;
  scanf("%d", &qTimes);

  while (ref < (qTimes + 1)) {
    scanf(" %[^\n]s", inf[ref - 1].time);
    scanf("%d", &inf[ref - 1].golMarcado);
    scanf("%d", &inf[ref - 1].golSofrido);

    ref++;
    inf = realloc(inf, ref * sizeof(Tab));
  }
  ordenar_times(inf, qTimes);

  for (int i = 0; i < qTimes; i++) {
    printf("%d - %s", i + 1, inf[i].time);
    printf("\nGols marcados: %d\n", inf[i].golMarcado);
    printf("Gols sofridos: %d\n", inf[i].golSofrido);
  }
  return 0;
}