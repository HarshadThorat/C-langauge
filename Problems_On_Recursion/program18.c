//write a Recursive program which accept string from user and Count number of small character ?
//Input : Hello
// output : 4


#include<stdio.h>
#include<stdlib.h>

int CountSmallCharR(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCnt++;
        }
        str++;
        CountSmallCharR(str);
    } 
    return iCnt;
}

int main()
{
    int size = 0;
    char Arr[20] = {0};
    int ret = 0;
   
    printf("Enter the size of array\n");
    scanf("%[^'\n']s",Arr);

    ret = CountSmallCharR(Arr);
    printf("Number of Small letters are : %d\n",ret);

    return 0;
}