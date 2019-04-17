//undefined behavior number 30
#include <stdio.h>


int main(){
	
	//char str[] = "undefined behavior number 30";
	char *p = "undefined behavior number 30";

	//str[2] = 'L'; //invokes undefined behavior
	p[2] = 'L'; //invokes undefined behavior

	//printf("%s\n", *p); 
	
	return 0;
}