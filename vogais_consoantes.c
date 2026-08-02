#include <stdio.h>
#include <string.h>

//funcao strchr procura um outro pedaco

int vogal(char a[]){
    int cont=0;
    int len=strlen(a);
    for(int i = 0; i<len; i++){
        if(a[i] == 'a'|| a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
        cont++;
    }
    return cont;
}

int consoante(char a[]){
    int cont=0;
    int len=strlen(a);
    for(int i = 0; i<len; i++){
        if(a[i] == 'a'|| a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
        cont++;
    }
    int x = len-cont;
    return x;
}


int main() {
   char a[]="breno";
   
   int y = strlen(a);
   int x = vogal(a);
   int q = consoante(a);
   
   printf("%d %d %d", y, x, q);
}
