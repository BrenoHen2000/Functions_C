#include <stdio.h>

//remove o indice que a gente coloca ; indice 5 tira o 6 numero
int remover_index(int x, int v[], int n){
    int k;
    for (k=x; k<n-1; k++)
        v[k]=v[k+1];
    return n-1;   
}

int Busca (int x, int v[], int n) {
    int k;
    k = n - 1;
        while (k >= 0 && v[k] != x)
        k -= 1; 
    return k;
}
//remove o numero que a gente coloca
int remover_numero(int x, int v[], int n){
    int bus = Busca(x, v, n);
    if(bus == -1) {
        printf("Numero nao detectado");
        return n;
    } else {
        return remover_index(bus,v,n);
    }
}


int main(){
    int vetor[10]={1,2,3,4,5,6,7,8,9};
    
    for(int i=0; i<10;i++){
        printf(" %d", vetor[i]);
    }
    printf("\n");
    
remover_index(0,vetor, 10);
   for(int i=0; i<9;i++){
        printf(" %d", vetor[i]);
    }
    printf("\n");

remover_numero(8,vetor, 10);
    for(int i=0; i<9;i++){
        printf(" %d", vetor[i]);
    }
     printf("\n");

remover_numero(15,vetor, 10);
    return 0;
}
