//undefined behavior number 20
#include <stdio.h>

void foo(int alpha, int beta){
	alpha = 2*beta;
}



int main(){
	
	int gamma = foo(2, 4);
    
	printf("gamma = %d \n", gamma);

	return 0;
}
