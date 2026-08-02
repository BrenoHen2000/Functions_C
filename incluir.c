#include <stdio.h>

int incluir(int num, int index, int v[], int n){
    int k;
    for(k=n; k>num; k--)
        v[k]=v[k-1];
    v[num] = index;
    
    return n+1;
}

int main(){
    int vetor [5] = {1,2,3,4,5};
    
    for (int i=0; i<5; i++){
        printf("%d", vetor[i]);
    }
    printf("\n");
    
    incluir(0,0,vetor,5);
    
    for(int i=0; i<6;i++){
        printf("%d", vetor[i]);
    }
    return 0;
}
