//undefined behavior number 33
//signed integer overflow
//example from John Ragher post of UB part 2
#include <stdio.h>
#include <limits.h>

int fun(int x){
	if(x<0) x = -x;
	return x >= 0;
}

int main(){
    
	printf("%d\n", -INT_MIN);
	printf("%d\n", fun(INT_MIN));


	return 0;
}
