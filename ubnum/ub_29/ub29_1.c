//undefined behavior number 29
#include <stdio.h>

void myFunction(){
	printf("%s\n", __func__);
}


int main(){
	
	myFunction();
    
	return 0;
}
