//undefined behavior number 59
//C99 6.7.2.1/17 EXAMPLE
#include <stdio.h>

struct s {
	int n;
	double d[]; //flexible array 
};

int main(){
    
	struct s t1 = {0};

	t1.d[0] = 4.2; //it might be an undefined behavior.

	return 0;
}
