
#include <stdio.h>
#include <stdlib.h>

int main(){
  typedef struct{
    char prod[50];
    float valor;
    int quantidade;
  } Itens;
    
  int ref, nota = 1, pessoas;
  float totalConta = 0, distriTot;
  Itens *item = malloc(sizeof(Itens));
  
  do{
    scanf("%s", item[nota - 1].prod);
    scanf("%f", &item[nota - 1].valor);
    scanf("%d", &item[nota - 1].quantidade);
    scanf("%d", &ref);
        
    if(ref == 1){
      nota++;
      item = realloc(item, nota * sizeof(Itens));
    }
  } while(ref != 2);
  
  scanf("%d", &pessoas);
  
  for(int i = 0; i < nota; i++){
    totalConta += item[i].valor * item[i].quantidade;
  }
  
  distriTot = totalConta / pessoas;
    
  printf("Valor: R$ %.2f\n", totalConta);
  printf("Divisão R$ %.2f para cada participante.\n", distriTot);
    
  return 0;
}
