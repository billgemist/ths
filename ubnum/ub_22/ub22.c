//undefined behavior number 22
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
//misra rule 11.3 example
int main(){
	
	uint8_t *p1;
	uint32_t *p2;
	/* Non-compliant - possible incompatible alignment */
	p2 = ( uint32_t * ) p1;
    
	return 0;
}
