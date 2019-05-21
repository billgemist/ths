//undefined behavior number 10
#include <stdio.h>

int main(){

  int N,M = 0;

  printf("M = %d\n", M);
  printf("N = %d\n", N);

  if(M == 0){
    M = 1;
    N = 6;
    printf("inside 1st if, M = %d, N = %d\n", M, N);
  }

  if(M != 0){
    int k;
    printf("inside 2nd if, k = %d\n", k);
  }

  return 0;
}