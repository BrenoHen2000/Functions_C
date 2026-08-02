#include <stdio.h>

int ordena(int a[], int tamanho){
    int menor;
    while(tamanho){
        for(int i=0; i< tamanho; i++){
            if(a[i]>a[i+1]){
                menor = a[i];
                a[i] =  a[i+1];
                a[i+1] = menor;
            }
        }
        tamanho--;
    }
    return a[tamanho];
}

int main(){
    int vetor[11] = {5,4,3,2,1,9,8,7,6,10,11};
    
    ordena(vetor, 11);
    
    for(int i=0; i<11;i++){
        printf("%d",vetor[i]);
    }
    
    return 0;
}
