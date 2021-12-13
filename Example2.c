/*

2.Write a program which accept string from user and convert it into upper case.

Input : “Marvellous Multi OS”
Output : MARVELLOUS MULTI OS

*/

#include<stdio.h>

void strluprX(char *Str)
{	 
	
	while(*Str != '\0')
	{
		if((*Str >= 'a') && (*Str <= 'z'))
		{
			*Str = *Str - 32;	
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
	
	strluprX(Arr);
	
	printf("Modified string is:%s\n",Arr);
	
	return 0;
}