/*

5. Write a program which accept string from user and count number of white spaces

Input : “MarvellouS”
Output : 0

Input : “MarvellouS Infosystems”
Output : 1

Input : “MarvellouS Infosystems by Piyush Manohar Khairnnar”
Output : 5

*/

#include<stdio.h>

int CountWhite(char *Str)
{	 
	int iCnt = 0;
	
	while(*Str != '\0')
	{
		if(*Str == ' ')
		{
			iCnt++;
		}
		
		Str++;
	}
	return iCnt;
}	

int main()
{
	char Arr[50];
	int iRet = 0;
	
	printf("Enter string.\n");
	scanf("%[^'\n']s",Arr);
	
	iRet = CountWhite(Arr);
	printf("Number of white spaces in given string are.: %d\t",iRet);
	
	return 0;
}

