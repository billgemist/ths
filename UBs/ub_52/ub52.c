//undefined behavior number 52
#include <stdio.h>

int main(){

	int i=0;
    i = 7 + 2.0;

    printf("%d\n", i);
    
	return 0;
}