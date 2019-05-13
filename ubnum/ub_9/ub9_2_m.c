//undefined behavior number 9 - similar to number 8
#include <stdio.h>
#include <stdlib.h>

int* func2(int *ptr){
	int *f2;
	*f2 = *ptr + 10;
	return f2;
}

int* func1(){
	int* f1ptr = func2(f1ptr);
	return f1ptr;
}

int main(){
	int *ptr;

	ptr = func1();
	*ptr = *ptr + 1;

	printf("ptr = %d\n", *ptr); //will be removed
	
	return 0;
}


