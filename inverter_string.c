#include <stdio.h>
#include <string.h>

void inverter(char a[], char b[]){
    int x = strlen(a);
   
    for(int i=0; i<x; i++){
        b[i] = a[x-1-i];
    } 
    b[x] = '\0';
    
}

int main()
{
    char a[]  = "joSE da Silva";
    char b[] = " ";
    
    inverter(a,b);
    
    printf("%s", b);

    return 0;
}
