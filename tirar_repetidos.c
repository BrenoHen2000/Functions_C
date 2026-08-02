#include <stdio.h>

int busca(int x, int v[], int n){
    int k;
    k = n-1;
        while(k>=0 && v[k] != x){
            k-=1;;
    }
    return k;    
}

int remover(int x, int v[], int n){
    //int k = busca(x, v, n);
    int j=0;
        for(int i=0; i<n; i++){
            if(v[i]!=x){
                v[j]=v[i];
                j++;
            }
        }
    return j;
}

int main(){
    int v[5]={1,1,1,4,5};
    
    for(int i=0; i<5; i++){
        printf("%d", v[i]);
    }
    
    printf("\n");
    
    int j = remover(1, v, 5);
    
    for(int i=0; i<j; i++){
        printf("%d", v[i]);
    }
    
    
    return 0;
}
