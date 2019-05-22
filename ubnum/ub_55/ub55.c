//undefined behavior number 55
#include <stdio.h>
/*An address constant is a null pointer, 
a pointer to an lvalue designating an object of static
storage duration*/
int main(){
	
	static int a = 10;

	int *ptr = &a;

	int b = *ptr;

	printf("b: %d\n", b);
    
	return 0;
}
