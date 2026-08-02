#include <stdio.h>

// Tipo void pois a matriz C é alterada diretamente na memória
void soma(int linhas, int colunas, int a[linhas][colunas], int b[linhas][colunas], int c[linhas][colunas]) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

void subtrair(int linhas, int colunas, int a[linhas][colunas], int b[linhas][colunas], int c[linhas][colunas]) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            c[i][j] = a[i][j] - b[i][j];
        }
    }
}

int main() {
    int linhas = 2;
    int colunas = 2;

    // Declaração correta de matrizes bidimensionais
    int a[2][2] = {{2, 2}, {2, 2}};
    int b[2][2] = {{1, 1}, {1, 1}};
    int c[2][2]; // Declaração da matriz resultado

    printf("--- SOMA ---\n");
    soma(linhas, colunas, a, b, c);
    
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    printf("\n--- SUBTRACAO ---\n");
    subtrair(linhas, colunas, a, b, c);
    
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
