//undefined behavior number 9 - similar to number 8
#include <stdio.h>
#include <stdlib.h>

void func2(int *ptr){
	int *f2 = ptr;
	//f2 = *ptr + 10;
	printf("ptr = %d\n", *f2); //will be removed
}

int main(){
	int a = 10;
	int *ptr = &a;

	func2(ptr);

	
	
	return 0;
}


