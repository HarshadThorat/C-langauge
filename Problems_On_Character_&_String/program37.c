//write program which accept  arrays of character from user and return the difference between of capital and frequency of small character
//Input :  b  N   e  B  R  b  A  I  O   G  i
//Outut :  3  (7-4)
//          


#include<stdio.h>
#include<stdlib.h>

int Difference(char Arr[], int size)
{
    int iCnt = 0;
    int iCntCap = 0;
    int iCntSml = 0;

    for(iCnt = 0; iCnt < size; iCnt++)
    {
        if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z')) 
        {
            iCntCap++;
        }
        else
        {
            iCntSml++;
        }
    }    
    return (iCntCap - iCntSml);
}

int main()
{
	int No1 = 0;
    char *ptr1 = NULL;
    int iCnt = 0;
    int ret = 0;
    
	printf("Enter the Size of array\n");
	scanf("%d",&No1);

    ptr1 = (char *)malloc(sizeof(char) * No1);

    printf("Elements of character of array\n");
    for(iCnt = 0; iCnt < No1; iCnt++)
    {
        scanf(" %c",&ptr1[iCnt]);
    }
    
    ret = Difference(ptr1,No1);
    printf("Difference of capital and small character are : %d\n",ret);
    
	return 0;
}