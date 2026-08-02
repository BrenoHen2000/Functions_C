#include <stdio.h>
#include <string.h>

int is_palindromo(char a[]){
    int x = strlen(a);
    char s [x+1]; // para o /0;
    
    for(int i=0; i<x; i++){
        s[i] = a[x-1-i];
    } 
    s[x] = '\0';
    
    if (strcmp (s, a) == 0)
        return 1;
    else 
       return 0;
}

int main()
{
    char a[]  = "Arara";
    int x = is_palindromo(a);
    
    printf("1 = eh palindromo | 0 nao eh palindromo");
    printf("%d", x);

    return 0;
}
