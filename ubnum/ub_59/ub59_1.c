//undefined behavior number 59
#include <stdio.h>
#include <stdlib.h>
  
struct book{
	int value;
	int isbn[]; //flexible array member
};

int *find(struct book *tst, int f){
	int *first = tst->isbn;
	int *last = tst->isbn+0;

	while(first++ != last){ // undefined behavior
		if(*first == f){
			return first;
		}
	}
	return NULL;
}

int main(){
	
	struct book *tst = (struct book *)malloc(sizeof(struct book));
	if(tst == NULL){
		printf("ERROR\n");
		return 1;
	}
	find(tst, 10);

	return 0;
}

