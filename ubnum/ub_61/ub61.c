//undefined behavior number 61
//example from Carnegie Mellon University
#include <stdio.h>
/*
void remove_spaces(const char *str, size_t slen) {
  char *p = (char *)str;
  size_t i;
  for (i = 0; i < slen && str[i]; i++) {
    if (str[i] != ' ') *p++ = str[i];
  }
  *p = '\0';
}
*/
void func(const int *ptr){
	int *f = (int *)ptr;
	printf("the value of ptr is = %d\n", *f);
    printf("ptr address is = %p\n",  &f);
}

int main(){
	int deka = 10;
	const int *mptr;
	mptr = &deka;

	printf("the value of mptr is = %d\n", *mptr);
    printf("mptr address is = %p\n",  &mptr);


	func(mptr);
    
	return 0;
}
