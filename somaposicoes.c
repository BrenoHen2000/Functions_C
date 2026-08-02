//Leia dois vetores de tamanho 10 e gere um terceiro contendo a soma das posições correspondentes.
#include <stdio.h>

int main(){
    int a[5] = {1,2,3,4,5};
    int b[5] = {1,2,3,4,5};
    int c[5];
    
    for(int i=0; i<5; i++){
        c[i] = a[i]+b[i];
    }
    
    for(int i=0; i<5; i++){
        printf("%d \n", c[i]);
    }
    
    
    return 0;
}
