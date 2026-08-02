#include <stdio.h>
int r= 0;
int ehprimo(int a) {
	unsigned long som=0;
	for(unsigned long i=1; i<a-1; i++) {
		if(a%i==0) {
			som+=i;
		}
	}
	if(som==a) {
		r=1;
	} else {
		r= 0;
	}
	return r;
}

int main () {

	int n;
	scanf("%d",&n);

	while (n) {
		n--;

		unsigned long x;
		scanf("%lu",&x);

		ehprimo(x);

		if(r) {
			printf("%lu eh perfeito\n",x);
		} else {
			printf("%lu nao eh perfeito\n",x);
		}
	}
	return 0;
}
