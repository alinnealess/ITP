#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void retornaPartes(char txt[], char partes [10][20], int*n) {
  char *ped, parte[50];
  ped = strtok(txt, "@");
  ped = strtok(NULL, "@");
  while (ped != NULL) {
    int i;
    for (i=0; ped[i] != '.'; i++)
      parte[i] = ped[i];
    parte[i] = '\0';
    strcpy(partes[(*n)++], parte);
    ped = strtok(NULL, "@");
  }
}

int main() {
  char texto[256] = {0}, *result;
  char email[50];
  char partes[10][20];
  int n =0;
  for (int i =0 ; i < 251; i++){
      scanf("%c", &texto[i]);
      fflush(stdin);
      result = strstr(texto, "FIM");
      if (result != NULL) break;
  }
 retornaPartes(texto, partes, &n);
 for (int i = 0;i<n; i++){
   printf("%s\n", partes[i]);
 }
    
  return 0;
}