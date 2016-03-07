#include <stdio.h>

#define M 4
#define N 4


int main(void){

	//row and column
	int i;
	int left = 0, right = N-1, top = 0, bottom = M-1;

	//initialize array
	int array[M][N] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

	printf("\n");

	while(left <= right || top <= bottom){
		//from left to right print top
		for(i = left; i <= right; i++){
			printf("%d,", array[top][i]);
		}

		//increment top 
		top++;


		//from top to bottom print right
		for(i = top; i <= bottom; i++){
			printf("%d,", array[i][right]);
		}

		//decrement right;
		right--;
		
		//from right to left print bottom
		for(i = right; i >= left; i--){
			printf("%d,", array[bottom][i]);
		}

		//increment bottom
		bottom--;

		//from bottom to top, print left
		for(i = bottom; i >= top; i--){
			printf("%d,", array[i][left]);
		}

		//increment left
		left++;


	}
			printf("\n");
}
 
