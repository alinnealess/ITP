#include <stdio.h>
#include <stdlib.h>

int taman(int n, char str[]) {
  int cont = 0;
  while (cont < n && str[cont] != '\0') {
    cont = cont + 1;
  }
  return cont;
}

void mostrar(char frase[]) {
  int val = (frase[0]-'0')*100+(frase[1]-'0')*10+(frase[2]-'0');
  int tam = taman(val, frase);
  if (val >= 0 && tam == val && frase[val] == '\0') {
    printf("%d == %d OK!", tam, val);
  } else {
    printf("Resultado inesperado! Um \\n talvez?");
  }
}

char* dynamicInput() {
  char *input = NULL;
  char curs;
  int i = 0;
  do {
    scanf("%c", &curs);
    input = realloc(input, (i+1) * sizeof(char));
    if (curs != '\0' && curs != '\n') input[i] = curs;
    else input[i] = '\0';
    i++;
  } while (curs != '\0' && curs != '\n');
  return input;
}

int main() {
  char *inputTxt = dynamicInput();
  mostrar(inputTxt);
  printf("\n");
  free(inputTxt);
  return 0;
}