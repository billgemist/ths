//undefined behavior number 168
#include<stdio.h> 
#include<stdlib.h> 
#include <string.h>

int main() {
	char str[9] = "tutorial";
	char ftr[9] = "aftertut";
	char *return_val = 0;
	int bufsize = strlen(str) + 1;
	char *buf = (char *)malloc(bufsize);
	if (!buf) {
		return EXIT_FAILURE;
	}
	/*printf("str = %s\n", str);
	printf("ftr = %s\n", ftr);
	printf("buf(1) = %s\n", buf);
	*/
	free(buf);
	
	strcpy(buf, ftr);
	//printf("buf(2) = %s\n", buf);

	
	return EXIT_SUCCESS;
}
