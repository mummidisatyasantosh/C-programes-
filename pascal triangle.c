#include<stdio.h>
int main()
{
	int i,j,val,rows;
	printf("enter the no.of rows");
	scanf("%d",&rows);
	for(i=0;i<rows;i++)
	
    for(j=0;j<row-i;j++)
      printf("  ");
      val=1;
      for(j=0;j<=i;j++)
      {
      	printf("%4d",val);
      	val=val*(i-j)/(i+1);
	  }
	  printf("\n");
}
