#include <stdio.h>


int sumOfDigits(int x){
	int temp;
	int rem;
	static int sum = 0;
	temp = x;

	if(temp < 0){
		temp = temp * -1;
	}
	//base case is if temp = 0
	if(temp == 0){
		int tempSum = sum;
		sum = 0;
		return tempSum;
	}else{

		//take the remainder
		rem = temp % 10;

		//sum the number up
		sum = sum + rem;

		//cut the last digit out
		temp = temp / 10;

		//recursive function
		return sumOfDigits(temp);
	}
}

int main(void){
	int number = 234;
	int number2 = 12;
	int number3 = -39;

	int answer = sumOfDigits(number);
	int answer2 = sumOfDigits(number2);
	int answer3 = sumOfDigits(number3);

	printf("sum of %d is: %d\n",number,answer);
	printf("sum of %d is: %d\n",number2,answer2);
	printf("sum of %d is: %d\n",number3,answer3);
	return 0;
}
