#include <stdio.h>
#include <stdlib.h>

// para usar a funcao qsort precisamos de uma funcao 
int ordena_menor(const void *a, const void *b) { //do menor pro maior
    return (*(int*)a - *(int*)b);
}

int ordena_maior(const void *a, const void *b) { //do maior do pro menor
    return (*(int*)b - *(int*)a); 
}

int main() {
    int vetor[10] = {404, 6551, 10, 5, 3, 100, 468, 23, 1254};

    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
    qsort(vetor, 10, sizeof(int), ordena_maior);

    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
    qsort(vetor, 10, sizeof(int), ordena_menor);

    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
