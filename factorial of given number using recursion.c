//write a programe to find the factorial of given number using recursion
#include<stdio.h>
int fact(int );
int main()
{
	int n;
	printf("\nEnter any +ve integer number ");
	scanf("%d",&n);	//6
	
	printf("Factorial is %d",fact(n));	//6
}
int fact(int x)
{
	if(x == 1)	//base condition
		return x;
	else
		return x * fact(x-1);	//recursive call
}
