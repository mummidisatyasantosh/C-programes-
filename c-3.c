/*write a c program to read and display a character,a string and a sentence*/
#include<stdio.h>
int main()
{
	char ch;
	char word[10];
	char sentence[50];
	
	scanf("%c",&ch);
	scanf("%s\n",word);
	scanf("&[^\n]s",sentence);
	
	
	printf("character is %c\n",ch);
	printf("wrod is %s\n",word);
	printf("sentence is %s\n",sentence);
}
