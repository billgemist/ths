//undefined behavior number 16
#include <stdio.h>
#include <float.h>


int main(){

	//double a = FLT_MAX ^ 2; // when compiles throws an error see picture 
	double a = FLT_MAX * 2;
	float b = (float) a;

	printf("a: %f\n", a);
	printf("b: %f\n", a);

	return 0;
}
