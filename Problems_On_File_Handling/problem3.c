//write application with accept file name from user and read all tha data from that file and display contends on the screen?

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>


int main()
{
	char Fname[20];
	int fd = 0, Length = 0;
	char Data[20];

	printf("Enter the file name that you want to open\n");
	scanf("%s",&Fname);

	fd = open(Fname,O_RDWR);

	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;
	}

	printf("Data from the file is : \n");
	
	while((Length = read(fd,Data,sizeof(Data))) != 0)
	{
		write(1,Data,Length);
	}

	close(fd); 


	return 0;
}