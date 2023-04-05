//write a program which accept string fronm user and count number of capital character
// input  :  Marvellous Multi OS
// output :  4


#include<stdio.h>


int CountCapital(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}


int main()
{
    char Arr[20];
    int ret = 0;

    printf("Enter the string\n");
    scanf("%[^'\n']s",Arr);

    ret = CountCapital(Arr);
    printf("Number of capital letters are : %d\n",ret);

}