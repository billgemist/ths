//undefined behavior number 69
#include <stdio.h>

void func(int n){
	int arr[n];

}

int main(){
	
	func(1); //defined
	func(0); //undefined
	func(-10); //undefined

	return 0;
}
