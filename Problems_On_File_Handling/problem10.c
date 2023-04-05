//write a program which accept file name from user and one count from user and read that number of character from starting position? 

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>


int CountFrequency(char Name[],int iSize)
{
	int ret = 0;
	int Length = 0, i = 0;
	char Data[100];

	ret = open(Name,O_RDWR);

	if(ret == -1)
	{
		printf("Unable to open file\n");
		return -1;
	}

	while((Length = read(ret,Data,sizeof(Data))) != 0)
	{
		for(i = 0; i < iSize; i++)
		{
			printf(" %c",Data[i]);
		}
	}

}


int main()
{
	char Fname[20];
	int cValue = 0;

	printf("Enter the file name that you want to open\n");
	scanf("%s",&Fname);

	printf("Enter the Number of character\n");
	scanf(" %d",&cValue);

	CountFrequency(Fname,cValue);

	
	return 0;

}