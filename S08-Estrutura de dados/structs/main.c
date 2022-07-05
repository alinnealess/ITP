#include <stdio.h>
#include <stdlib.h>

int main(void) {
  typedef struct{
    int matricula;
    float nota1;
    float nota2;
    int codDisc;
    char aluno[50];
  }Boletim;

  char sep;
  int quantAlunos, ref = 1;
  float media;
  Boletim *notas = malloc(sizeof(Boletim));

  scanf("%d", &quantAlunos);
  
  while(ref < (quantAlunos + 1)){
    scanf("%d %c %s %d %c %f %c %f", &notas[ref - 1].matricula, &sep, notas[ref - 1].aluno, &notas[ref - 1].codDisc, &sep, &notas[ref - 1].nota1, &sep, &notas[ref - 1].nota2);
    ref++;
    notas = realloc(notas, ref * sizeof(Boletim)); 
  }

  for(int i = 0; i < quantAlunos; i++){
    media = ((notas[i].nota1 * 1.00) + (notas[i].nota2 * 2.00)) / 3.00;
    
    printf("%s média final = %.1f\n", notas[i].aluno, media);
  }
}