//write  c program  to find max of three number using conditional operator
#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("Enter any three integer numbers");
	scanf("%d%d%d",&a,&b,&c);
	max=a > b ? (a>c?a:c) :(b>c? b:c);
	printf("maximum of three numbers %d %d %d is %d",a,b,c,max);
}
