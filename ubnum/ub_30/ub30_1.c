//undefined behavior number 30
#include <stdio.h>


int main(){
	
	char str[] = "is this undefined behavior number 30?";

	str[2] = 'L'; //invokes undefined behavior
	
	if(str[2] == 'L'){
		//printf("%s\n", str);
		printf("Apparently it is not!\n");
	}
	
	return 0;
}