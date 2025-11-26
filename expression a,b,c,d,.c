//write C program to evalulate the following ecpression a/b*c-b+a*d/3
#include<stdio.h>
int main()
{
	float a,b,c,d,e;
	printf("enter a,b,c,d: values");
	scanf("%f%f%f%f",&a,&b,&c,&d);
	e=a/b*c-b+a*d/3;
	printf("e is %f,e");
}
