//write a program which accept string fronm user and count number of Small character
// input  :  Marvellous
// output :  9


#include<stdio.h>


int CountSmall(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
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

    ret = CountSmall(Arr);
    printf("Number of Small letters are : %d\n",ret);

}