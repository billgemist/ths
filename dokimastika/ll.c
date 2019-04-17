#include <stdio.h>

int main(){

	int i = 23;
	int b = 34;

    int *g = &i;
    int *p = &b;

    printf("*p = %d\n", *p);
    printf("p num address = %p\n", p);
    printf("p address = %p\n", &p);

    printf("------------------\n");

    printf("*g = %d\n", *g);
    printf("g num address = %p\n", g);
    printf("g address = %p\n", &g);

printf("------------------\n");

    printf("i address = %p\n", &i);
    printf("b address = %p\n", &b);
    
	return 0;
}