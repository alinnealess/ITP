#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
  int numVit;
  int numEmp;
  int numDer;
  int golsFeitos;
  int golsSofridos;
  int pontuacao;
  int saldoGols;
  char time[200];
}Tabela;

void ordenarTabela(Tabela* pontos, int qTimes){
  Tabela aux;
  

  for(int i = 0; i < qTimes - 1; i++)
    for(int j = i + 1; j < qTimes; j++){
      if(pontos[i].pontuacao < pontos[j].pontuacao){
        aux = pontos[i];
        pontos[i] = pontos[j];
        pontos[j] = aux;
      }
      else if(pontos[i].pontuacao == pontos[j].pontuacao && pontos[i].numVit < pontos[j].numVit){
        aux = pontos[i];
        pontos[i] = pontos[j];
        pontos[j] = aux;
      }
      else if(pontos[i].pontuacao == pontos[j].pontuacao && pontos[i].numVit == pontos[j].numVit && pontos[i].saldoGols < pontos[j].saldoGols){
        aux = pontos[i];
        pontos[i] = pontos[j];
        pontos[j] = aux;
      }
    }
}

int main(void){
  char time[200];
  int numVit, numEmpates, numDer, golsFeitos, golsSofridos, pontuacao, saldoGols;
  int qTimes, ref = 1;
  Tabela *pontos = malloc(sizeof(Tabela));
  char aux;

  scanf("%d", &qTimes);

  while(ref < (qTimes + 1)){
    scanf("%s %d %d %d %d %d", pontos[ref - 1].time, &pontos[ref - 1].numVit, &pontos[ref - 1].numEmp, &pontos[ref - 1].numDer, &pontos[ref - 1].golsFeitos, &pontos[ref - 1].golsSofridos);

   
    pontos[ref - 1].pontuacao = (pontos[ref - 1].numVit * 3) + (pontos[ref - 1].numEmp);


    pontos[ref - 1].saldoGols = (pontos[ref - 1].golsFeitos - pontos[ref - 1].golsSofridos);
    
    ref++;
    pontos = realloc(pontos, ref * sizeof(Tabela));
  }
  
  ordenarTabela(pontos, qTimes);
  
  printf("Tabela do campeonato:\n");
  printf("Nome| Pontos| Jogos| Vitorias| Empates| Derrotas| Gols Pro| Gols Contra| Saldo de Gols\n");
  
  for(int i = 0; i < qTimes; i++){
    char *equipe;
    equipe = strtok(pontos[i].time, ";");
    
    printf("%s| %d| %d| %d| %d| %d| %d| %d| %d\n", equipe, pontos[i].pontuacao, pontos[i].numVit + pontos[i].numEmp+ pontos[i].numDer, pontos[i].numVit, pontos[i].numEmp, pontos[i].numDer, pontos[i].golsFeitos, pontos[i].golsSofridos, pontos[i].saldoGols);
  }
  
  printf("\nTimes na zona da libertadores:\n");
  for(int i = 0; i < 6; i++){
    printf("%s\n", pontos[i].time);
  }
 
  printf("\nTimes rebaixados:");
  for(int j = qTimes; j > (qTimes - 5); j--){
    printf("%s\n", pontos[j].time);
  }
  
  return 0;
  
}