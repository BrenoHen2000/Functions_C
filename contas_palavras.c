Leia uma frase e conte quantas palavras ela possui.
#include <string.h>
#include <stdio.h>

int palavras(char a[]) {
    int cont=0;
    const char delimitadores[] = " ,;-";
    
    
    char *token = strtok(a, delimitadores);
    
    while (token != NULL){
        cont++;
        token = strtok(NULL, delimitadores);
    } 
    
    return cont;
}

int main() {
   char frase[] = "este eh um  teste para saber quantas palavras temos";
  
   int x = palavras(frase);
   
   printf("%d",x);

    return 0;
}
