//undefined behavior number 16
#include <stdio.h>
#include <float.h>


int main(){

	double a = FLT_MAX + 1;
	float b = (float) a;

	printf("a: %f\n", a);
	printf("b: %f\n", a);

	return 0;
}
