//undefined behavior number 46
#include <stdio.h>


int main(){
	//int arr[4][5] = {{1,1,1,1,1},{2,2,2,2,2},{3,3,3,3,3},{4,4,4,4,4}};
	int arr[4][5] = {{11,12,13,14,15},{21,22,23,24,25},{31,32,33,34,35},{41,42,43,44,45}};


	int b = arr[0][7];

	printf("%d\n", b);

	/*int i,j;

	for(int i = 0; i < 1; i++){
		for(int j = 0; j < 7; j++){
			printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
		}
	}*/


	return 0;
}


//11111
//22222
//33333
//44444