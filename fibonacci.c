//fibonacci -> acho que cai na prova
#include <stdio.h>
int fibo (int i) {
	int f0 = 0;
	int f1 = 1;
	int fn = 1;
	    if(i<1)
	        return f0;
	    else
    	    for(int j = 0; j<i; j++) {
    	        fn = f0 + f1;
    	        f0 = f1;
    	        f1 = fn;
        }
    	return fn;
}

int main() {
	int  x;
	scanf("%d", &x);
	    for(int i = 0; i< 10; i++){
	        printf("fib(%d) = %d\n", i, fibo(i));
	}
	
	return 0;
}
