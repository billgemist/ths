//undefined behavior number 63
#include <stdio.h>

const int fun (int a, int b){
	int sum = a + b;
	return sum;
}

int main(){
    int res = fun(23, 34);
	return 0;
}
