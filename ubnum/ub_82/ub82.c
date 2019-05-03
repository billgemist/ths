//undefined behavior number 82
#include <stdio.h>

int func(int a, int b){
	//return (a+b);
}

int main(){
	
	int val = func(1, 2);
    
	printf("%d\n", val);

	return 0;
}
