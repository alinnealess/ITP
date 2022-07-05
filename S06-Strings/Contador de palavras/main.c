#include <stdio.h>
#define qtd 20
#define tam_ 20

int TamStr(char txt[]) {
    int tam;
    for (tam = 0; txt[tam] != 0; tam++);
    return tam;
}

int CompStr(char str1[tam_], char str2[tam_]) {
    int match = 1;
    if (TamStr(str1) != TamStr(str2))
        match = 0;
    else
        for (int i = 0; i < TamStr(str1); i++)
            if (str1[i] != str2[i]) {
                match = 0;
                break;
            }
    return match;
}


void copystr(char strsrc[tam_], char strdst[tam_]) {
    int i;
    for (i = 0; i <= TamStr(strsrc); i++)
        strdst[i] = strsrc[i];
}


void addPalavra(char word[tam_], char words[qtd][tam_], int count[qtd]) {
    int p, achou;
    for (p = 0, achou = 0; words[p][0] != 0 && p < qtd && !achou; p++)
        if (CompStr(word, words[p])) {
            
            count[p]++;
            achou = 1;
        }
    if (!achou && p < qtd) {
       
        copystr(word, words[p]);
        count[p] = 1;
    }
}


void buscar_Palavras(char txt[], char words[qtd][tam_], int count[qtd]) {
    char word[tam_] = {0};
    int elem = 0;
    for (int i = 0; i <= TamStr(txt); i++) {
        if (txt[i] != ' ' && txt[i] != 0)
            word[elem++] = txt[i];
        else {
            if (i > 0 && txt[i-1] != ' ') {
                addPalavra(word, words, count);
                for (int j = 0; j < tam_; j++)
                    word[j] = 0;
                elem = 0;
            }
        }
    }
}

int main(void) {
    char texto[256] = {0};                  
    char palavras[qtd][tam_] = {0};    
    int cont_pal[qtd] = {0};        
    scanf("%[^\n]s", texto);
    
    buscar_Palavras(texto, palavras, cont_pal);
   
    for (int p = 0; p < qtd; p++) {
        if (palavras[p][0] != 0)
            printf("%d: %s\n", cont_pal[p], palavras[p]);
    }
    return 0;
}


//Escreva um programa em C que conta o número de palavras dentro de um texto longo digitado pelo usuário. Algumas regras nesta contagem de palavras:

//Qualquer caractere diferente de espaço, mesmo que sozinho, pode ser considerado uma palavra;
//Lembre-se que o usuário pode digitar mais de um espaço entre as palavras;
//Caso algum sinal de pontuação esteja junto de uma palavra, o mesmo pode ser acrescido a esta.