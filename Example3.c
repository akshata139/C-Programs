/*

3.Write a program which accept string from user and toggle the case.

Input : “Marvellous Multi OS”
Output : mARVELLOUS mULTI os

*/

#include<stdio.h>

void strtoggleX(char *Str)
{	 
	
	while(*Str != '\0')
	{
		if((*Str >= 0) && (*Str <= 255))
		{
			if((*Str >= 'a') && (*Str <= 'z'))
			{
				*Str = *Str - 32;	
			}
			else if((*Str >= 'A') && (*Str <= 'Z'))
			{
				*Str = *Str + 32;
			}
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
	
	strtoggleX(Arr);
	
	printf("Modified string is:%s\n",Arr);
	
	return 0;
}