#include <stdio.h>

int fatorial(int x){
	int y=1;

	for(int i=x; i>0; i--){
		y *= i;	
	}
	return y;
}

int main(){
	int x;
	scanf("%d", &x);

	int fat = fatorial(x);
	
	printf("%d", fat);
	return 0;
}
