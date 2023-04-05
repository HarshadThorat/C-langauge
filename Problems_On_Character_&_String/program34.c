//write program which accept  arrays of character from user and replace each capital character with its corresponding small character 
//Input :  b  N   j  B  R  b  A  d  G   G
//Outut :  b  n   j  b  r  b  a  d  g   g
//          


#include<stdio.h>
#include<stdlib.h>

void LowerCase(char Arr[], int size)
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < size; iCnt++)
    {
       if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
       {
            Arr[iCnt] = Arr[iCnt] + 32;
       }
       printf("%c\t",Arr[iCnt]);
    }
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
    
    LowerCase(ptr1,No1);
    
    
	return 0;
}