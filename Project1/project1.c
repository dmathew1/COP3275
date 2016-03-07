#include <stdio.h>

int main(void){
	//Add your code here

	//variables
	int a,b;
	float c;

	//input first integer
	scanf("%d , %d",&a,&b);

	//addition
	printf("a + b is: %d\n", a+b);

	//subtraction
	printf("a - b is: %d\n", a-b);

	//multiplication
	printf("a * b is: %d\n", a*b);

	//integer division, a/b float division, float division a/b scientific
	c = (float)a/b;
	printf("a / b is: %d \t\t %.2f\t\t %.2e\n", a/b, c, c);

	return 0;
}
