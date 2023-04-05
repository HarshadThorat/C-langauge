//write application with accept file name from user and open that file in read mode?

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>


int main()
{
	char Fname[20];
	int fd = 0;

	printf("Enter the file name that you want to open\n");
	scanf("%s",&Fname);

	fd = open(Fname,O_RDWR);

	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	else
	{
		printf("File is sucessfully open with FD %d\n",fd);
	}

	close(fd); 


	return 0;
}