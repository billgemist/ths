//undefined behavior number 81
#include <stdio.h>

void fun(int a, ...)
	int a;
{

}

int main(){
	
	fun(34, 23, 41);
    
	return 0;
}
