//undefined behavior number 9
#include <stdio.h>
#include <stdlib.h>

int main(){
	char *p = malloc(5);
	free(p);

	if (p == NULL){
		printf("null \n");
	}

	return 0;
}