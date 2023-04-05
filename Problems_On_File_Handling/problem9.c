//write a program which accept file name from user and count number of white spaces from the file? 

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>


int CountFrequency(char Name[],char ch)
{
	int ret = 0;
	int Length = 0, iCnt = 0, i = 0;
	char Data[100];

	ret = open(Name,O_RDWR);

	if(ret == -1)
	{
		printf("Unable to open file\n");
		return -1;
	}

	while((Length = read(ret,Data,sizeof(Data))) != 0)
	{
		for(i = 0; i < Length; i++)
		{
			if(Data[i] == ch) 
			{
				iCnt++;
			}
		}
		return iCnt;
	}

}


int main()
{
	char Fname[20];
	int Ret = 0;
	char ch = '0';

	printf("Enter the file name that you want to open\n");
	scanf("%s",&Fname);

	printf("Enter the character that you want to find\n");
	scanf(" %c",&ch);

	Ret = CountFrequency(Fname,ch);

	printf("Frequency is : %d\n",Ret);

	return 0;
}