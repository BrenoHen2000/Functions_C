//Leia um vetor de 20 posições e conte:
//quantos números são pares;
//quantos são ímpares.
#include <stdio.h>

void pares (int x[], int tamanho){
	int pares=0;
	int impares=0;

	for(int i=0; i<tamanho; i++){
		x[i]%2==0 ? pares++ : impares++;
	}

	printf("%d %d", pares, impares);
}


#define tam 20
int main(){
	int vetor[tam]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int y = sizeof(vetor)/sizeof(vetor[0]);
	
	pares(vetor,y);
	
	return 0;
}
