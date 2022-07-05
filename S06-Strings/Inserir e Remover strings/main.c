#include <stdio.h>
#include <string.h>





void read_line(char linha[], int tam, FILE* f){
    fgets(linha, tam, f);
    while(linha[0] == '\n')
        fgets(linha, tam, f);
    if(linha[strlen(linha)-1] == '\n')
        linha[strlen(linha)-1]='\0';
}
// para usar faça como a função fgets: read_line(string, 200, stdin);
// precisa incluir o stdio.h e string.h





int main(void) {
  char readline[199];

  fgets(readline,200,stdin);
  
  
  return 0;
}