#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int n;
	int d;
} RACIONAL;

int mdc(int n, int d) {
	int aux;
	while(d!=0) {
		aux=d%n;
		n=d;
		d=aux;
	}
	return n;
}

RACIONAL simplificado(RACIONAL A) {
	int MDC = mdc(A.n, A.d);
	A.n = A.n/MDC;
	A.d = A.d/MDC;

	if(A.d<0) {
		A.d=-1*A.d;
		A.n=-1*A.n;
	}
	return A;
}

void scanRac(RACIONAL *A) {
	scanf("%d / %d", &A->n,&A->d);
	return;
}

void printRac(RACIONAL A) {
	printf("%d/%d",A.n, A.d);
	return;
}

RACIONAL addrac(RACIONAL A, RACIONAL B){
    RACIONAL aux;
   	aux.n = A.n*B.d + B.n*A.d; 
	aux.d = A.d*B.d;
    return aux;
}

RACIONAL subrac(RACIONAL A, RACIONAL B){
    RACIONAL aux;
   	aux.n = A.n*B.d - B.n*A.d; 
	aux.d = A.d*B.d;
    return aux;
}

RACIONAL multirac(RACIONAL A, RACIONAL B){
    RACIONAL aux;
   	aux.n = A.n*B.n;
	aux.d = A.d*B.d;
    return aux;
}

RACIONAL divrac(RACIONAL A, RACIONAL B){
    RACIONAL aux1, aux2;
    if(B.n == 0){
        printf("Divisao por zero");
        exit(1);
    } else {
        aux2.n = B.d; 
	    aux2.d = B.n;
	    aux1=multirac(A,aux2);
    }
     return aux1;
}

int main () {
    int i, n;
    char op;
    RACIONAL A,B,C;
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        scanRac(&A);
        scanf(" %c ",&op);
        scanRac(&B);
    
    switch(op){
        case '+' : C = addrac(A,B); break;
        case '-' : C = subrac(A,B); break; 
        case '*' : C = multirac(A,B); break;
        case '/' : C = divrac(A,B); break;
    }   
    
    printRac(C), printf(" = "), printRac(simplificado(C)),printf("\n");
    }
	return 0;
}
