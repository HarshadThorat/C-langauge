//write program which accept  arrays of character from user and count number of capital character 
//Input :  b  N   j  B  R  b  A  d  G   G
//Outut :  6
//          


#include<stdio.h>
#include<stdlib.h>

int CountCapital(char Arr[], int size)
{
    int iCnt = 0;
    int i = 0;
    
    for(iCnt = 0; iCnt < size; iCnt++)
    {
       if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
       {
            i++;
       }
    }
    return i;
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
    
    ret = CountCapital(ptr1,No1);
    printf("Number of capital character are : %d\n",ret);

	return 0;
}