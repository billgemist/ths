//undefined behavior number 10
#include <stdio.h>

int main(){

	int N,M = 1;


 	int uv=0;

    //printf("Please input an integer value: ");
    //scanf("%d", &uv);

    printf("uv = %d\n", uv);
    printf("M = %d\n", M);
    printf("N = %d\n", N);

    if(uv != 0){
    	M = 20;
    	printf("inside 1st if, M = %d\n", M);
    }

    if(M != 1){
    	N = 40;
		printf("inside 2nd if, N = %d\n", N);
    }

	return 0;
}