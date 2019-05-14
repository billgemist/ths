//undefined behavior number 28
#include <stdio.h>
int main(){
	// in C99 translation limits section 5.2.4.1 
	extern int global_symbol_definition_lookup_table_a; 
	extern int global_symbol_definition_lookup_table_b;

	int sum = global_symbol_definition_lookup_table_a + global_symbol_definition_lookup_table_b;


	//printf("a = %d \n", a); //printf will be removed...
	//printf("b = %d \n", b); //printf will be removed...


	//int sum = abcdefghijkjlmnopqrstuvwxyA + abcdefghijkjlmnopqrstuvwxyz;
	//int sum = abcd + abcD;

	printf("sum = %d \n", sum); //printf will be removed...


	return 0;
}
