//write a Recursive program which accept number from user and return the summation of its digit?
//Input : 879
// output : 24


#include<stdio.h>
#include<stdlib.h>

int CountCharR(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        iCnt++;
        str++;
        CountCharR(str);
    } 
    return iCnt;
}

int main()
{
    int size = 0;
    char *Arr = NULL;
    int ret = 0;
    int i = 0;

    printf("Enter the size of array\n");
    scanf("%d",&size);
    
    Arr = (char *)malloc(sizeof(char) * size);

    for(i = 0; i < size; i++)
    {
        scanf(" %c",&Arr[i]);
    }

    ret = CountCharR(Arr);
    printf("Number of characters are : %d\n",ret);

    return 0;
}