//undefined behavior number 85
#define FOO(A,B) A##B
#include <stdio.h>
#include <FOO(STR, ING.H)>

int main(){
	

	//printf("%d\n", triple(aa));	
    
	return 0;
}
