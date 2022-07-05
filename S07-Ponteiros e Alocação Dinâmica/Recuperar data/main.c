#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define INPUT_MAX_DATAS 26
#define INPUT_MAX_LENGTH 255
#define DELIM1 '/'
#define DELIM2 '-'

void parseData(char *dataInput, char *dia, char *mes, char *ano) {
  int isDelim1 = (dataInput[2] == DELIM1) && (dataInput[5] == DELIM1);
  int isDelim2 = (dataInput[2] == DELIM2) && (dataInput[5] == DELIM2);
  char* dataPart;
  char auxDia[2] = {0};
  char auxMes[2] = {0};
  if (isDelim1) {
    dataPart = strtok(dataInput, "/");
    for (
      int i = 0;
    
      (dataPart[i] != '/') &&
      (i < strlen(dataPart)) &&
      (dataPart[i] != '\0') &&
      (dataPart[i] != '\n');
      
      i++
    ) {
      dia[i] = dataPart[i];
    }
    
    dia[2] = '\0';
    for (int i = 0; i < 2; i++) auxDia[i] = dia[i];
    dataPart = strtok(NULL, "/");
    for (
      int i = 0;
    
      (dataPart[i] != '/') &&
      (i < strlen(dataPart)) &&
      (dataPart[i] != '\0') &&
      (dataPart[i] != '\n');
      
      i++
    ) {
      mes[i] = dataPart[i];
    }
    mes[2] = '\0';
    mes[2] = '\0';
    for (int i = 0; i < 2; i++) auxMes[i] = mes[i];
    
    dataPart = strtok(NULL, "/");
    for (
      int i = 0;
    
      (dataPart[i] != '/') &&
      (i < strlen(dataPart)) &&
      (dataPart[i] != '\0') &&
      (dataPart[i] != '\n');
      
      i++
    ) {
      ano[i] = dataPart[i];
    }
    ano[4] = '\0';
  }
  else {
    dataPart = strtok(dataInput, "-");
    for (
      int i = 0;
    
      (dataPart[i] != '-') &&
      (i < strlen(dataPart)) &&
      (dataPart[i] != '\0') &&
      (dataPart[i] != '\n');
      
      i++
    ) {
      dia[i] = dataPart[i];
    }
    
    dia[2] = '\0';
    for (int i = 0; i < 2; i++) auxDia[i] = dia[i];
    dataPart = strtok(NULL, "-");
    for (
      int i = 0;
    
      (dataPart[i] != '-') &&
      (i < strlen(dataPart)) &&
      (dataPart[i] != '\0') &&
      (dataPart[i] != '\n');
      
      i++
    ) {
      mes[i] = dataPart[i];
    }
    mes[2] = '\0';
    mes[2] = '\0';
    for (int i = 0; i < 2; i++) auxMes[i] = mes[i];
    
    dataPart = strtok(NULL, "-");
    for (
      int i = 0;
    
      (dataPart[i] != '-') &&
      (i < strlen(dataPart)) &&
      (dataPart[i] != '\0') &&
      (dataPart[i] != '\n');
      
      i++
    ) {
      ano[i] = dataPart[i];
    }
    ano[4] = '\0';
  }
  *dia = *auxDia;
  *mes = *auxMes;
};

int isDataValid(char rawTxt[]) {
  int isDelim1 = (rawTxt[2] == DELIM1) && (rawTxt[5] == DELIM1);
  int isDelim2 = (rawTxt[2] == DELIM2) && (rawTxt[5] == DELIM2);
  if (isDelim1 || isDelim2) return 1;
  else return 0;
}

int main() {
  char dataInput[INPUT_MAX_DATAS][INPUT_MAX_LENGTH] = {0};
  char dia[2], mes[2], ano[4], lineBuffer[11], *endLookup, *notEndLookup;
  int lines = 0;
  scanf("%[^\n]s", lineBuffer);
  notEndLookup = strstr(lineBuffer, "FIM?");
  endLookup = strstr(lineBuffer, "FIM\0");
  while (endLookup == NULL || notEndLookup != NULL) {
    for (int i = 0; i < strlen(lineBuffer); i++) {
      dataInput[lines][i] = lineBuffer[i];
    }
    lines++;
    scanf("%c", lineBuffer);
    scanf("%[^\n]s", lineBuffer);
    notEndLookup = strstr(lineBuffer, "FIM?");
    endLookup = strstr(lineBuffer, "FIM\0");
  }
  scanf("%c", lineBuffer);
  notEndLookup = NULL;
  endLookup = NULL;
  
  int valid = 0;
  for (int i = 0; i < lines; i++) {
    valid = isDataValid(dataInput[i]);
    if (valid) {
      parseData(dataInput[i], dia, mes, ano);
      for (int i = 0; i < 2; i++) printf("%c", dia[i]);
      printf("/");
      for (int i = 0; i < 2; i++) printf("%c", mes[i]);
      printf("/");
      for (int i = 0; i < 4; i++) printf("%c", ano[i]);
      printf("\n");
    }
    else printf("INVALIDO!\n");
  }
  return 0;
}