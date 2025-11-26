//write a c programe to find fibonacci series of a given number using recursion
#include<stdio.h>
int fib(int);
int main()
{
	int n,i;
	printf("\nEnter any +ve integer number");
	scanf("%d",&n);	//5
	printf("\nFibonacci series is ");
	for(i=0;i<n;i++)	//0<5  1<5	2<5
		printf("%d ",fib(i));	//0 1 1 2 3
}
int fib(int x)
{
	if(x==0 || x==1)
		return x;
	else
		return fib(x-1) + fib(x-2);
}
