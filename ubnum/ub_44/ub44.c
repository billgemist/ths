//undefined behavior number 44
#include <stdio.h>

int main(){
	
	
	char ub[18] = "UndefinedBehavior";
	
	
	char *ptr = ub + 18;	// pointing to just beyond

	char var = *ptr; //undefined behavior number 44

	char aaa = 'F';
	/*
	*** Disclosure: The printf's will be removed in the test it is just for mine convinience!
	*/


	printf("var = %c\n", var);
	printf("AAA = %c\n", aaa);
    
	return 0;
}
