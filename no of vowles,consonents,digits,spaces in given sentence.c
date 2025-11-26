//write a c programe to find no of vowels and no of consonents and number of digits and no of spaces in the given sentence//
#include<stdio.h>
int main()
{
	char sen[20];
	int v=0,c=0,d=0,s=0,i;
	
	printf("\nEnter the sentence");
	scanf(" %[^\n]",sen);	//sen=this is cse4 section\0
	
	for(i=0;sen[i]!='\0';i++)
	{
		if(sen[i]=='a' || sen[i]=='e' || sen[i]=='i' || sen[i]=='o' || sen[i]=='u')
			v++;       //1
		else if(sen[i]>='a' && sen[i]<='z')
			c++;
		else if(sen[i]>='0' && sen[i]<='9')	//48
			d++;
		else if(sen[i]==' ')
			s++;
	}
	printf("vowels %d,consonents %d,digits %d,spaces%d",v,c,d,s);
}
