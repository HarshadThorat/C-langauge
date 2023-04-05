//write a program which accept string from user and return difference between frequency of small character and frequency of capital character.
// input  :  MarvellouS
// output :  6 (8-2)


#include<stdio.h>


int CountDiff(char *str)
{
    int iCntCap = 0;
    int iCntSml = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCntSml++;
        }
        else
        {
            iCntCap++;
        }
        str++;
    }
    return (iCntSml - iCntCap);
}


int main()
{
    char Arr[20];
    int ret = 0;

    printf("Enter the string\n");
    scanf("%[^'\n']s",Arr);

    ret = CountDiff(Arr);
    printf("Difference is : %d\n",ret);

}