//write program which accept  arrays of character from user and accept one character. return occurance of that character without considering case 
//Input :  b  N   j  B  R  b  A  d  G   G
//Outut :  B    Ans = 3          


#include<stdio.h>
#include<stdlib.h>

int CheckOccurance(char Arr[], int size, char ch)
{
    int iCnt = 0;
    int ipos = -1;

    for(iCnt = 0; iCnt < size; iCnt++)
    {
        if(Arr[iCnt] == ch)
        {
            ipos = iCnt;
            break;
        }
    }    

    if(ipos == -1)
    {
        return -1;
    }    
    else
    {
        return ipos;
    }
}

int main()
{
	int No1 = 0;
    char *ptr1 = NULL;
    int iCnt = 0;
    int ret = 0;
    char cvalue = '\0';

	printf("Enter the Size of array\n");
	scanf("%d",&No1);

    ptr1 = (char *)malloc(sizeof(char) * No1);

    printf("Elements of character of array\n");
    for(iCnt = 0; iCnt < No1; iCnt++)
    {
        scanf(" %c",&ptr1[iCnt]);
    }
    
    printf("Enter the character you have to find\n");
	scanf(" %c",&cvalue);

    ret = CheckOccurance(ptr1,No1,cvalue);
    if(ret == -1)
    {
        printf("Character not present in array\n");
    }
    else
    {
        printf("Character present in array at Index : %d\n",ret);
    }
    
	return 0;
}