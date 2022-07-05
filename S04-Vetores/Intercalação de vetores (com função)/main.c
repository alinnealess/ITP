#include <stdio.h>

int intercalarVetores(int tamV1, int tamV2, int *vetor1, int *vetor2);
int main() {
  int tamV1, tamV2, i, i2, i5 = 0, vetorIntercalado;
  
  //printf("Digite o tamanho do vetor 1: ");
  scanf("%d", &tamV1);
  
  int vetor1[tamV1];
  for(i = 0; i < tamV1; i++){
    scanf("%d", &vetor1[i]);
  }
  //printf("Digite o tamanho do vetor 2: ");
  scanf("%d", &tamV2);
  
  int vetor2[tamV2];
  for(i2 = 0; i2 < tamV2; i2++){
    scanf("%d", &vetor2[i2]);
  }

  intercalarVetores(tamV1, tamV2, vetor1, vetor2);

  return 0;
}

int intercalarVetores(int tamV1, int tamV2, int *vetor1, int *vetor2){

  int iTotal = tamV1 + tamV2;
  int vetorIntercalado[iTotal], i3 = 0, i4 = 0, i5 = 0, i6 = 0;

  while(i3 < iTotal){
    if(i5 < tamV1){
      vetorIntercalado[i4] = vetor1[i5];
      i5++;
      i3++;
      i4++;
    }
    if(i6 < tamV2){
      vetorIntercalado[i4] = vetor2[i6];
      i6++;
      i3++;
      i4++;
    }
  }

  printf("Resultado: ");
  for(int i7 = 0; i7 < iTotal; i7++){
    printf("%d ", vetorIntercalado[i7]);
  }

}