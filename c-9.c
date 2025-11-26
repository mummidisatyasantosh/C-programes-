//write a C program to perform bitwise operations
#include<stdio.h>
int main ()
{
  int a,b;
  printf("Enter any two integer numbers");
  scanf("%d,%d" ,&a,&b);
  
  printf("\nBitwise operation of %d & %d = %d",a,b,a&b);
  printf("\nBitwise operation of %d | %d = %d",a,b,a|b);
  printf("\nBitwise operation of %d ^ %d = %d",a,b,a^b);
  printf("\nBitwise operation of %d <<%d = %d",a,b,a<<b);
  printf("\nBitwise operation of %d >>%d = %d",a,b,a>>b);
  
}
