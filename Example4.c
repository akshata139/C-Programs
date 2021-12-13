/*

4. Write a program which accept string from user and display only digits from that string.

Input : “marve89llous121”
Output : 89121
Input : “Demo”
Output :

*/

#include<stdio.h>

void DisplayDigit(char *Str)
{	 
	char iDigit = '\0';
	
	while(*Str != '\0')
	{
		if((*Str >= 0) && (*Str <= 255))
		{
			if((*Str >= '0') && (*Str <= '9'))
			{
				iDigit = *Str;
				printf("%c\t",iDigit);
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
	
	DisplayDigit(Arr);
	
	return 0;
}