//undefined behavior number 78
#include <stdio.h>
extern int k;
int main(){
	//extern int k;

	printf("k = %d\n", k);
    
	return 0;
}
