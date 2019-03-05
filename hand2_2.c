#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>  
int main(int argc, char const *argv[])
{
	int fd;
	int n=50;
	char buf[70];
	if((fd=open(argv[1],O_RDWR))==-1)
		printf("Error in open");
	while((n=read(fd,buf,20))>0)
		write(1,buf,n);
	//printf("%d",n);
	close(fd);
	return 0;
} 