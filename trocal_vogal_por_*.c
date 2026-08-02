//funcao para substituir as vogais por *

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void vogal_(char a[]){
    int x = strlen(a);
    
    for(int i=0; i<x; i++){
        /*caso n faca diferenca mostrar os caracteres minusculos
        a[i] = tolower(a[i]); 
        if(a[i]=='a' || a[i]=='e' || a [i]=='i' || a [i]=='o' ||a [i]=='u')
            a[i] = '*';
        */
        
        char c = tolower(a[i]);
        if(c =='a' || c =='e' || c =='i' || c =='o' || c =='u')
            a[i] = '*';
    }
}


int main(){
    char a[] = "BRENO HENRIQUE";
    
    printf("%s\n", a);
    
    vogal_(a);
    
    printf("%s", a);
    
    return 0;
}
