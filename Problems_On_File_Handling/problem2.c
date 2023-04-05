//write application with accept file name from user and create that file?

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>


int main()
{
	char Fname[20];
	int fd = 0;
	
	printf("Enter the file name that you want to create\n");
	scanf("%s",&Fname);

	fd = creat(Fname,0777);

	if(fd == -1)
	{
		printf("Unable to create file\n");
		return -1;
	}
	else
	{
		printf("File is sucessfully created with FD %d\n",fd);
	}

	close(fd); 


	return 0;
}