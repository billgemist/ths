#include <stdio.h>
int main (){

    int n = 20;
    int b = 1;

    for(int i = 5; i >= 0; i--){
        n = n * i;
        b = 10000/n;
        printf ("n = %d \n", n);
        printf("b = %d \n", b);
        printf ("i = %d \n", i);
        printf ("###################\n");
    }
    
    return 0;

}