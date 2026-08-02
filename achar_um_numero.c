//Leia um vetor de 15 elementos e verifique se um número informado pelo usuário pertence ao vetor
#include <stdio.h>

int busca(int a[], int tamanho, int x){
    for(int i=0; i<tamanho; i++){
        if(a[i]==x)
            return 1;
    }
    return 0;
}

int main(){
    int vetor[11] = {5,4,3,2,1,9,8,7,6,10,11};
    
    int num_procurado = 11;
    
    int q = busca(vetor, 11, num_procurado);
    printf("%d existe no vetor?\n", num_procurado);
    printf("%d\n", q);
    printf("0 se nao existir e 1 se existir");
    return 0;
}
