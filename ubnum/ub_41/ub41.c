//undefined behavior number 41
#include <stdio.h>

int main(){
	int a = 103;
	int *ptr = &a;
    
	double dbl = (double) ptr;
	return 0;
}
