#include <stdio.h>

  
int main() {
    int tam;
    scanf("%d,", &tam);
    int vetor[tam];     
        
    for(int i=0; i < tam; i++){
        scanf("%i",&vetor[i]);
    }    
        
    
    // Procura os repetidos   
    for(int j = 0; j < tam ; j++) {    
        for(int k = j + 1; k < tam; k++) {    
            if(vetor[j] == vetor[k])    
                printf("%d ", vetor[k]);    
        }    
    }   
    return 0;
}