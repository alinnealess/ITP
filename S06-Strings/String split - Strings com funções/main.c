#include <stdio.h>
#include <string.h>

strsplit(char *string, const char *delim, char *pedaco){
  
  while(pedaco != NULL){
    printf("%s\n", pedaco);
    pedaco = strtok(NULL, delim);
  }
  
}
int main() {
  char string[50];
  const char delim[2];
  char *pont;

  fgets(string, 50, stdin);
  fgets(delim, 2, stdin);

  pont = strtok(string, delim);
  
  strsplit(string, delim, pont);
  
  return 0;
}

// #include<stdio.h>
// #include <string.h>

// int main(){
//   char texto[50];
//   scanf("%s\n", texto);
//   char delim[1];
//   scanf("%s", delim);
  
//   char* pedaco;


//   pedaco = strtok(texto, delim);

//   while(pedaco != NULL){
//     printf("%s\n", pedaco);

//     pedaco = strtok(NULL, delim);
//   }

//   return 0;
// }


// #include<stdio.h>
// #include <string.h>

// int main(){
//   char texto[55];
//   scanf("%s", texto);
//   char* pedaco;


//   pedaco = strtok(texto, " !.+");

//   while(pedaco != NULL){
//     printf("%s\n", pedaco);

//     pedaco = strtok(NULL, " !.+");
//   }

//   return 0;
// }