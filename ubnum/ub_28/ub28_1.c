//undefined behavior number 28
#include <stdio.h>
int main(){
	// in C99 translation limits section 5.2.4.1 
	extern int abcdefghijkjlmnopqrstuvwxyz123456 = 10; 
	extern int abcdefghijkjlmnopqrstuvwxyz123457 = 34;

	//printf("a = %d \n", a); //printf will be removed...
	//printf("b = %d \n", b); //printf will be removed...


	//int sum = abcdefghijkjlmnopqrstuvwxyA + abcdefghijkjlmnopqrstuvwxyz;
	//int sum = abcd + abcD;

	//printf("sum = %d \n", sum); //printf will be removed...


	return 0;
}
