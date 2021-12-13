/*

5. Accept N numbers from user and display summation of digits of each number.

Input : N : 6
Elements :8225 665 3 76 953 858
Output : 17 17 3 13 17 21

*/

#include<stdio.h>
#include<stdlib.h>

void DigitSum(int *Brr, int iLen)
{
	int iCnt = 0,iDigit = 0;
	
	for(iCnt = 0; iCnt < iLen; iCnt++)
	{	
		int Counter = 0;
		
		while(Brr[iCnt] != 0)
		{	
			iDigit = Brr[iCnt] % 10;
			
			Counter = Counter + iDigit;
			
			Brr[iCnt] = Brr[iCnt] / 10;
		}
		
		printf("%d\n",Counter);
		
		Brr++;
	}
}

int main()
{
	int *Arr = NULL;
	int iCnt = 0, iSize = 0;

	
	printf("Enter the number of elements .\n");
	scanf("%d",&iSize);
	
	Arr = (int* )malloc(sizeof(int) * iSize);
	
	if(Arr == NULL)
	{
		printf("Unable to allocate memory.\n");
	}
	
	printf("Enter Elements.\n");
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
	}
	
	printf("Result is :\n");
	DigitSum(Arr, iSize);

	
	free(Arr);
	
	return 0;
}