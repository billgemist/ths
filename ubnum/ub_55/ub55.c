//undefined behavior number 55
#include <stdio.h>

int main(){
	
	static int a = 10;

	int *ptr = &a;

	int b = *ptr;
    
	return 0;
}
