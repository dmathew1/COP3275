#include <stdio.h>

int main(void){

	//row and column
	int row = 3;
	int col = 3;
	int endingRow = row - 1;
	int endingCol = col - 1;


	//initialize array
	int array[row][col] = {{1,2,3},{4,5,6},{7,8,9}};

	//loop through to find top row
	for(int i = 0; i < row; i++){
		printf("%d\n", array[i][col]);
	}

}
