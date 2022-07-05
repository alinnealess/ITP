#include <stdio.h>
#include <string.h>
#define tam 40

void substr(char str1[], char str2[], int pos, int tamanho) {
  for (int i1 = pos, i2 = 0; i1 < (pos + tamanho); i1++, i2++)
    str2[i2] = str1[i1];
  str2[tamanho] = 0;
}

int main(void) {
  char string[tam];
  char sub[tam];
  char analise[tam];
  int posicoes[10] = {0};
  fgets(sub, tam, stdin);
  // Converte tudo pra minusculas em substring
  for (int i = 0; i < strlen(sub); i++)
    sub[i] = tolower(sub[i]);
  fgets(string, tam, stdin);
  // Converte tudo pra minusculas em string
  for (int i = 0; i < strlen(string); i++)
    string[i] = tolower(string[i]);
  sub[strlen(sub) - 1] = 0;
  int tamsub = strlen(sub);
  string[strlen(string) - 1] = 0;
  int cont = 0;
  for (int i = 0, p = 0; i < tam - tamsub; i++) {
    substr(string, analise, i, tamsub);
    if (strcmp(sub, analise) == 0) {
      posicoes[p++] = i;
      cont++;
    }
  }
  printf("Repetições: %d\n", cont);
  if (cont > 0)
    printf("Posições: ");
  for (int i = 0; i < cont; i++)
    printf("%d ", posicoes[i]);
  printf("\n");
  return 0;
}

// Escreva um programa que recebe duas strings de até 40 caracteres, A e B, e
// informa quantas vezes A aparece dentro de B. O programa deve ignorar
// diferenças de maiúsculas e minúsculas e deve apontar, como mostram os exemplos
// de execução, as posições onde cada repetição inicia.