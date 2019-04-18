//undefined behavior number 46
#include <stdio.h>


int main(){
	int arr[4][5] = {{1,1,1,1,1},{2,2,2,2,2},{3,3,3,3,3},{4,4,4,4,4}};


	int b = arr[1][7];

	//printf("%d\n", b);

	/*int i,j;

	for(int i = 0; i < 1; i++){
		for(int j = 0; j < 7; j++){
			printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
		}
	}*/


	return 0;
}