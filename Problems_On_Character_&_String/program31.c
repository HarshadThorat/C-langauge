//Write a program which accepts 2 strings from user and concat N characters of second string after first string.Value of N should be accepted from user.

//Note: If third parameter is greater than the size of second string then concat whole string after first string.
// Input : Marvellous Infosystem
//         Logic Building
//          5
//output : "Marvellous Infosystem Logic" 


#include<stdio.h>

void StrCatX(char *str , char * Dest , int iNo)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        str++;
    }

    *str = ' ';
    str++;
    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        *str = *Dest;
        if(*str == ' ')
            *Dest = ' ';
        str++;
        Dest++;
    }

}

int main()
{
    char Arr[60] = {'\0'};
    char Brr[30] = {'\0'};

    int No = 0;


    printf("Enter the First String\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the Second String\n");
    scanf(" %[^'\n']s",Brr);

    printf("Enter the Number of character of 2nd string that you want to concat : \n");
    scanf("%d",&No);


    StrCatX(Arr,Brr,No);
    printf("String Copied as : \n%s",Arr);  

    return 0;
    
}