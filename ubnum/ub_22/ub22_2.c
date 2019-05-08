//undefined behavior number 23
#include <stdio.h>

  
int *loop_function(void *v_pointer) {

  return v_pointer;
}
  
void func(char *char_ptr) {
  int *int_ptr = loop_function(char_ptr);
 
}



int main(){
	char v = 'v';
	char *vptr = &v;


	func(vptr);

	return 0;
}
