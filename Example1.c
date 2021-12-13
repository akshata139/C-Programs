/*

1.Write a program which accept string from user and convert it into lower case.

Input : “Marvellous Multi OS”
Output : marvellous multi os

*/

#include<stdio.h>

void strlwrX(char *Str)
{	 
	
	while(*Str != '\0')
	{
		if((*Str >= 'A') && (*Str <= 'Z'))
		{
			*Str = *Str + 32;	
		}
		else
		{
			return;
		}
	
		Str++;
	}
}	

int main()
{
	char Arr[50];
	
	printf("Enter string.\n");
	scanf("%[^'\n']s",Arr);
	
	strlwrX(Arr);
	
	printf("Modified string is:%s\n",Arr);
	
	return 0;
}