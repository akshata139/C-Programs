
/*1. Accept number of rows and number of columns from user and display below 
pattern.
Input : iRow = 4 iCol = 4
Output : 
A B C D
A B C D
A B C D
A B C D

*/

#include<stdio.h>

void PatternDisplay(int, int);

int main()
{
	int iValue1 = 0, iValue2 = 0;
	
	printf("Enter number of rows.\n");
	scanf("%d",&iValue1);
	
	printf("Enter number of Columns.\n");
	scanf("%d",&iValue2);
	
	PatternDisplay(iValue1, iValue2);
	
	return 0;
}

void PatternDisplay(int iRow, int iCol)
{
	int iCnt1 = 0, iCnt2 = 0;
	char ch = '\0';
	
	for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
	{
		for(iCnt2 = 1,ch = 'A'; iCnt2 <= iCol; iCnt2++,ch++)
		{
			printf("%c \t",ch);
		}
		
		printf("\n");
	}
}