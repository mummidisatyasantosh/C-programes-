/*write a c program to perform addition and difference of 
two interger number and two real number*/

#include<stdio.h>

int main()
{
	int num1,num2,add,diff;
	float n1,n2,sum,sub;
	printf("enter any two integer numbers");
	scanf("%d%d",&num1,&num2);
	add=num1+num2;
	diff=num1-num2;
	printf("two integer numbers are%d	%d",add,diff);
	printf("Enter any two real numbers");
	scanf("%f%f",&n1,&n2);
	sum=n1+n2;
	sub=n1-n2;
	printf("Addition of real numbers are %f",sum);
	printf("subraction of two real number are %f",sub);
}
