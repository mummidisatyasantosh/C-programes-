//write a C program to calculate simple interest and Compound interest
#include<stdio.h>
#include<math.h>    //pow(a,b)
int main()
{
   float p,t,r,si,ci;
   printf("enter the principal amount");
   scanf("%f",&p);
   printf("\nEnter time ");
   scanf("%f",&t);
   printf("\nEnter rate of interest");
   scanf("%f",&r);
   
   si=(p*t*r)/100.0;
   ci=p* pow((1+r/100.0),t)-p;
   printf("\nThe simple interest is %f",si);
   printf("\nThe compound interest is %f",ci);
   return 0;   
   
}
