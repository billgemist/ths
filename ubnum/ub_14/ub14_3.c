//undefined behavior number 14
#include <stdio.h>

int foo(int a){
	int b = a^2;
	return b;
}


int main(){
	
	int var = 23;
	int c = foo(var);

	if(c > 10){
		long var = 1; 
	}

	printf("%ld\n", var);

	return 0;
}
