// Accept N nmber from user and return product of all Odd numbers
//input   N :  6
//        eletments : 15 66 3 70 10 88
// output : 45  (15 * 3)


#include<stdio.h>
#include<stdlib.h>


int OddProduct(int Arr[], int Size)
{
    int iCnt = 0;
    int Mult = 1;

    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            Mult = Mult * Arr[iCnt];
        }
    }
    return Mult;
}


int main()
{
    int *ptr = NULL;
    int iCnt = 0;
    int ret = 0;
    int size = 0;
    
    printf("Enter the number of elements\n");
    scanf("%d",&size);

    ptr = (int *)malloc(sizeof(int) * size);

    printf("Enter the elements\n");
    for(iCnt = 0; iCnt < size; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    ret = OddProduct(ptr,size);
    printf("Product of the odd Number is : %d\n",ret);

}