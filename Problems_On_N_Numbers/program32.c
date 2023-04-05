//write program which accept  arrays from user Replace each member with summation of its digit 
//Input :  89  687  56  549   87   9
//Outut :  17   21  11   18   15    9
//          

#include<stdio.h>
#include<stdlib.h>

void Summation(int Arr[], int size)
{
    int iCnt = 0;
    int Sum = 0;
    int iDigit = 0;

    printf("Addition of array digit is : \n"); 
    for(iCnt = 0; iCnt < size; iCnt++)
    {
        while(Arr[iCnt] != 0)
        {
            iDigit = Arr[iCnt] % 10;
            Sum = Sum + iDigit;
            Arr[iCnt]  = Arr[iCnt] / 10;
        }
        printf("%d\t",Sum);
        Sum = 0;
    }
}

int main()
{
	int No1 = 0;
    int *ptr1 = NULL;
    int iCnt = 0;
   
	printf("Enter the Size of first array\n");
	scanf("%d",&No1);

    ptr1 = (int *)malloc(sizeof(int) * No1);

    printf("Elements of first array\n");
    for(iCnt = 0; iCnt < No1; iCnt++)
    {
        scanf("%d",&ptr1[iCnt]);
    }
    
	
    Summation(ptr1,No1);
    
	return 0;
}