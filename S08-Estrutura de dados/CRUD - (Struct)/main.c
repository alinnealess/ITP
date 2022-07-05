#include <stdio.h>
#include <string.h>

typedef struct {
  int idade;
  char nome[50];
  char sexo;
} Pessoa;

void insPessoa(Pessoa *ps, int *t, Pessoa p) {
  ps[*t] = p;
  (*t)++;
}

void delPessoa(Pessoa *ps, int *t, Pessoa d) {
  int i;
  for (i=0; i < *t; i++)
    if (strcmp(ps[i].nome, d.nome)==0 &&
        ps[i].idade == d.idade &&
        ps[i].sexo == d.sexo)
      break;

  if (t > 0 && i < (*t)-1) {
    for (int j=i; j < *t; j++)
      ps[j] = ps[j+1];
    (*t)--;
  }
}

void imprimePessoa (Pessoa *p, int t) {
  for (int i = 0; i < t; i++)
    printf("%s,%d,%c\n", p[i].nome, p[i].idade,
      p[i].sexo);
}

Pessoa Dados() {
  Pessoa p;
  char resto;
  p.nome[0] = '\0';
  fflush(stdin);
  fgets(p.nome, 50, stdin);
  if (p.nome[strlen(p.nome)-1] == '\n')
    p.nome[strlen(p.nome) - 1] = '\0';
  scanf("%d", &p.idade);
  scanf(" %[^\n]c", &p.sexo);
  scanf("%c", &resto);
  return p;
}

int main(void) {
  int cont = 0;
  Pessoa pessoas[20];
  char nome[50] = {0};
  int idade;
  char sexo;
  char aux = 0, resto;
  
  while (aux != 'p') {
    fflush(stdin);
    scanf("%[^\n]c", &aux);
    scanf("%c", &resto);
  
    if (aux == 'p')
      break;
    Pessoa p = Dados();
  
    if (aux == 'i')
      insPessoa(pessoas, &cont, p);
  
    if (aux == 'd')
      delPessoa(pessoas, &cont, p);
  }
  imprimePessoa(pessoas, cont);
  return 0;
}