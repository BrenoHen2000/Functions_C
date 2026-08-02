//fatorial
#include <stdio.h>

unsigned long fat(unsigned long x) {
	int f = 1;

	unsigned long i = 1;
	while(i<=x) {
		f=f*i;
		i++;
	}
	return f;
}

int main() {
	int y=0;
	scanf("%ul",&y);

	for(int i = 0; i<y; i++) {
		printf("%d! = %lu\n",i, fat(i));
	}
	
	printf("5!/3! = %lu", fat(5)/fat(3));
	printf("%lu", fat(y));
}
