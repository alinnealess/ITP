#include <stdio.h>
#include <stdlib.h>


float *vetorDist(float vetor[], int *n) {
  float *vdist = NULL;
  int ndist = 1;

  for (int i = 0; i < *n; i++) {
    int encontra=0;
    for (int j=0; !encontra && j < *n; j++)
      if (i != j && vetor[i] == vetor[j])
        encontra = 1;
  
    if (!encontra) {
      vdist = realloc(vdist, (ndist+1) * sizeof(float));
      vdist[ndist++] = vetor[i];
    }
  }
  *n = ndist;
  return vdist;
}

int main(void) {
  int tam_vetor;
  scanf("%d", &tam_vetor);
  float vetor[tam_vetor];

  for (int i=0; i<tam_vetor; i++)
    scanf("%f", &vetor[i]);

  float *vetor_dist = vetorDist(vetor, &tam_vetor);
  
  printf("[");
  for (int i=0; vetor_dist!=NULL && i<tam_vetor; i++) {
    printf("%.4f", vetor_dist[i]);
    if (i < tam_vetor-1)
      printf(", ");
  }
  printf("]\n");
  free(vetor_dist);
  return 0;
}
