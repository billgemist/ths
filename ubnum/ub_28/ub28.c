//undefined behavior number 28
#include <stdio.h>
//#include "ub28.h"
extern int abcdefghijkjlmnopqrstuvwxyz123456;
extern int abcdefghijkjlmnopqrstuvwxyz123457;

int main(){
	// in C99 translation limits section 5.2.4.1 

	
	int sum = abcdefghijkjlmnopqrstuvwxyz123456 + abcdefghijkjlmnopqrstuvwxyz123457;


	//printf("1 = %d \n", abcdefghijkjlmnopqrstuvwxyz123456); //printf will be removed...
	//printf("2 = %d \n", abcdefghijkjlmnopqrstuvwxyz123457); //printf will be removed...

	printf("sum = %d \n", sum); //printf will be removed...


	return 0;
}
