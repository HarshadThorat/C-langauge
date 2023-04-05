
//write a Recursive program which accept string from user and Count number of white spaces?
//Input : He ll o
// output : 2


#include<stdio.h>
#include<stdlib.h>

int CountWhiteSpacesR(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }
        str++;
        CountWhiteSpacesR(str);
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

    ret = CountWhiteSpacesR(Arr);
    printf("Number of white spaces are : %d\n",ret);

    return 0;
}