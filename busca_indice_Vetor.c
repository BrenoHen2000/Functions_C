#include <stdio.h>

int Busca (int x, int v[], int n) {
    int k;
    k = n - 1;
        while (k >= 0 && v[k] != x)
        k -= 1; 
    return k;
}

int main(){
    int vetor[10]={1,2,3,4,5,6,7,8,9};
    
    int x = Busca(4,vetor, 10);
    
    printf("%d",x);
    
    return 0;
}
