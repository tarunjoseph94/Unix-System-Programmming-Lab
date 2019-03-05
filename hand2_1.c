#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>  
int main(int argc, char const *argv[])
{
	int fd;
	if(fd=open(argv[1],O_WRONLY|O_CREAT,0766)==-1)
		printf("Error in open");
	close(fd);
	return 0;
} 
