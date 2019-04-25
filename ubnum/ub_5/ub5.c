//undefined behavior number 5
#include <stdio.h>

int main(){
	
	int val = 10;

	int var = $3; //undefined behavior 
 
	//int sum = val + var;

	//printf("val = %d\n", val); //printf will be removed...
	//printf("var = %d\n", var); //printf will be removed...
	//printf("sum = %d\n", sum); //printf will be removed...
     
	return 0;
}
