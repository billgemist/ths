//undefined behavior number 75
#include <stdio.h>

int fun (){
	return 34;
}


int main(){
	int var = {
		if(fun()>0){
			3;
		}
		else{
			4;
		}
	};

	printf("%d\n", var);

	return 0;

}


